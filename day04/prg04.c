#include <stdio.h>
#include <string.h>

int main()
{
	char str[100];// = "This is to test string"; //dec with initialisation
	int len = 0;
	//char *str1;

	//strcpy(str,"This is a test");

	fgets(str, 98, stdin);

	len = strlen(str);

	puts(str);

	fgets(str, 98, stdin);

	//len = strlen(str);

	puts(str);

	//printf("\n%s and its length=%d",str,len);

	printf("\nstr[0]=%c \t str[1]=%c \n",str[0],str[1]);
	printf("\nstr[strlen-1]=%c and its ascii value=%d", str[len-1], str[len-1]);

	printf("\n\n");



	return 0;
}