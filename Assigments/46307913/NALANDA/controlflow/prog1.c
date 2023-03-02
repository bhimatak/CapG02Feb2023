#include <stdio.h> 

#include <stdlib.h>

int main()
{

    int a,b,c,result;
    printf("\nEnter three numbers: \n");
    scanf("\n%d\n%d\n%d",&a,&b,&c);
    result=c < (a < b ? a : b) ? c : ((a < b) ? a : b);

    printf("\nThe Smallest number is: %d\n",result);
    return 0;
}

