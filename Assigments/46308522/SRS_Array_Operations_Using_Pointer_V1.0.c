#include <stdio.h>
#include <string.h>

#define MAX_LEN 100

// Function to copy contents of one array to another using pointer
void copy_array(char *src, char *dest) {
    while (*src != '\0') {
        *dest = *src;
        src++;
        dest++;
    }
    *dest = '\0';
}

// Function to update a given index of an array
void update_array(char *arr, int index, char ch) {
    arr[index] = ch;
}

// Function to concatenate a given array to an existing source array content using subscripts
void concat_array(char *src, char *dest) {
    int len = strlen(dest);
    while (*src != '\0') {
        dest[len] = *src;
        src++;
        len++;
    }
    dest[len] = '\0';
}

// Function to display contents of an array using pointer
void display_array(char *arr) {
    printf("%s\n", arr);
}

int main() {
    char arr1[MAX_LEN] = "Chakde";
    char arr2[MAX_LEN];
    char arr3[MAX_LEN] = " India";

    // Copying contents of arr1 to arr2
    copy_array(arr1, arr2);
    printf("Array 2 after copying Array 1: ");
    display_array(arr2);

    // Updating index 3 of arr2
    update_array(arr2, 3, 'p');
    printf("Array 2 after updating index 3: ");
    display_array(arr2);

    // Concatenating arr3 to arr2
    concat_array(arr3, arr2);
    printf("Array 2 after concatenation: ");
    display_array(arr2);

    return 0;
}
