#include<stdio.h>

int main()

{
   int i,j;
   int num,flag;
   int sum,it=0;
   printf("Enter a number\n");
   scanf("%d",&num);
   for(i=2;i<=num;i++)
      { 
	    flag=0;
	    for(j=2;j,j<=(i/2);j++)
		  {
		     if(i%j==0)
			   {
			     flag=1;
			    }
			 if(flag==0)
			    {
			    sum=i+j;

				if(sum==num)
				   {
				      printf("%d + %d =%d \n",i,j,sum);
					  it++;
				   }
		        }
          }  
	}
  printf("No of ways =%d\n",it);
 return 0;
}
