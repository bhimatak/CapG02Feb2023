/*
 *  Simple example of a CUnit unit test.
 *
 *  This program (crudely) demonstrates a very simple "black box"
 *  test of the standard library functions fprintf() and fread().
 *  It uses suite initialization and cleanup functions to open
 *  and close a common temporary file used by the test functions.
 *  The test functions then write to and read from the temporary
 *  file in the course of testing the library functions.
 *
 *  The 2 test functions are added to a single CUnit suite, and
 *  then run using the CUnit Basic interface.  The output of the
 *  program (on CUnit version 2.0-2) is:
 *
 *           CUnit : A Unit testing framework for C.
 *           http://cunit.sourceforge.net/
 *
 *       Suite: Suite_1
 *         Test: test of fprintf() ... passed
 *         Test: test of fread() ... passed
 *
 *       --Run Summary: Type      Total     Ran  Passed  Failed
 *                      suites        1       1     n/a       0
 *                      tests         2       2       2       0
 *                      asserts       5       5       5       0

 * installation of CUnit:
   $sudo apt-get install libcunit1 libcunit1-doc libcunit1-dev

*  running the CUnit codes:
   gcc cunitTest.c -lcunit

   

 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "file1.h"
#include <CUnit/Basic.h>


/* Pointer to the file used by the tests. */
static FILE* temp_file = NULL;

/* The suite initialization function.
 * Opens the temporary file used by the tests.
 * Returns zero on success, non-zero otherwise.
 */
int init_suite1(void)
{
   if (NULL == (temp_file = fopen("temp.txt", "w+"))) {
      return -1;
   }
   else {
      return 0;
   }
}

/* The suite cleanup function.
 * Closes the temporary file used by the tests.
 * Returns zero on success, non-zero otherwise.
 */
int clean_suite1(void)
{
   if (0 != fclose(temp_file)) {
      return -1;
   }
   else {
      temp_file = NULL;
      return 0;
   }
}

/* Simple test of fprintf().
 * Writes test data to the temporary file and checks
 * whether the expected number of bytes were written.
 */

void testFPRINTF(void)
{
   int i1 = 10;

   if (NULL != temp_file) {
      CU_ASSERT(0 == fprintf(temp_file, ""));
      CU_ASSERT(2 == fprintf(temp_file, "Q\n"));
      CU_ASSERT(7 == fprintf(temp_file, "i1 = %d", i1));
   }
}

/* Simple test of fread().
 * Reads the data previously written by testFPRINTF()
 * and checks whether the expected characters are present.
 * Must be run after testFPRINTF().
 */
void testFREAD(void)
{
   unsigned char buffer[20];

   if (NULL != temp_file) {
      rewind(temp_file);
      CU_ASSERT(9 == fread(buffer, sizeof(unsigned char), 20, temp_file));
      CU_ASSERT(0 == strncmp(buffer, "Q\ni1 = 10", 9));
   }
}

void test_add(void)
{
     
      CU_ASSERT(add(2,2)==4);
   
}

void UT_TC_02(void)
{
     float ExpectedValue = 0.0;
      CU_ASSERT(div1(5,0)==ExpectedValue);
   
}

void UT_TC_03(void)
{
     char *_name = "Bhima";
     int ExpectedValue = 1;
      CU_ASSERT(validName(_name)==ExpectedValue);
   
}

void UT_TC_03_01(void)
{
     char *_name = NULL;
     int ExpectedValue = 0;
      CU_ASSERT(validName(_name)==ExpectedValue);
   
}

void UT_TC_03_02(void)
{
     char *_name = "1bhima";
      int ExpectedValue = 0;
   //  printf("\nRet=%d\n",isdigit(_name[0]));
      CU_ASSERT(validName(_name)==ExpectedValue);
   
}

void UT_TC_03_03(void)
{
     char *_name = "bhi1ma";
      int ExpectedValue = 0;
   //  printf("\nRet=%d\n",isdigit(_name[0]));
      CU_ASSERT(validName(_name)==ExpectedValue);
   
}

void UT_TC_03_04(void)
{
     char *_name = "bhi@ma";
      int ExpectedValue = 0;
   //  printf("\nRet=%d\n",isdigit(_name[0]));
      CU_ASSERT(validName(_name)==ExpectedValue);
   
}

void UT_TC_03_05(void)
{
     char *_name = "bhi ma";
      int ExpectedValue = 0;
   //  printf("\nRet=%d\n",isdigit(_name[0]));
      CU_ASSERT(validName(_name)==ExpectedValue);
   
}


void UT_TC_04(void)
{
     char *ExpectedValue = "bhima";
      //int ExpectedValue = 0;
   //  printf("\nRet=%d\n",isdigit(_name[0]));
      CU_ASSERT(strcmp(getName(),ExpectedValue)==0);
   
}

/* The main() function for setting up and running the tests.
 * Returns a CUE_SUCCESS on successful running, another
 * CUnit error code on failure.
 */
int main()
{
   CU_pSuite pSuite = NULL;

   /* initialize the CUnit test registry */
   if (CUE_SUCCESS != CU_initialize_registry())
      return CU_get_error();

   /* add a suite to the registry */
   pSuite = CU_add_suite("Suite_1", init_suite1, clean_suite1);
   if (NULL == pSuite) {
      CU_cleanup_registry();
      return CU_get_error();
   }

   /* add the tests to the suite */
   /* NOTE - ORDER IS IMPORTANT - MUST TEST fread() AFTER fprintf() */
   if (
      
      (NULL == CU_add_test(pSuite, "test of validName(char*)", UT_TC_03)) ||
      (NULL == CU_add_test(pSuite, "rainny test of validName(char*)", UT_TC_03_01)) ||
      (NULL == CU_add_test(pSuite, "rainny test of validName(char*)", UT_TC_03_02)) || 
      (NULL == CU_add_test(pSuite, "rainny test of validName(\"bhi1ma\")", UT_TC_03_03)) || 
      (NULL == CU_add_test(pSuite, "rainny test of validName(\"bhi@ma\") ", UT_TC_03_04)) ||
      (NULL == CU_add_test(pSuite, "rainny test of validName(\"bhi ma\") ", UT_TC_03_05)) ||
      (NULL == CU_add_test(pSuite, "Sunny test of getName()", UT_TC_04))||
      
      (NULL == CU_add_test(pSuite, "UT_TC_01", test_add)) ||
      (NULL == CU_add_test(pSuite, "UT_TC_02", UT_TC_02))
      )
   {
      CU_cleanup_registry();
      return CU_get_error();
   }

   /* Run all tests using the CUnit Basic interface */
   CU_basic_set_mode(CU_BRM_VERBOSE);
   CU_basic_run_tests();
   CU_cleanup_registry();
   return CU_get_error();
}
