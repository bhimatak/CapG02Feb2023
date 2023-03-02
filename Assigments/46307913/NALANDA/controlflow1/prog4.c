#include<stdio.h> 
int main()
{
        int fact=1;
        int count,num;
        printf("Enter a number:");
        scanf("%d",&num);
        for(count = 1;count <= num;count++)
        {
                fact = fact * count;
        }
        printf("factorial of %d is :%d \n",num,fact);
        return 0;
}

