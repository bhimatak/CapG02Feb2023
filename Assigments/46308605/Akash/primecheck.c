#include <stdio.h>
#include <stdbool.h>

bool is_prime(int num) {
    if (num < 2) {
        return false;
    }
    int i;
    for (i = 2; i*i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    scanf("%d", &n);

    int count = 0;
    int num = 2;
    int result = -1;
    while (count < n) {
        int temp = num;
        bool prime = true;
        while (temp > 0) {
            int digit = temp % 10;
            if (digit != 2 && digit != 3 && digit != 5 && digit != 7) {
                prime = false;
                break;
            }
            temp /= 10;
        }
        if (prime && is_prime(num)) {
            count++;
            result = num;
        }
        num++;
    }

    if (result == -1) {
        printf("No prime number made of prime digits found!");
    } else {
        printf("a[%d]:%d", n, result);
    }

    return 0;
}
