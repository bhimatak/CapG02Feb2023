
	

	

#include <stdio.h>

#define MAX_ARRAY_SIZE 10

void init_array(int arr[], int arr_size) {
int i;
    for (i = 0; i < arr_size; i++) {
        arr[i] = 0;
    }
}

void display_array(int arr[], int arr_size) {
int i;
    for (i = 0; i < arr_size; i++) {
        printf("%d\n", arr[i]);
    }
}

int accept_array(int arr[], int max_size) {
    int num_elements,i;
    printf("Enter the number of elements to enter: ");
    scanf("%d", &num_elements);
    if (num_elements > max_size) {
 num_elements = max_size;
    }
    printf("Enter %d integers: ", num_elements);
    for (i = 0; i < num_elements; i++) {
        scanf("%d", &arr[i]);
    }
    return num_elements;
}

int sum_max_min(int arr[], int arr_size) {
    int max = arr[0],i;
    int min = arr[0];
    for (i = 1; i < arr_size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }
 return max + min;
}

int count_occurrences(int arr[], int arr_size, int item) {
    int count = 0,i;
    for (i = 0; i < arr_size; i++) {
        if (arr[i] == item) {
            count++;
        }
    }
    return count;
}

void reverse_array(int arr[], int arr_size) {
int i;
    for (i = 0; i < arr_size / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[arr_size - 1 - i];
        arr[arr_size - 1 - i] = temp;
    }
}

int main() {
    int my_array[MAX_ARRAY_SIZE];
    int item;
    int num_elements = accept_array(my_array, MAX_ARRAY_SIZE);
    printf("The array is:\n");
    display_array(my_array, num_elements);
    printf("The sum of the maximum and minimum element is: %d\n", sum_max_min(my_array, num_elements));
    printf("Enter a integer value to count its occurrences: ");
    scanf("%d", &item);
    printf("The number of occurrences of %d is: %d\n", item, count_occurrences(my_array, num_elements, item));
    reverse_array(my_array, num_elements);
    printf("The reversed array is:\n");
    display_array(my_array, num_elements);
    return 0;
}
