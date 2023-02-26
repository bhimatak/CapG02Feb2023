#include<stdio.h>

int sumOfPrime(int);
int isPrime(int);
int main()
{ 
  int num;

  printf("Entera number\n");
  scanf("%d",&num);
  sumOfPrime(num);
  return 0;

}

int sumOfPrime(int num)
 {
  int sum,i,j;
  int flag,flag2;
  int count= 0;
 for(i=2;i<=num;i++)
    {
	 flag = isPrime(i);
	     if(flag==0)
	     {
		    for(j=i;j<=num;j++)
			 {
			      flag2=isPrime(j);
				   if(flag2==0)
				    {
			         sum=i+j;
				      if(sum==num)
				      {
					     printf("%d + %d =%d \n",i,j,num);
						 count++;
			     	  }
			   }
	         }
	 }
   }
 if(count==0)
   {
     printf("NO NUMBER OF WAYS\n");
   }
  return 0;
}
 int isPrime(int n)
 { 
    int i,flag=0;

	if(n<=1)
	  {
	    flag=1;
      }
     if(flag!=1)
	    {
		  for(i=2;i<n;i++)
		    {
			  if((n%i)==0)
			      {
				    flag=1;
					break;
	              }
		   }
		}
  return flag;
  }

