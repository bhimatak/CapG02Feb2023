#include <stdio.h>
      2 int Sum(int n);
      3 int main(){
      4    int num, i;
      5    printf("Enter number: ");
      6    scanf("%d", &num);
      7    int flag = 0;
      8    for(i = 2; i <= num/2; ++i){
      9       if (sum(i) == 1){
     10          if (sum(num-i) == 1){
     11             printf("\n%d can be the sum of prime %d + %d\n", num, i, num - i);
     12             flag = 1;
     13          }
     14       }
     15    }
     16    if (flag == 0)
     17    printf("\n %d cannot be the sum of two prime s\n", num);
     18    return 0;
     19 }
     20 
     21 int sum(int n){
     22    int i, isPrime = 1;
     23    for(i = 2; i <= n/2; ++i){
     24       if(n % i == 0){
     25          isPrime = 0;
     26          break;
     27       }
     28    }
     29    return isPrime;
     30 }
     31 

