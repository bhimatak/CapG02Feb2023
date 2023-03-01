#include <stdio.h>

int enterArrayElements(int arr[], int n, int maxSize) {
  int count = 0;
  
  if (n > maxSize) {
    n = maxSize;
  }

  printf("Enter up to %d integer values, one per line:\n", n);
  for (int i = 0; i < n; i++) {
    int value;
    printf("Element %d: ", i+1);
    scanf("%d", &value);
    arr[i] = value;
    count++;
  }
  return count;
}

int main() {
  int arr[10];
  int n, maxSize;

  printf("Enter the maximum number of elements to accept: ");
  scanf("%d", &maxSize);

  printf("Enter the number of elements to enter: ");
  scanf("%d", &n);

  int count = enterArrayElements(arr, n, maxSize);

  printf("Accepted %d elements.\n", count);
  printf("The array contains:\n");
  for (int i = 0; i < count; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");

  return 0;
}
