#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFF 1024

typedef struct Person {
    int height;
    int age;
    char name[BUFF];
    struct Person* next;
} PER;

PER* readPerson();
void displayNodes(PER* head);
PER* copyPerson(PER* last);
void freeNodes(PER* head);

int main() {
    PER* head = NULL;
    PER* temp = NULL;
    PER* last = NULL;
    PER* newNode = NULL;
    int ch = 1;

    while (ch) {
        newNode = readPerson();
        if (head == NULL) {
            head = newNode;
            temp = head;
        } else {
            temp->next = newNode;
            temp = temp->next;
        }
        printf("Do you want to add a new record(1/0)? ");
        scanf("%d", &ch);
    }

    printf("\n\n=========Details of all the persons stored in linked list===========\n\n");
    displayNodes(head);

    printf("\n\n==========Details of the Last Person==========\n\n");
    last = copyPerson(temp);
    printf("Height: %d\n", last->height);
    printf("Age: %d\n", last->age);
    printf("Name: %s\n\n", last->name);
    free(last);

    freeNodes(head);

    return 0;
}

PER* readPerson() {
    PER* newNode = (PER*)malloc(sizeof(PER));
    if (newNode == NULL) {
        printf("Memory allocation failed\n");
        exit(EXIT_FAILURE);
    }

    int height, age;
    char name[BUFF];

    printf("Enter the height: ");
    scanf("%d", &height);

    printf("Enter age: ");
    scanf("%d", &age);

    printf("Enter the name: ");
    scanf(" ");
    scanf("%[^\n]s", name);

    newNode->height = height;
    newNode->age = age;
    strcpy(newNode->name, name);
    newNode->next = NULL;

    return newNode;
}

void displayNodes(PER* head) {
    PER* current = head;

    while (current != NULL) {
        printf("Height = %d\n", current->height);
        printf("Age = %d\n", current->age);
        printf("Name = %s\n\n", current->name);
        current = current->next;
    }
}

PER* copyPerson(PER* last) {
    PER* person = (PER*)malloc(sizeof(PER));

    person->height = last->height;
    person->age = last->age;
    strcpy(person->name, last->name);
    person->next = NULL;

    return person;
}

void freeNodes(PER* head) {
    PER* current = head;
    PER* temp = NULL;

    while (current != NULL) {
        temp = current;
        current = current->next;
        free(temp);
    }
}
