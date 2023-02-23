#include <stdio.h>
#include <string.h>

void getName(char *);

int main()
{
	int i;
	char eName[10];
	memset(eName, '\0', 10);

	getName(eName);

	for(i=0;i<=strlen(eName);i++)
		printf("%c ",eName[i]);

	/*printf("\n%s", eName);*/

	return 0;
}


void getName(char *Name)
{
	scanf("%s",Name);
}