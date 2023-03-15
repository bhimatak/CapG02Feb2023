#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE_LENGTH 1024
#define MAX_NAME_LENGTH 256
#define MAX_PHONE_LENGTH 16

/* Change: added function prototypes */
int getFileStrings(char* filename, char*** lines, int* num_lines);
void display(char** lines, int num_lines);
int addRecord(char* filename, char* name, char* phone);

int main(int argc, char* argv[]) {
    /* Change: added input validation */
    if (argc < 2) {
        printf("Usage: %s <filename> [name] [phone]\n", argv[0]);
        return EXIT_FAILURE;
    }

    char** lines = NULL;
    int num_lines = 0;

    /* Change: added error handling for getFileStrings() */
    if (getFileStrings(argv[1], &lines, &num_lines) != EXIT_SUCCESS) {
        printf("Error reading file\n");
        return EXIT_FAILURE;
    }

    display(lines, num_lines);

    /* Change: added option to add a new record */
    if (argc == 4) {
        if (addRecord(argv[1], argv[2], argv[3]) != EXIT_SUCCESS) {
            printf("Error adding record\n");
            return EXIT_FAILURE;
        }
        printf("Record added successfully\n");
    }

    /* Change: added memory deallocation */
    for (int i = 0; i < num_lines; i++) {
        free(lines[i]);
    }
    free(lines);

    return EXIT_SUCCESS;
}

int getFileStrings(char* filename, char*** lines, int* num_lines) {
    FILE* fp = fopen(filename, "r");
    if (!fp) {
        return EXIT_FAILURE;
    }

    char buffer[MAX_LINE_LENGTH];
    int line_count = 0;

    /* Count the number of lines */
    while (fgets(buffer, MAX_LINE_LENGTH, fp)) {
        line_count++;
    }

    /* Allocate memory for the lines */
    *lines = (char**) malloc(line_count * sizeof(char*));
    if (!*lines) {
        fclose(fp);
        return EXIT_FAILURE;
    }

    /* Read the lines */
    fseek(fp, 0, SEEK_SET);
    for (int i = 0; i < line_count; i++) {
        if (!fgets(buffer, MAX_LINE_LENGTH, fp)) {
            fclose(fp);
            return EXIT_FAILURE;
        }
        int line_length = strlen(buffer);
        (*lines)[i] = (char*) malloc((line_length + 1) * sizeof(char));
        if (!(*lines)[i]) {
            fclose(fp);
            return EXIT_FAILURE;
        }
        strncpy((*lines)[i], buffer, line_length);
        (*lines)[i][line_length] = '\0';
    }

    fclose(fp);
    *num_lines = line_count;
    return EXIT_SUCCESS;
}

void display(char** lines, int num_lines) {
    for (int i = 0; i < num_lines; i++) {
        printf("%s", lines[i]);
    }
}

int addRecord(char* filename, char* name, char* phone) {
    /* Change: added input validation */
    if (strlen(name) > MAX_NAME_LENGTH || strlen(phone) > MAX_PHONE_LENGTH) {
        return EXIT_FAILURE;
    }

    FILE* fp = fopen(filename, "a");
    if (!fp) {
        return EXIT_FAILURE;
    }

    fprintf(fp, "%s, %s\n", name, phone);

    fclose(fp);
    return EXIT_SUCCESS;
}
