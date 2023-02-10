/*
	unformatted io statements

	getchar()
	getc()
	gets()
	putchar()
	putc()
	puts()
*/

#include <stdio.h>

int main()
{

	char c;

	printf("\nInput a character: ");
	/*c = getchar();

	//printf("\nThe input value=%c\tAscii value=%d\n",c,c);
	printf("\nThe input value=");
	putchar(97);
	*/

	c = getc(stdin);
	printf("\nThe input value=");
	putc(c, stdout);

	printf("\n\n");

	return 0;

}