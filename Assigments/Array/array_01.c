#include <stdio.h>

void displayArray(int arr[], int n) {
  
  for (int i = 0; i < n; i++) {
    printf("%d\n", arr[i]);
  }
}

int main() {
  int arr[] = {1, 2, 3, 4, 5};
  int n = 3;
  
  printf("Displaying first %d elements of the array:\n", n);
  displayArray(arr, n);
  
  return 0;
}