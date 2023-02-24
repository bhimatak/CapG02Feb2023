#include <stdio.h>

int main() {
    int gnum, digit, freq[10] = {0},i;

    printf("Enter a positive integer: ");
    scanf("%d", &gnum);

    while (gnum > 0) {
        digit = gnum % 10;

        freq[digit]++;

       
        gnum /= 10;
    }

    printf("Unique digits: ");
    for (i = 0; i < 10; i++) {
        if (freq[i] == 1) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
