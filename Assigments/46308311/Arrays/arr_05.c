#include <stdio.h>

void myrev(int myarray[], int maxarrsize) {
    int temp;
    
   
    for (int i = 0, j = maxarrsize - 1; i < j; i++, j--) {
        temp = myarray[i];
        myarray[i] = myarray[j];
        myarray[j] = temp;
    }
}

int main() {
    int n;
    
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    

    myrev(arr, n);
    

    printf("The contents of the reversed array are:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}
