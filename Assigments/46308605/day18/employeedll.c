#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Employee {
    char name[50];
    int id;
    int salary;
    struct Employee* next;
    struct Employee* prev;
} Employee;

Employee* top = NULL;
Employee* head = NULL;
Employee* tail = NULL;

void push() {
    Employee* emp = (Employee*) malloc(sizeof(Employee));
    printf("Enter employee name: ");
    scanf("%s", emp->name);
    printf("Enter employee ID: ");
    scanf("%d", &emp->id);
    printf("Enter employee salary: ");
    scanf("%d", &emp->salary);

    emp->next = top;
    emp->prev = NULL;
    if (top != NULL) {
        top->prev = emp;
    }
    top = emp;

    if (head == NULL) {
        head = emp;
    }
    tail = emp;
}

void pop() {
    if (top == NULL) {
        printf("Stack is empty\n");
        return;
    }

    Employee* temp = top;
    top = top->next;
    if (top != NULL) {
        top->prev = NULL;
    }
    free(temp);
}

void display() {
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }

    printf("Employee details:\n");
    Employee* curr = head;
    while (curr != NULL) {
        printf("Name: %s, ID: %d, Salary: %d\n", curr->name, curr->id, curr->salary);
        curr = curr->prev;
    }
}

int main() {
    int choice;
    do {
        printf("\nEmployee Details Application\n");
        printf("1. Add employee\n");
        printf("2. Remove employee\n");
        printf("3. Display employee details\n");
        printf("4. Exit\n");
        printf("\nEnter your choice: ");
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
                printf("Invalid choice\n");
        }
    } while (choice != 4);

    return 0;
}
