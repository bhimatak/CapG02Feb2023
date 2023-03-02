#include<stdio.h> 
int main()
{
    int a,b=0xAA,c=0x55;
    printf("\nEnter number: \n");
    scanf("%u",&a);
    a=((a&b)>>1) | ((a&c)<<1);
    printf("\n%u\n",a);
}

