/*


char *s = "this is a C class"
                


token = strtok(s, " "); => this

strtok and s are in the main mem

after the first call to strtok pointer of strtok will be point to the string 
in the main mem.

for the next call on the same string as it is in the main mem
need not pass the s string instead we need to pass NULL


token = strtok(NULL, " ")=> is 



*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int cWords = 0;
	char s[] = "|1001|Airtel|1002|101|This is a message|";

	char *token;
	/*
	token = strtok(s," ");
	printf("\nToken 1 : %s", token);

	token = strtok(NULL," ");
	printf("\nToken 2 : %s", token);

	token = strtok(NULL," ");
	printf("\nToken 3 : %s", token);

	token = strtok(NULL," ");
	printf("\nToken 4 : %s", token);

	token = strtok(NULL," ");
	printf("\nToken 5 : %s", token);

	token = strtok(NULL," ");
	printf("\nToken 6 : %s", token);
	*/

	cWords = 0;
	token = strtok(s,"|");

	while(token!=NULL)
	{
		printf("\nToken %d : %s", (cWords+1),token);
		token = strtok(NULL, "|");
		cWords++;
	}

	printf("\nNo of words in string are %d", cWords);

	printf("\n\n");

	return 0;
}