#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE_LENGTH 80

struct Node {
    char line[MAX_LINE_LENGTH];
    struct Node* next;
};

void push(struct Node** head, char* line) {
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
    if (new_node == NULL) {
        printf("Memory allocation failed!\n");
        return;
    }
    strcpy(new_node->line, line);
    new_node->next = *head;
    *head = new_node;
}

char* pop(struct Node** head) {
    if (*head == NULL) {
        return NULL;
    }
    struct Node* temp = *head;
    char* line = (char*) malloc(MAX_LINE_LENGTH * sizeof(char));
    if (line == NULL) {
        printf("Memory allocation failed!\n");
        return NULL;
    }
    strcpy(line, temp->line);
    *head = temp->next;
    free(temp);
    return line;
}

void display(struct Node* head) {
    printf("Stack contents:\n");
    while (head != NULL) {
        printf("%s", head->line);
        head = head->next;
    }
}

int read_file(char* filename, struct Node** stack) {
    FILE* fp;
    char line[MAX_LINE_LENGTH];
    int line_count = 0;
    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("File open failed!\n");
        return -1;
    }
    while (fgets(line, MAX_LINE_LENGTH, fp) != NULL) {
        push(stack, line);
        line_count++;
    }
    fclose(fp);
    return line_count;
}

int print_longest_line(struct Node* head) {
    int max_length = 0;
    printf("Longest line(s):\n");
    while (head != NULL) {
        int length = strlen(head->line);
        if (length > max_length) {
            max_length = length;
        }
        head = head->next;
    }
    head = *(&head);
    while (head != NULL) {
        if (strlen(head->line) == max_length) {
            printf("%s", head->line);
        }
        head = head->next;
    }
    return max_length;
}

void write_output_file(char* filename, struct Node* head) {
    FILE* fp;
    fp = fopen(filename, "w");
    if (fp == NULL) {
        printf("File open failed!\n");
        return;
    }
    while (head != NULL) {
        fputs(head->line, fp);
        head = head->next;
    }
    fclose(fp);
}

int main(int argc, char* argv[]) {
    if (argc < 3) {
        printf("Usage: ./program input_file output_file\n");
        return 1;
    }
    char* input_filename = argv[1];
    char* output_filename = argv[2];
    struct Node* stack = NULL;
    int line_count = read_file(input_filename, &stack);
    if (line_count == -1) {
        return 1;
    }
    printf("Number of lines read: %d\n", line_count);
    display(stack);
    int longest_line_length = print_longest_line(stack);
    printf("Length of longest line: %d\n", longest_line_length);
    write_output_file(output_filename, stack);
    return 0;
}
