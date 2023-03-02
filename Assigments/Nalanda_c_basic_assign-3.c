#include <stdio.h>

// Function to display an array
void display_array(int arr[], int num_elements) {
    for (int i = 0; i < num_elements; i++) {
        printf("%d\n", arr[i]);
    }
}

// Function to accept elements into an array
int accept_array(int arr[], int max_size, int num_elements) {
    printf("Enter %d elements:\n", num_elements);
    for (int i = 0; i < num_elements; i++) {
        if (i >= max_size) {
            printf("Maximum array size exceeded. Exiting input loop.\n");
            break;
        }
        scanf("%d", &arr[i]);
    }
    return i;
}

// Function to perform Bubble Sort on an array
void bubble_sort(int arr[], int num_elements) {
    int temp;
    for (int i = 0; i < num_elements - 1; i++) {
        for (int j = 0; j < num_elements - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    display_array(arr, num_elements);
}

// Function to perform Merge Sort on an array
void merge(int arr[], int l, int m, int r) {
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;

    int L[n1], R[n2];

    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void merge_sort(int arr[], int l, int r) {
    if (l < r) {
        int m = l + (r - l) / 2;

        merge_sort(arr, l, m);
        merge_sort(arr, m + 1, r);

        merge(arr, l, m, r);
    }
}

void display_sorted_array(int arr[], int num_elements) {
    merge_sort(arr, 0, num_elements - 1);
    display_array(arr, num_elements);
}

// Function to perform binary search on a sorted array
int binary_search(int arr[], int left, int right, int search_element) {
    while (left <= right) {
        int middle = left + (right - left) / 2;

        if (arr[middle] == search_element)
            return middle;

        if (arr[middle] < search_element)
            left = middle + 1;

        else
            right = middle - 1;
    }

    return -1;
}

int main() {
    int arr[MAX_SIZE];
    int n, x;

    // Read array
    printf("Enter the number of elements in the array (up to %d): ", MAX_SIZE);
    scanf("%d", &n);
    n = read_array(arr, n);

    // Display original array
    printf("Original array:\n");
    display_array(arr, n);

    // Bubble sort
    bubble_sort(arr, n);
    printf("Array after bubble sort:\n");
    display_array(arr, n);

    // Merge sort
    merge_sort(arr, 0, n-1);
    printf("Array after merge sort:\n");
    display_array(arr, n);

    // Binary search
    printf("Enter the value to search for: ");
    scanf("%d", &x);
    int result = binary_search(arr, 0, n-1, x);
    if (result == -1) {
        printf("Value not found in the array.\n");
    } else {
        printf("Value found at index %d.\n", result);
    }

    return 0;
}