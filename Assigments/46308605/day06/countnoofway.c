#include <stdio.h>

int main() {
    int num, count = 0;
    int i,j,k;

    printf("Enter a number ");
    scanf("%d", &num);

    for (i = 1; i <= num - 3; i++) {
        for (j = 1; j <= num - i - 2; j++) {
            for ( k = 1; k <= num - i - j - 1; k++) {
                int l = num - i - j - k;
                if (l >= k && l <= num - i - j) {
                    count++;
                    printf("%d + %d + %d + %d\n", i, j, k, l);
                }
            }
        }
    }

    printf("Count: %d\n", count);

    return 0;
}
