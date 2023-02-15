/*#include <stdio.h>

int is_prime(int n) {
    if (n <= 1) {
        return 0;
    }
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int n, count = 0, i = 2;

    printf("Enter the value of N: ");
    scanf("%d", &n);

    while (count < n) {
        int num = i;
        int is_prime_digits = 1;
        while (num != 0) {
            int digit = num % 10;
            if (!is_prime(digit)) {
                is_prime_digits = 0;
                break;
            }
            num /= 10;
        }
        if (is_prime_digits) {
            count++;
        }
        if (count == n) {
            printf("The %dth number with prime digits is: %d", n, i);
            break;
        }
        i++;
    }

    return 0;
}*/


#include <stdio.h>
#include <stdbool.h>


bool isPrime(int num) {
    int it;
    if (num <= 1) {
        return 0;
    }
    for (it = 2; it < num; it++) {
        if (num % it == 0) {
            return 0;
        }
    }
    return 1;
}

bool isPrimeDigits(int num) {
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
    int num, count = 0, it = 2;

    printf("Enter the value of N: ");
    scanf("%d", &num);

    while (count < num) {
        if (isPrimeDigits(it)) {
            count++;
        }
        it++;
    }

    printf("The %d-th number made of prime digits is: %d", num, it-1);

    return 0;
}


