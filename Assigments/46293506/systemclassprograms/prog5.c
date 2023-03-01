#include<stdio.h>

int main()
{
  int evennum=1;
  int oddnum=1;
  int num=0;
  int count=0;
  int i;
  int rev=0;
  int rem=0;


  printf("Enter a number\n");
  scanf("%d",&num);
  while(num!=0)
  {
     rem=(num) %10;
	 rev=(rev*10)+rem;
	 num=num/10;
	 count++;
	      if(count%2==0)
		    {
			    evennum=evennum*rem;
			}
	      else
			 {
			    oddnum =oddnum*rem;
	         }
   }

	 printf("even places product: %d\n",evennum);
	 printf("odd places product: %d\n",oddnum);
	 if(oddnum==evennum)
	    {
	      printf("%d and %d are equal\n",evennum,oddnum);
    	}
		else
		{	   
	      printf("%d and %d are not equal\n",evennum,oddnum);
        }
 }
  
