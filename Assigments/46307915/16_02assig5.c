/*#include <stdio.h>

void sort_desc(int *arr, int size) {
    int *i, *j;
    int temp;

    for (i = arr; i < arr + size - 1; i++) {
        for (j = i + 1; j < arr + size; j++) {
            if (*j > *i) {
                temp = *i;
                *i = *j;
                *j = temp;
            }
        }
    }
}

int main() {
    int size, i;
    int arr[50];

    printf("Enter size of the array: ");
    scanf("%d", &size);

    printf("Enter elements in the array:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    sort_desc(arr, size);

    printf("Array sorted in descending order:\n");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}*/

/*find string length using functions and pointer*/

#include <stdio.h>

int length_of_string(char *);

int main() {
    char str[100];
    printf("Enter a string: ");
    gets(str);
    int length = length_of_string(str);
    printf("Length of the string including spaces: %d\n", length);
    return 0;
}

int length_of_string(char *ptr) {
    int count = 0;
    while (*ptr != '\0') {
        count++;
        ptr++;
    }
    return count;
}



