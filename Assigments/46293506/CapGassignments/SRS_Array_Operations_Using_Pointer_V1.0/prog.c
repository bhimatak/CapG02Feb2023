#include<stdio.h>
#include<string.h>

int copyChar(char *,char *);

int main()
{
	char src[20];
	char dest[20];
	int i;
	printf("Enter a string\n");
	scanf("%s",src);
	copyChar(src,dest);
	for(i=0;i<strlen(src);i++)
	{
		printf("%c",*(dest + i));
	}
	printf("\n\n");

	return 0;
}

int copyChar(char *src,char *dest)
{
	
	int i;
	for(i=0;i<strlen(src);i++)
	{
		*(dest+i) =*(src+i);
	}
}

