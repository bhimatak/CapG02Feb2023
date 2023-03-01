#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
	char sName[20]="bhima shaNkar @124";
	int i;

	for(i=0;i<strlen(sName);i++)
	{
		sName[i] = toupper(sName[i]);
	}
	printf("\nCOnverted string : %s",sName);

	printf("\n\n");
	return 0;
}

