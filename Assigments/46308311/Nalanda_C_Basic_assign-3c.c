#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LENGTH 80

int getFirstNames(char arr[][MAX_LENGTH], int rowcount, char *firstnames[]) {
    int i;
    char *token;

    for (i = 0; i < rowcount; i++) {
        token = strtok(arr[i], ":");
        if (token == NULL) {
            fprintf(stderr, "Error: Invalid input format in row %d.\n", i);
            return EXIT_FAILURE;
        }
        firstnames[i] = token;
    }

    return EXIT_SUCCESS;
}

int getLastNames(char arr[][MAX_LENGTH], int rowcount, char *lastnames[]) {
    int i;
    char *token;

    for (i = 0; i < rowcount; i++) {
        token = strtok(arr[i], ":");
        if (token == NULL) {
            fprintf(stderr, "Error: Invalid input format in row %d.\n", i);
            return EXIT_FAILURE;
        }
        token = strtok(NULL, ":");
        if (token == NULL) {
            fprintf(stderr, "Error: Invalid input format in row %d.\n", i);
            return EXIT_FAILURE;
        }
        lastnames[i] = token;
    }

    return EXIT_SUCCESS;
}

int main() {
    char arr[][MAX_LENGTH] = {"Antony:Joseph", "Lata:Mary", "Rajesh:Kumar", "Joly:Akbar"};
    int rowcount = sizeof(arr) / sizeof(arr[0]);

    char *firstnames[rowcount];
    char *lastnames[rowcount];

    // Get first names
    if (getFirstNames(arr, rowcount, firstnames) != EXIT_SUCCESS) {
        fprintf(stderr, "Error: Failed to extract first names.\n");
        return EXIT_FAILURE;
    }

    printf("First names:\n");
    int i;
    for (i = 0; i < rowcount; i++) {
        printf("%s\n", firstnames[i]);
    }

    // Get last names
    if (getLastNames(arr, rowcount, lastnames) != EXIT_SUCCESS) {
        fprintf(stderr, "Error: Failed to extract last names.\n");
        return EXIT_FAILURE;
    }

    printf("Last names:\n");
    for (i = 0; i < rowcount; i++) {
        printf("%s\n", lastnames[i]);
    }

    return EXIT_SUCCESS;
}
