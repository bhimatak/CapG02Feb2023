#include <stdio.h>

int main() {
  int size, i, k, temp, j;
 
 
  printf("Enter array size: ");
  scanf("%d", &size);

  int a[size];

 
  printf("Enter %d elements: ", size);
  for (i = 0; i < size; i++) {
    scanf("%d", &a[i]);
  }

 
  printf("Enter k: ");
  scanf("%d", &k);

 
  for (i = 0; i < size; i += k) {
    if (i + k <= size) {
      for (j = 0; j < k/2; j++) {
        temp = a[i+j];
        a[i+j] = a[i+k-1-j];
        a[i+k-1-j] = temp;
      }
    } else {
      for (j = 0; j < (size-i)/2; j++) {
        temp = a[i+j];
        a[i+j] = a[size-1-j];
        a[size-1-j] = temp;
      }
    }
  }

 
  printf("Rotated array: ");
  for (i = 0; i < size; i++) {
    printf("%d ", a[i]);
  }
  return 0;
}
