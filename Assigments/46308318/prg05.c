#include <stdio.h>

int is_prime(int n) {
    if (n <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int n;
    printf("\nEnter the number that you want"); 
    scanf("%d", &n);
    
    int count = 0;
    int num = 2;
    while (count < n) {
    int temp = num;
   int is_prime_digit = 1;
   while (temp != 0) {
    int digit = temp % 10;
  if (!is_prime(digit)) {
      is_prime_digit = 0;
     break;
  }
  temp /= 10;
 }
 if (is_prime_digit) {
    count++;
 }
 num++;
    }
    
  printf("%d", num-1);
  return 0;
}
