#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LENGTH 20
#define ARRAY_SIZE 4

char arr[ARRAY_SIZE][MAX_LENGTH] = {"user1", "user2", "user3", "user4"};

// ARR/01
char* swap_elements(char arr[][MAX_LENGTH], int index) {
    char* temp = (char*) malloc(MAX_LENGTH * sizeof(char));
    strcpy(temp, arr[0]);
    strcpy(arr[0], arr[index]);
    strcpy(arr[index], temp);
    free(temp);
    return arr[index];
}

// ARR/02
int isVowel(char c) {
    switch(c) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            return EXIT_SUCCESS;
        default:
            return EXIT_FAILURE;
    }
}

// ARR/03
char* remove_vowel(char arr[][MAX_LENGTH], int index) {
    int len = strlen(arr[index]);
    int j = 0;
    for(int i = 0; i < len; i++) {
        if(isVowel(arr[index][i]) == EXIT_FAILURE) {
            arr[index][j++] = arr[index][i];
        }
    }
    arr[index][j] = '\0';
    return arr[index];
}

// ARR/04
char* mystrcat(char *s1, char *s2) {
    int len1 = strlen(s1);
    int len2 = strlen(s2);
    for(int i = 0; i < len2; i++) {
        s1[len1 + i] = s2[i];
    }
    s1[len1 + len2] = '\0';
    return s1;
}

// ARR/05
void display(char arr[][MAX_LENGTH]) {
    for(int i = 0; i < ARRAY_SIZE; i++) {
        printf("%s\n", arr[i]);
    }
}

int main() {
    printf("Original array:\n");
    display(arr);

    // test ARR/01
    printf("\nAfter swapping element at index 2:\n");
    char* swapped_element = swap_elements(arr, 2);
    printf("Swapped element: %s\n", swapped_element);
    display(arr);

    // test ARR/02 and ARR/03
    printf("\nAfter removing vowels from element at index 1:\n");
    int index = 1;
    if(isVowel(arr[index][0]) == EXIT_SUCCESS) {
        printf("Cannot remove vowels from element with index %d, it starts with a vowel.\n", index);
    } else {
        char* updated_element = remove_vowel(arr, index);
        printf("Updated element: %s\n", updated_element);
        display(arr);
    }

    // test ARR/04
    printf("\nAfter concatenating element at index 2 with element at index 1:\n");
    int index1 = 1, index2 = 2;
    mystrcat(arr[index1], arr[index2]);
    printf("Concatenated element: %s\n", arr[index1]);
    display(arr);

    return 0;
}