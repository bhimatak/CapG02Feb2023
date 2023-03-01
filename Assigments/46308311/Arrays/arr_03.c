#include <stdio.h>

int main() {
    int n, max, min;
    
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    max = arr[0];
    min = arr[0];
    
  
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    
   
    int sum = max + min;
    printf("Sum of maximum and minimum elements is %d\n", sum);
    
    return 0;
}
