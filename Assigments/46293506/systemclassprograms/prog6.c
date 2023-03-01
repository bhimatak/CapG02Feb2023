#include<stdio.h>

int main()
{
   int i,j,k,l;
   int sum=0;
   int num;
   int count=0;
   printf("Enter a number\n");
   scanf("%d",&num);
   for(i=1;i<=num;i++)
    {
      for(j=i;j<=num;j++)
         {
		   for(k=j;k<=num;k++)
             {
                for(l=k;l<=num;l++)
				  {
				  sum=(i+j+k+l);
				    if(sum==num)
					  {
					    printf("i: %d j: %d k: %d l: %d\n",i,j,k,l);
					    count++;
				      }
			      }
		     }
	    }
    }
 printf("%d\n",count);
retutn 0;
}
	   
