#include <stdio.h>


int isPrime(int num) {
    if (num <= 1) {
        return 0;
    }
    for (int i = 2; i <= num/2; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}


int isPrimeDigits(int num) {
    while (num > 0) {
        int digit = num % 10;
        if (!isPrime(digit)) {
            return 0;
        }
        num /= 10;
    }
    return 1;
}

int main() {
    int n, count = 0, num = 2;
    scanf("%d", &n);
    while (count < n) {
        if (isPrimeDigits(num)) {
            count++;
            if (count == n) {
                printf("%d", num);
                break;
            }
        }
        num++;
    }
    return 0;
}
