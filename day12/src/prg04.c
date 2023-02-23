#include <stdio.h>
#include <myHeader.h>

#define rows 3

int main()
{

	char eName[rows][BUFF];

	setList(eName, rows);
	dispList(eName, rows);

	printf("\n\n");
	return 0;
}