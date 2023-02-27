#include<stdio.h>
#include<string.h>
#define MAX 100

int getStringLen(char *);
int getString(char *);
int printLen();


int main()
{
        printLen();
	return 0;
}

int getString(char *str)
{
	printf("Enter a string\n");
	scanf("%s",str);
}

int getStringLen(char *str)
{
	int i;
	int len = strlen(str);
	int count=0;
	for(i=0;i<len;i++)
	{
		if(str[i]!='\n')
		{
			count++;
		}
	}
return count;
}

int printLen()
{
	char str[MAX];
	int len;

	getString(str);
	len =getStringLen(str);
	printf("The Length of String :%d\n",len);

}

