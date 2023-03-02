#include<stdio.h> 

#include<math.h>

int main(){

    int a,n;

    long double fact=1;

    printf("\nEnter a number: \n");

    scanf("%d",&n);

    for(a=1;a<=n;a++)

        fact=fact*a;

    printf("\nFactorial of %d is: %Lf\n",n,fact);

    return 0;

}

