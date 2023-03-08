// Optimized Bubble sort in C

#include <stdio.h>

// perform the bubble sort
void bubbleSort(int array[], int size) {
  int swapped = 0;
  int step = 0, i=0;
  // loop to access each array element
  for (step = 0; step < size - 1; ++step) {
    
    // check if swapping occurs  
    
    swapped = 0;
    // loop to compare array elements
    for (i = 0; i < size - step - 1; ++i) {
      
      // compare two array elements
      // change > to < to sort in descending order
      if (array[i] > array[i + 1]) {
        
        // swapping occurs if elements
        // are not in the intended order
        int temp = array[i];
        array[i] = array[i + 1];
        array[i + 1] = temp;
        
        swapped = 1;
      }

    }
    printf("\nStep %d is completed\n",step);
    // no swapping means the array is already sorted
    // so no need for further comparison
    if (swapped == 0) {
      break;
    }
    
  }
}

// print array
void printArray(int array[], int size) {
  for (int i = 0; i < size; ++i) {
    printf("%d  ", array[i]);
  }
  printf("\n");
}

// main method
int main() {
  int data[] = {-2, 45, 0, 11, -9};

  int data1[] = {1, 2, 3, 4, 5};
  
  // find the array's length
  int size = sizeof(data) / sizeof(data[0]);

  bubbleSort(data1, size);
  
  printf("Sorted Array in Ascending Order:\n");
  printArray(data1, size);
}