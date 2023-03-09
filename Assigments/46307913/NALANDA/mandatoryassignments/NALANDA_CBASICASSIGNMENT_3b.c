#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LENGTH 20

char arr[][MAX_LENGTH] = {"user1", "user2", "user3", "user4"};

char *swap_elements(char (*arr)[MAX_LENGTH], int index) {
    char temp[MAX_LENGTH];
    strcpy(temp, arr[0]);
    strcpy(arr[0], arr[index]);
    strcpy(arr[index], temp);
    return arr[index];
}

int isVowel(char ch) {
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        return EXIT_SUCCESS;
    }
    else {
        return EXIT_FAILURE;
    }
}

char *remove_vowel(char (*arr)[MAX_LENGTH], int index) {
    int i, j;
    for (i = 0, j = 0; arr[index][i] != '\0'; i++) {
        if (!isVowel(arr[index][i])) {
            arr[index][j] = arr[index][i];
            j++;
        }
    }
    arr[index][j] = '\0';
    return arr[index];
}

char *mystrcat(char *s1, char *s2) {
    while (*s1 != '\0') {
        s1++;
    }
    while (*s2 != '\0') {
        *s1 = *s2;
        s1++;
        s2++;
    }
    *s1 = '\0';
    return s1;
}

void display(char (*arr)[MAX_LENGTH], int size) {
    int i;
    for (i = 0; i < size; i++) {
        printf("%s ", arr[i]);
    }
    printf("\n");
}

int main() {
    int choice, index;
    char ch, str[MAX_LENGTH];

    do {
        printf("\nMenu:\n");
        printf("1. Swap elements\n");
        printf("2. Check if a character is a vowel\n");
        printf("3. Remove vowels from string\n");
        printf("4. Concatenate strings\n");
        printf("5. Display array\n");
        printf("0. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter index of element to swap with first element: ");
                scanf("%d", &index);
                if (index >= 0 && index < sizeof(arr) / sizeof(arr[0])) {
                    char *result = swap_elements(arr, index);
                    printf("Result: %s\n", result);
                }
                else {
                    printf("Invalid index\n");
                }
                break;

            case 2:
                printf("Enter character to test: ");
                scanf(" %c", &ch);
                if (isVowel(ch) == EXIT_SUCCESS) {
                    printf("%c is a vowel\n", ch);
                }
                else {
                    printf("%c is not a vowel\n", ch);
                }
                break;

            case 3:
                printf("Enter index of string to remove vowels: ");
                scanf("%d", &index);
                if (index >= 0 && index < sizeof(arr) / sizeof(arr[0])) {
                    char *result = remove_vowel(arr, index);
                    printf("Result: %s\n", result);
                }
                else {
                    printf("Invalid index\n");
                    break;
                }
            case 4:
                printf("Enter string 1: ");
                scanf("%s", str);
                printf("Enter string 2: ");
                scanf("%s", arr[0]);
                char *result = mystrcat(str, arr[0]);
                printf("Result: %s\n", str);
                break;

            case 5:
                printf("Array contents: ");
                display(arr, sizeof(arr) / sizeof(arr[0]));
                break;

            case 0:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice\n");
        }
    } while (choice != 0);

    return 0;
}
