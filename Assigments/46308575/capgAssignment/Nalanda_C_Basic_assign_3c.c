#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LENGTH 80

int getFirstNames(char arr[][MAX_LENGTH], int rowcount, char *firstnames[]) {
    int i;
    for (i = 0; i < rowcount; i++) {
        char *token = strtok(arr[i], ":");
        if (token == NULL) {
            return EXIT_FAILURE;
        }
        firstnames[i] = token;
    }
    return EXIT_SUCCESS;
}

int getLastNames(char arr[][MAX_LENGTH], int rowcount, char *lastnames[]) {
    int i;
    for (i = 0; i < rowcount; i++) {
        char *token = strtok(arr[i], ":");
        if (token == NULL) {
            return EXIT_FAILURE;
        }
        while (strtok(NULL, ":") != NULL) {
            token = strtok(NULL, ":");
        }
        lastnames[i] = token;
    }
    return EXIT_SUCCESS;
}

int main() {
    char arr[][MAX_LENGTH] = {"Antony:Joseph", "Lata:Mary", "Rajesh:Kumar", "Joly:Akbar"};
    char *firstnames[4];
    char *lastnames[4];
    int i;
    if (getFirstNames(arr, 4, firstnames) != EXIT_SUCCESS) {
        printf("Error: could not extract first names\n");
        return EXIT_FAILURE;
    }
    if (getLastNames(arr, 4, lastnames) != EXIT_SUCCESS) {
        printf("Error: could not extract last names\n");
        return EXIT_FAILURE;
    }
    printf("First names:\n");
    for (i = 0; i < 4; i++) {
        printf("%s\n", firstnames[i]);
    }
    printf("Last names:\n");
    for (i = 0; i < 4; i++) {
        printf("%s\n", lastnames[i]);
    }
    return EXIT_SUCCESS;
}
