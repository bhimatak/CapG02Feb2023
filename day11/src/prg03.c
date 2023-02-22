#include <stdio.h>
#include <string.h>

int main()
{
	char dName[20];
	char sName[20];

	memset(dName,'\0',20);
	memset(sName,'\0',20);

	printf("\nEnter SName: ");
	scanf("%s",sName);

	printf("\nEnter dName: ");
	scanf("%s",dName);

	printf("\nsName: %s\ndName: %s\n",sName,dName);
	
	//memset(sName,'\0',20);

	//strcat(dName,"\r");
	//strcat(dName,sName);
	strncat(dName,sName,3);

	printf("\nsName: %s\ndName: %s\n",sName,dName);

	printf("\n\n");

	return 0;
}

