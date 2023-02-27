#include<stdio.h>

int main()
{
	int i,count=0;
	char string[100];
	char *ptr;
	ptr = string;

	printf("Enter the string :\n");
	gets(ptr);	
	ptr++;
    ptr = string;
	for (i=0;string[i]!='\0';i++)
	{
		count++;
    }
    
		printf("string length =%d ",i);  
return 0;
}
		 
		
