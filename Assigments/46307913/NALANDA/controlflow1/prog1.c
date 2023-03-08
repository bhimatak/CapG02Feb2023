#include<stdio.h> 


int main(){

    int a,n,sum=0;

    int fact=1;

    printf("\nEnter a number: \n");

    scanf("%d",&n);

    for(a=1;a<=n;a++)
    {

        fact=fact*a;
         
        sum+=fact;

    }

    printf("\nFactorial sum of %d is: %d\n",n,sum);

    return 0;

}

