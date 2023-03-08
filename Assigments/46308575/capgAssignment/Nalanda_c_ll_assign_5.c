#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_WORD_LENGTH 20

// Define a structure for a linked list node
struct Node {
    char word[MAX_WORD_LENGTH+1];
    struct Node *next;
};

// Function to read a text file and store the words in a singly linked list
struct Node* read_file(char *filename) {
    FILE *fp;
    char word[MAX_WORD_LENGTH+1];
    struct Node *head = NULL;
    struct Node *tail = NULL;

    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error: could not open file %s\n", filename);
        return NULL;
    }

    while (fscanf(fp, "%s", word) == 1) {
        // Allocate memory for a new node
        struct Node *new_node = (struct Node*) malloc(sizeof(struct Node));
        if (new_node == NULL) {
            printf("Error: memory allocation failed\n");
            exit(1);
        }

        // Copy the word into the new node
        strncpy(new_node->word, word, MAX_WORD_LENGTH);
        new_node->word[MAX_WORD_LENGTH] = '\0';  // Make sure the string is null-terminated

        // Add the new node to the end of the list
        if (head == NULL) {
            head = tail = new_node;
        } else {
            tail->next = new_node;
            tail = new_node;
        }
    }

    fclose(fp);
    return head;
}

// Function to display the list
void display_list(struct Node *head) {
    if (head == NULL) {
        printf("The list is empty.\n");
    } else {
        printf("List contents:\n");
        while (head != NULL) {
            printf("%s\n", head->word);
            head = head->next;
        }
    }
}

// Function to create a duplicate of the original list
struct Node* duplicate_list(struct Node *head) {
    if (head == NULL) {
        printf("Error: cannot duplicate empty list\n");
        return NULL;
    }

    // Allocate memory for the first node of the new list
    struct Node *new_head = (struct Node*) malloc(sizeof(struct Node));
    if (new_head == NULL) {
        printf("Error: memory allocation failed\n");
        exit(1);
    }

    // Copy the contents of the first node of the original list to the new node
    strncpy(new_head->word, head->word, MAX_WORD_LENGTH);
    new_head->word[MAX_WORD_LENGTH] = '\0';
    new_head->next = NULL;

    // Iterate over the rest of the nodes in the original list and add them to the new list
    struct Node *current_old = head->next;
    struct Node *current_new = new_head;
    while (current_old != NULL) {
        // Allocate memory for a new node
        struct Node *new_node = (struct Node*) malloc(sizeof(struct Node));
        if (new_node == NULL) {
            printf("Error: memory allocation failed\n");
            exit(1);
        }

        // Copy the contents of the old node to the new node
        strncpy(new_node->word, current_old->word, MAX_WORD_LENGTH);
        new_node->word[MAX_WORD_LENGTH] = '\0';
        new_node->next = NULL;

        // Add the new node to the end of the new list
        current_new->next = new_node;
        current_new = new_node;

        current_old = current_old->next;
    }

    return 0;
}

// Function to delete the entire list
void delete_list(struct Node **head_ref) {
struct Node *current = *head_ref;
while (current != NULL) {
struct Node *next = current->next;
free(current);
current = next;
}
*head_ref = NULL;
}

// Main function to test the linked list operations
int main(int argc, char *argv[]) {
if (argc != 2) {
printf("Usage: %s filename\n", argv[0]);
return 1;
}
struct Node *head = read_file(argv[1]);
display_list(head);

struct Node *dup = duplicate_list(head);
display_list(dup);

delete_list(&head);
delete_list(&dup);

return 0;
}

