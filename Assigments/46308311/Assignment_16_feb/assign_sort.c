#include<stdio.h>

int   len_str(char *str)
{
    int len=0;

	while(*str !='\0')
	{
	  len++;
	  str++;
	}
	 
	 return len;

}

int main()
{
   
   
   char str[50];
   
   printf("Enter Anything\n ");
//   fgets(str,50,stdin);
   scanf("%[^\n]",str);
   int len=len_str(str);
   printf("Length of string %d\n",len);

   return 0;

  }
