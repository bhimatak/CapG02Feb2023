#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINES 100
#define MAX_LENGTH 80

// define your data structures here

typedef struct Node {
    char* word;
    struct Node* next;
    int count;
} Node;

typedef struct Stack {
    Node* top;
} Stack;

typedef struct HashTable {
    int size;
    Node** table;
} HashTable;

// function prototypes

void push(Stack* stack, char* word);
char* pop(Stack* stack);
void insert(HashTable* hashtable, char* word);
int lookup(HashTable* hashtable, char* word);
void delete(HashTable* hashtable, char* word);
void delete_stack(Stack* stack, char* word);
void read_file(char lines[MAX_LINES][MAX_LENGTH+1]);
void create_hashtable(HashTable* hashtable, char lines[MAX_LINES][MAX_LENGTH+1]);
void print_most_frequent_words(HashTable* hashtable);

int main() {
    // read user input
    char choice;
    printf("Enter 's' to use stack or 'h' to use hashtable: ");
    scanf("%c", &choice);
    getchar(); // to consume the newline character left by scanf

    // initialize data structure
    if (choice == 's') {
        Stack stack = { .top = NULL };
        // use the stack to store the words read from the file
    } else if (choice == 'h') {
        HashTable hashtable = { .size = 100, .table = calloc(100, sizeof(Node*)) };
        // use the hashtable to store the words read from the file
    } else {
        printf("Invalid choice\n");
        return 1;
    }

    // rest of the code goes here
    // ...
    
    return 0;
}
void push(Stack* stack, char* word) {
    Node* new_node = malloc(sizeof(Node));
    new_node->word = strdup(word);
    new_node->next = stack->top;
    stack->top = new_node;
}

void insert(HashTable* hashtable, char* word) {
    int index = 0;
    for (int i = 0; word[i] != '\0'; i++) {
        index += word[i];
    }
    index %= hashtable->size;

    Node* node = hashtable->table[index];
    while (node != NULL) {
        if (strcmp(node->word, word) == 0) {
            // word already exists in the hashtable, increment its count
            return;
        }
        node = node->next;
    }

    // word does not exist in the hashtable, add it to the table
    Node* new_node = malloc(sizeof(Node));
    new_node->word = strdup(word);
    new_node->next = hashtable->table[index];
    hashtable->table[index] = new_node;
}
int lookup(HashTable* hashtable, char* word) {
    int index = 0;
    for (int i = 0; word[i] != '\0'; i++) {
        index += word[i];
    }
    index %= hashtable->size;

    Node* node = hashtable->table[index];
while (node != NULL) {
    if (strcmp(node->word, word) == 0) {
        // word found, return its count
        return node->count;
    }
    node = node->next;
}

// word not found in the hashtable
return 0;
}
void delete(HashTable* hashtable, char* word) {
    int index = 0;
    for (int i = 0; word[i] != '\0'; i++) {
        index += word[i];
    }
    index %= hashtable->size;

    Node* prev = NULL;
    Node* node = hashtable->table[index];
    while (node != NULL) {
        if (strcmp(node->word, word) == 0) {
            // word found, decrement its count
            node->count--;
            if (node->count == 0) {
                // no more occurrences of the word, delete the node
                if (prev == NULL) {
                    hashtable->table[index] = node->next;
                } else {
                    prev->next = node->next;
                }
                free(node->word);
                free(node);
            }
            return;
        }
        prev = node;
        node = node->next;
    }

    // word not found in the hashtable
}

void delete_stack(Stack* stack, char* word) {
    Node* prev = NULL;
    Node* node = stack->top;
    while (node != NULL) {
        if (strcmp(node->word, word) == 0) {
            // word found, delete the node
            if (prev == NULL) {
                stack->top = node->next;
            } else {
                prev->next = node->next;
            }
            free(node->word);
            free(node);
            node = prev->next; // continue from the next node
        } else {
            prev = node;
            node = node->next;
        }
    }
}
void read_file(char lines[MAX_LINES][MAX_LENGTH+1]) {
    FILE* fp = fopen("filename.txt", "r");
    if (fp == NULL) {
        printf("Error: file not found\n");
        return;
    }

    int i = 0;
    while (i < MAX_LINES && fgets(lines[i], MAX_LENGTH+1, fp) != NULL) {
        // remove the newline character at the end of the line
        int len = strlen(lines[i]);
        if (lines[i][len-1] == '\n') {
            lines[i][len-1] = '\0';
        }
        i++;
    }

    fclose(fp);
}
void create_hashtable(HashTable* hashtable, char lines[MAX_LINES][MAX_LENGTH+1]) {
    for (int i = 0; i < MAX_LINES && lines[i][0] != '\0'; i++) {
        char* token = strtok(lines[i], " ");
        while (token != NULL) {
            insert(hashtable, token);
            token = strtok(NULL, " ");
        }
    }
}
void lookup_word(HashTable* hashtable, char* word) {
    int count = lookup(hashtable, word);
    printf("%s: %d\n", word, count);
}
