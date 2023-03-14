#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE_LENGTH 80
#define MAX_NUM_LINES 80

void read_file(char *filename, char **lines, int *num_lines);
void write_file(char *filename, char **lines, int num_lines);
void reverse_lines(char **lines, int num_lines);

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Usage: %s input_file output_file\n", argv[0]);
        return 1;
    }
   
    char *input_filename = argv[1];
    char *output_filename = argv[2];
    char *lines[MAX_NUM_LINES];
    int num_lines = 0;
   
    read_file(input_filename, lines, &num_lines);
    reverse_lines(lines, num_lines);
    write_file(output_filename, lines, num_lines);
   
    return 0;
}

void read_file(char *filename, char **lines, int *num_lines) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error: cannot open file %s\n", filename);
        exit(1);
    }
   
    char line[MAX_LINE_LENGTH];
    while (fgets(line, MAX_LINE_LENGTH, file)) {
        // Remove newline character from end of line
        line[strcspn(line, "\n")] = '\0';
        // Allocate memory for line and copy contents of line into it
        lines[*num_lines] = (char *) malloc(strlen(line) + 1);
        strcpy(lines[*num_lines], line);
        (*num_lines)++;
    }
   
    fclose(file);
}

void write_file(char *filename, char **lines, int num_lines) {
    FILE *file = fopen(filename, "w");
    if (file == NULL) {
        printf("Error: cannot open file %s\n", filename);
        exit(1);
    }
   
    for (int i = 0; i < num_lines; i++) {
        fprintf(file, "%s\n", lines[i]);
    }
   
    fclose(file);
}

void reverse_lines(char **lines, int num_lines) {
    char *temp;
    for (int i = 0; i < num_lines/2; i++) {
        // Swap lines i and num_lines-i-1
        temp = lines[i];
        lines[i] = lines[num_lines-i-1];
        lines[num_lines-i-1] = temp;
    }
}

