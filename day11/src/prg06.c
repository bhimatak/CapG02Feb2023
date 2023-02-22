//Assignment 01

#include <stdio.h>
#include <string.h>

int main()
{
	char s1[20];
	char s2[20];
	char s3[20];

	int lenS1=0,i,j;
	int lenS2=0, count;

	memset(s1,'\0',20);
	memset(s2,'\0',20);
	memset(s3,'\0',20);

	printf("\nEnter S1 and S2 values: ");
	scanf("%s%s",s1,s2);

	//logic

	lenS1 = strlen(s1);
	lenS2 = strlen(s2);

	for(i=0, count=0;i<(lenS1>lenS2?lenS1:lenS2);i++)
	{
		//if(i<lenS1)
		//	printf("\n%c = %d\n",s1[i],s1[i]);
		if(s1[i] != '\0')
			s3[count++] = s1[i];
		//printf("\ns1 = %c => %d",s1[i],s1[i]);
		if(s2[i] != '\0')
			s3[count++] = s2[i];
		//printf("\ns2 = %c => %d",s2[i],s2[i]);
		//printf("\ni=%d",i);

	}

	s3[count] = '\0';

	//for(i=0;i<count;i++)
	printf("\n%s\n",s3);

	printf("\n\n");
	return 0;
}