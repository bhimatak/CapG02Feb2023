Akash Sahu <akashsahu7978@gmail.com>
	
5:06 PM (0 minutes ago)
	
to me
#include <stdio.h>

void sort(int *arr, int size) {
    int i, j, temp;
    for (i = 0; i < size; i++) {
       for (j = i + 1; j < size; j++) {
            if (*(arr + j) < *(arr + i)) {
               temp = *(arr + i);
                 *(arr + i) = *(arr + j);
                *(arr + j) = temp;
            }
        }
    }
}

int main() {
    int size, i;
    printf("Enter the size of an array: ");
   
    scanf("%d", &size);
    int arr[size];
   
printf("Enter the elements of an array: ");
    for (i = 0; i < size; i++) {
     scanf("%d", &arr[i]);
    }
    sort(arr, size);
    printf("Sorted array: ");
    for (i = 0; i < size; i++) {
        printf("%d ", *(arr + i));
    }
    return 0;
}
