#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFFER_SIZE 1024

typedef struct Person {
    int height;
    int age;
    char name[BUFFER_SIZE];
    struct Person* next;
} Person;

void read_person(Person* p) {
    printf("Enter the height: ");
    scanf("%d", &p->height);
    printf("Enter the age: ");
    scanf("%d", &p->age);
    printf("Enter the name: ");
    scanf(" ");
    fgets(p->name, BUFFER_SIZE, stdin);
    
    p->name[strcspn(p->name, "\n")] = '\0';
}

void print_person(const Person* p) {
    printf("Height: %d\n", p->height);
    printf("Age: %d\n", p->age);
    printf("Name: %s\n", p->name);
}

void print_list(const Person* head) {
    printf("=========Details of all the persons stored in linked list===========\n\n");
    const Person* p = head;
    while (p != NULL) {
        print_person(p);
        printf("\n");
        p = p->next;
    }
}

Person* copy_person(const Person* p) {
    Person* new_person = (Person*)malloc(sizeof(Person));
    if (new_person == NULL) {
        printf("Memory allocation failed");
        exit(EXIT_FAILURE);
    }
    memcpy(new_person, p, sizeof(Person));
    new_person->next = NULL;
    return new_person;
}

void free_list(Person* head) {
    while (head != NULL) {
        Person* p = head;
        head = head->next;
        free(p);
    }
}

int main() {
    int ch = 1;
    Person* head = NULL;
    Person* last = NULL;
    Person* new_person = NULL;
    
    while (ch) {
        new_person = (Person*)malloc(sizeof(Person));
        if (new_person == NULL) {
            printf("Memory allocation failed");
            exit(EXIT_FAILURE);
        }
        read_person(new_person);
        new_person->next = head;
        head = new_person;
        printf("Do you want to add a new record (1/0)? ");
        scanf("%d", &ch);
    }

    print_list(head);

    if (head == NULL) {
        printf("List is empty, cannot copy last person\n");
    } else {
        last = copy_person(head);
        printf("==========Details of the Last Person==========\n\n");
        print_person(last);
        free(last);
    }

    free_list(head);

    return 0;
}

