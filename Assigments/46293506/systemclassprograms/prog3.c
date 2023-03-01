#include<stdio.h>

int main()
{
  int num=0;
  int rem=0;
  int rev=0;
  int temp=0;
  printf("Enter a number to reverse\n");
  scanf("%d",&num);
  for(temp =num;temp!=0;(temp=temp/10))
  {
      rem=num%10;
	  rev = (rev*10)+rem;
  }
printf("Given number: %d\n Reversed number: %d\n",num,rev);
return 0;
}
 
