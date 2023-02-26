#include<stdio.h>
int main()
{
  int num,rev=0,rem=0;
  printf("Enter a number to reverse\n");
  scanf("%d",&num);
  while(num!=0)
   { 
     rem=num%10;
	 rev = rev*10+rem;
	 num =num/10;
    }
	printf("Number after Reversing =%d\n",rev);
  return 0;

}
