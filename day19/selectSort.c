// Selection sort in C

#include <stdio.h>
int swapped = 0;
// function to swap the the position of two elements
void swap(int *a, int *b) {
  
  int temp = *a;
  *a = *b;
  *b = temp;
}

void selectionSort(int array[], int size) {
  
  for (int step = 0; step < size - 1; step++) {
    // swapped = 0;
    int min_idx = step;
    for (int i = step + 1; i < size; i++) {
      // swapped = 0;
      // To sort in descending order, change > to < in this line.
      // Select the minimum element in each loop.
      if (array[i] < array[min_idx])
      {
        swapped = 1;
        min_idx = i;
      }
      
    }
    printf("\nStep %d is completed\n",step);
    if (swapped == 0) {

        break;
      }

    // put min at the correct position
    if(swapped==1)
      swap(&array[min_idx], &array[step]);

    
    
     
  }

}

// function to print an array
void printArray(int array[], int size) {
  for (int i = 0; i < size; ++i) {
    printf("%d  ", array[i]);
  }
  printf("\n");
}

// driver code
int main() {
  int data[] = {20, 12, 10, 15, 2};
  int data1[] = {1, 2, 3, 4, 5};
  int size = sizeof(data) / sizeof(data[0]);
  selectionSort(data1, size);
  printf("Sorted array in Acsending Order:\n");
  printArray(data1, size);
}