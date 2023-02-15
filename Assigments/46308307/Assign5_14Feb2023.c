#include<stdio.h>
#define A_SIZE 100

int main()
{
	char str1[A_SIZE],str2[A_SIZE];
	int count1=0,count2=0,i;
	char ch = '\0';

	printf("Enter first string\n");
	do
	{
		ch = getc(stdin);
		str1[count1]=ch;
		count1++;
	}while(ch!='\n');
	str1[count1-1]='\0';
	printf("Enter second string\n");
	do
	{
		ch = getc(stdin);
		str2[count2]=ch;
		count2++;
	}while(ch!='\n');
	str2[count2-1]='\0';
	for(i=0;(str1[i]!='\0' || str2[i]!='\0');i++)
	{
		if(str1[i]=='\0')
		{
			printf("%c",str2[i]);
		}
		else if(str2[i]=='\0')
		{
			printf("%c",str1[i]);
		}
		else
		{
			printf("%c%c",str1[i],str2[i]);
		}
	}
	printf("\n\n");
	return 0;
}
