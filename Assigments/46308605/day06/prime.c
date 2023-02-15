#include <stdio.h>

int main() {
    int gnum, i, flag = 0;

    printf("Enter a any number: ");
    scanf("%d", &gnum);
    if (gnum <= 1) {
        printf("%d is not a prime number.\n", gnum);
        return 0;
    }

    for (i = 2; i <= gnum / 2; i++) {
        if (gnum % i == 0) {
            flag = 1;
            break;
        }
    }

    if (flag == 0) {
        printf("%d is a prime number.\n", gnum);
    } else {
        printf("%d is not a prime number.\n", gnum);
    }

    return 0;
}
