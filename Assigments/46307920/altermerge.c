#include<stdio.h>
#include<string.h>

void alternativeMerge(char[],char[],char[]);

int main()
{
	char a[1024];
	char b[1024];
	char c[1024];
	
	memset(a,'\0',1024);
	memset(b,'\0',1024);
	memset(c,'\0',1024);

	printf("\n\nEnter name 1:");
	scanf("%s",a);

	printf("\n\nEnter name 2:");
	scanf("%s",b);

	alternativeMerge(a,b,c);

	
	printf("\n\n%s\n\n",c);

	return 0;

}

void alternativeMerge(char a[],char b[],char c[])
{
	int i=0,j=0;

	for(i=0;i<strlen(a)||i<strlen(b);i++)
	{
		if(i<strlen(a))
		{
			c[j]=a[i];
			j++;
		}
		if(i<strlen(b))
		{
			c[j]=b[i];
			j++;
		}
	}


}
