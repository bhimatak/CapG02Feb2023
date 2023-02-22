#include <stdio.h>

int main(void) {
    unsigned int num;

    printf("\nEnter num: \n ");
    scanf("%u",&num);	
    if(num == 1) {
       int count = 0;
       while (num > 0) {
              count += num & 1;
              num >>= 1;
       }
       printf("%d\n", count);
    }
    else {
         printf("\nNot a valid integer\n");
    }
    return 0;
}

