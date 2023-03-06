#include <stdio.h>
#include <stdlib.h>

struct Employee {
    char name[50];
    int age;
    float salary;
    struct Employee *prev;
    struct Employee *next;
};

struct Employee *head = NULL;
struct Employee *tail = NULL;

void push() {
    struct Employee *newEmployee = (struct Employee*) malloc(sizeof(struct Employee));

    printf("Enter employee name: ");
    scanf("%s", newEmployee->name);
    printf("Enter employee age: ");
    scanf("%d", &newEmployee->age);
    printf("Enter employee salary: ");
    scanf("%f", &newEmployee->salary);

    newEmployee->prev = tail;
    newEmployee->next = NULL;

    if (head == NULL) {
        head = newEmployee;
        tail = newEmployee;
    } else {
        tail->next = newEmployee;
        tail = newEmployee;
    }
}

void pop() {
    if (head == NULL) {
        printf("Stack is empty.\n");
        return;
    }

    struct Employee *temp = tail;

    if (head == tail) {
        head = NULL;
        tail = NULL;
    } else {
        tail = tail->prev;
        tail->next = NULL;
    }

    printf("Popped employee: %s\n", temp->name);

    free(temp);
}

void display() {
    if (head == NULL) {
        printf("Stack is empty.\n");
        return;
    }

    struct Employee *temp = tail;

    while (temp != NULL) {
        printf("Name: %s, Age: %d, Salary: %f\n", temp->name, temp->age, temp->salary);
        temp = temp->prev;
    }
}

int main() {
    int choice;

    do {
        printf("\n");
        printf("1. Push employee details.\n");
        printf("2. Pop employee details.\n");
        printf("3. Display employee details.\n");
        printf("4. Exit.\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice.\n");
        }
    } while (choice != 4);

    return 0;
}
