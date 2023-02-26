#include<stdio.h>
int main()
  {
	 char arr1[20];
	 char arr2[10];
	 char ch1,ch;
         int i=0,j=0;
	 int a,b;
	 do
	 {
	   ch = getc(stdin);
	   arr1[i]=ch;
       i++;
	   }while(ch!='\n');
      a=i;
     arr1[i-1]='\0';
	  do{

	   ch1=getc(stdin);
	   arr2[j]=ch1;
	   j++;
	   }while(ch1!='\n');
      b=j;
	  arr2[j-1]='\0';
      
	   for(i=0;i<a;i++)
	    {
		   printf("%c%c",arr1[i],arr2[i]);
		}

return 0;
} 
