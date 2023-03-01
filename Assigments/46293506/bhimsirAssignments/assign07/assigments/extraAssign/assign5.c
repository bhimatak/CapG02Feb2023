#include<stdio.h>
#include<string.h>

int mergString(char[],char[]);

int main()
{
    char str1[20];
    char str2[10];
	printf("Enter a String one\n");
	scanf("%s",str1);
	printf("Enter a String 2\n");
	scanf("%s",str2);
	printf("TWO STRINGS AFTER MERGING\n");
	mergString(str1,str2);
return 0;
}

int mergString(char str1[],char str2[])
{
   int i;
   int len=strlen(str1);
   int len1=strlen(str2);
   for(i=0;i<(len+len1);i++)
    {
	   printf("%c%c",str1[i],str2[i]);
	}
	return 0;
}
