#include"myHeader.h"
#include<stdio.h>
#include<string.h>

char mergeString(char str1[],char str2[])
{
	int i;
	int len1=strlen(str1);
	int len2=strlen(str2);
	int count=0;
	char str[len1+len2];
	for(i=0;i<(len1>len2?len1:len2);i++)
	{
		if(str1[i]!='\n')
			str[count++]=str1[i];
		if(str2[i]!='\n')
			str[count++]=str2[i];
	}

	printf("%s",str);
}

int printList1()
{
	char str1[50];
	char str2[50];
	char str[50];

	printf("Enter the String one \n");
	scanf("%s",str1);

	printf("Enter the String two \n");
	scanf("%s",str2);

	mergeString(str1,str2);

}
