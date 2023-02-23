/* first para => Base address of the array, second para size of the array */
/* for integer arrays */
#include <string.h>

#define row 3
#define BUFF 1024

void dispArr(int *, int);

void getValArr(int *, int);

void sortAArr(int *, int);

void sortDArr(int *, int);

/* array function for strings */

void dispList(char [row][BUFF], int);

void setList(char [row][BUFF], int);

char **sortStrAsc(char **, int);

char **sortStrDsc(char **, int);
