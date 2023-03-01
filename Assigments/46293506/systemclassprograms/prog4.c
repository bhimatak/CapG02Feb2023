#include<stdio.h>

int main()
{
   int num,rem=0,rev=0,sum=0,product=1;
   printf("enter a number\n");
   scanf("%d",&num);
   while(num!=0)
   {
   rem=num%10;
   sum=sum+rem;
    if( rem==0)
	  {
	    rem=1;
      }
   product = product*rem;
   rev =(rev *10)+rem;
   num=num/10;
   }

   printf("sum: %d\n",sum);
   printf("product:%d\n",product);

}
