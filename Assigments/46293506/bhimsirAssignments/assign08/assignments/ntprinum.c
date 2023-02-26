#include"isprime.h"

int nthPrimeNum(int num,int arr[])
{
   int count=0;
   int i,flag=0;
   int rev,rem;
   for(i=0;i<=num;i++);
     {
	    if(arr[i]==2 || arr[i]==3 || arr[i]==5 || arr[i]==7 )
		 {
		   count++;
			     printf("%d\n",arr[i]);
		 }
     	else if(arr[i]>9)
		  {
		      while(arr[i]!=0)
		       {
			     printf("%d\n",arr[i]);
		         rem=arr[i]%10;
			     rev = (rev*10) + rem;
			     arr[i]=arr[i]/10;
				 
			     printf("%d\n",rem);
				 flag=isPrime(rem);
			     printf("%d\n",flag);
				 if(flag!=1)
			            {
			              
				           count++;
			           }          	
		        }      
           }   
     }		     
		      
	printf("%d \n",count);

	return 0;
}
			     


