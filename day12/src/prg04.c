#include <stdio.h>
#include <myHeader.h>

int main()
{

	char eName[row][BUFF];

	setList(eName, row);
	dispList(eName, row);
	printf("\nSorted List is:\n");
	sortStrAsc(eName, row);
	dispList(eName, row);
	
	printf("\n\n");
	return 0;
}