#include <stdio.h>

int main() {
    int gnum, digit, sum = 0, prod = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &gnum);

    while (gnum > 0) {

        digit = gnum % 10;
        sum += digit;
        prod *= digit;
        gnum /= 10;
    }

    printf("Sum of digits: %d\n", sum);
    printf("Product of digits: %d\n", prod);

    return 0;
}
