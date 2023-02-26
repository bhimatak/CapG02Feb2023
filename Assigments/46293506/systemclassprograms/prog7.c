#include<stdio.h>

 int main()

  {
     int num;
	 int rev =0,i,rem=0,sum=0;
	 printf("Enter a number\n");
	 scanf("%d",&num);
     while(num!=0)
	   {
	     rem = num%10;
		 for(i=1;i<num;i++)
		    {
			  if(sum!=rem)
			     {
				   printf("%d",sum);
				   sum=rem;
		         }
		    }
		 rev = (rev*10) + rem;
		 num=num/10;
	   }
     printf("%d\n",sum);
  }
		  
	     
