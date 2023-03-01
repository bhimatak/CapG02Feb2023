#include <stdio.h>

 int mycount(int myarray[], int item, int maxarrsize) {
    int count = 0;
    
   
    for (int i = 0; i < maxarrsize; i++) {
        if (myarray[i] == item) {
            count++;
        }
    }
    
    return count;
}

int main() {
    int n, target;
    
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the target element: ");
    scanf("%d", &target);
    

    int count = mycount(arr, target, n);
    

    printf("The number of occurrences of %d is %d\n", target, count);
    
    return 0;
}
