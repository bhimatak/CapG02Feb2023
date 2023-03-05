#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LENGTH 20
#define NUM_USERS 4

char arr[NUM_USERS][MAX_LENGTH] = {"Akash", "Bikash", "Soumya", "Sunil"};

char* swap_elements(char arr[][MAX_LENGTH], int index) {
    if (index >= NUM_USERS) {
        printf("Error: Index out of range\n");
        return NULL;
    }
    char temp[MAX_LENGTH];
    strcpy(temp, arr[0]);
    strcpy(arr[0], arr[index]);
    strcpy(arr[index], temp);
    return arr[index];
}

int isVowel(char c) {
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

char* remove_vowel(char arr[][MAX_LENGTH], int index) {
    if (index >= NUM_USERS) {
        printf("Error: Index out of range\n");
        return NULL;
    }
    int i, j;
    for (i = 0, j = 0; arr[index][i] != '\0'; i++) {
        if (!isVowel(arr[index][i])) {
            arr[index][j++] = arr[index][i];
        }
    }
    arr[index][j] = '\0';
    return arr[index];
}

char* mystrcat(char *s1, char *s2) {
    char *p = s1;
    while (*p) {
        p++;
    }
    while (*s2) {
        *p++ = *s2++;
    }
    *p = '\0';
    return s1;
}

void display(char arr[][MAX_LENGTH]) {
    int i;
    for (i = 0; i < NUM_USERS; i++) {
        printf("%s\n", arr[i]);
    }
}

int main() {
    printf("Initial array:\n");
    display(arr);

    // Test swap_elements function
    printf("After swapping element 2:\n");
    char *p = swap_elements(arr, 2);
    if (p) {
        printf("%s\n", p);
    }
    display(arr);

    // Test isVowel function
    printf("Is 'e' a vowel? %d\n", isVowel('e'));
    printf("Is 'z' a vowel? %d\n", isVowel('z'));

    // Test remove_vowel function
    printf("After removing vowels from element 1:\n");
    p = remove_vowel(arr, 1);
    if (p) {
        printf("%s\n", p);
    }
    display(arr);

    // Test mystrcat function
    char str1[MAX_LENGTH] = "Hello";
    char str2[MAX_LENGTH] = "World";
    printf("Concatenated string: %s\n", mystrcat(str1, str2));

    return 0;
}
