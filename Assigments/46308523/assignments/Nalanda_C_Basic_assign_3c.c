/*This application extracts the first names and last names separated by colon from the 2D character array and stores the first names and last names seperately in first names and last names character array respectivey*/


#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX_LEN 80
#define ROW 4


char first[ROW][MAX_LEN];
char last[ROW][MAX_LEN];
char arr[ROW][MAX_LEN]={"Antony:Joseph","Lata:Mary","Rajesh:Kumar","Joly:Akbar"};


int* getFirstNames(char arr1[ ][MAX_LEN], int rowcount,char str1[ ][MAX_LEN])
{
	    
     for(int i=0; i < ROW; i++)
     {
     	const char s[2] = ":";
     	char *token;
						       
							
     	token = strtok(arr1[i], s);
     	strcpy(str1[i], token );
     }
							
     for(int i = 0; i < ROW; i++)
     {
     	printf("%s\n", str1[i]);
     }
						                                            
     return EXIT_SUCCESS;
}
char* getLastNames(char arr1[][MAX_LEN], int rowcount,char str2[][MAX_LEN])
{
     char* las;
     // save length of string
     char arr[ROW][MAX_LEN]={"Antony:Joseph","Lata:Mary","Rajesh:Kumar","Joly:Akbar"};


     for(int i=0; i < ROW; i++)
     {
     	las = strrchr(arr[i],':') ;
     	las++;
     	printf("%s\n",las);
     }
     return EXIT_SUCCESS;
}
int main()
{
     int rowcount=4;
     printf("FirstNames: \n");
     getFirstNames(arr,rowcount,first);
     printf("\n\n");
     printf("LastNames: \n");
     getLastNames(arr,rowcount,last);
     return EXIT_SUCCESS;
}
