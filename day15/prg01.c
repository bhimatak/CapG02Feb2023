#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv)
{
	int i;

	printf("\nHow many args main got: %d", argc);

	for(i=0;i<argc;i++)
		printf("\n%d arg : %s", (i+1), argv[i]);
	

	printf("\n\n");
	exit(EXIT_SUCCESS);
}