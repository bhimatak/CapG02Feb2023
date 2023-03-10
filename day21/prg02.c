#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void conv2Str(int ch, char *str)
{
	//char *result = (char *)malloc(1024);
	switch(ch)
	{
		case 1:
				strcpy(str,"one");
				break;
		case 2:
				strcpy(str,"two");
				break;
		default:
				strcpy(str,"default");

	}

	//free(result);
	// return str;
}
int main()
{
	char *str = (char *)malloc(1024);
	memset(str,'\0',1024);
	conv2Str(2, str);
	printf("\nconvert number to string : %s",str );
	free(str);
	return 0;
}