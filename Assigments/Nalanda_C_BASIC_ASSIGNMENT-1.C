#include <stdio.h>

void initialize(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = 0;
    }
}

void display(int arr[], int num_elements) {
    for (int i = 0; i < num_elements; i++) {
        printf("%d\n", arr[i]);
    }
}

int accept_elements(int arr[], int max_size) {
    int num_elements;
    printf("Enter number of elements to enter (up to %d): ", max_size);
    scanf("%d", &num_elements);
    if (num_elements > max_size) {
        num_elements = max_size;
    }
    printf("Enter %d elements: ", num_elements);
    for (int i = 0; i < num_elements; i++) {
        scanf("%d", &arr[i]);
    }
    return num_elements;
}

int sum_max_min(int arr[], int num_elements) {
    int max = arr[0], min = arr[0];
    for (int i = 1; i < num_elements; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return max + min;
}

int mycount(int arr[], int item, int max_size) {
    int count = 0;
    for (int i = 0; i < max_size; i++) {
        if (arr[i] == item) {
            count++;
        }
    }
    return count;
}

void myrev(int arr[], int max_size) {
    for (int i = 0; i < max_size/2; i++) {
        int temp = arr[i];
        arr[i] = arr[max_size-i-1];
        arr[max_size-i-1] = temp;
    }
}

int main() {
    const int MAX_SIZE = 10;
    int arr[MAX_SIZE];
    int num_elements = 0;

    initialize(arr, MAX_SIZE);
    num_elements = accept_elements(arr, MAX_SIZE);

    printf("Array elements are: \n");
    display(arr, num_elements);

    int sum = sum_max_min(arr, num_elements);
    printf("Sum of max and min element: %d\n", sum);

    int item = 0;
    printf("Enter item to count occurrences of: ");
    scanf("%d", &item);
    int count = mycount(arr, item, num_elements);
    printf("Number of occurrences of %d: %d\n", item, count);

    myrev(arr, num_elements);
    printf("Reversed array elements are: \n");
    display(arr, num_elements);

    return 0;
}