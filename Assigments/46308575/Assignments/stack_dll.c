#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME_LENGTH 50

typedef struct employee {
    char name[MAX_NAME_LENGTH];
    int age;
    int salary;
    struct employee *next;
    struct employee *prev;
} Employee;

Employee *head = NULL;

void push(Employee *newEmployee) {
    if (head == NULL) {
        head = newEmployee;
        head->next = NULL;
        head->prev = NULL;
    } else {
        newEmployee->next = head;
        head->prev = newEmployee;
        head = newEmployee;
        head->prev = NULL;
    }
}

Employee *pop() {
    if (head == NULL) {
        return NULL;
    } else {
        Employee *popped = head;
        head = head->next;
        if (head != NULL) {
            head->prev = NULL;
        }
        return popped;
    }
}

void printEmployeeDetails(Employee *employee) {
    printf("Name: %s\n", employee->name);
    printf("Age: %d\n", employee->age);
    printf("Salary: %d\n", employee->salary);
}

void printAllEmployeeDetails() {
    Employee *current = head;
    while (current != NULL) {
        printEmployeeDetails(current);
        printf("\n");
        current = current->next;
    }
}

int main()
{
    int choice;
    Employee *newEmployee;
    char name[MAX_NAME_LENGTH];
    int age, salary;

    while (1) {
        printf("1. Add Employee\n");
        printf("2. Remove Employee\n");
        printf("3. Print Employee Details\n");
        printf("4. Print All Employees Details\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                newEmployee = (Employee *)malloc(sizeof(Employee));
                printf("Enter Employee Name: ");
                scanf("%s", newEmployee->name);
                printf("Enter Employee Age: ");
                scanf("%d", &newEmployee->age);
                printf("Enter Employee Salary: ");
                scanf("%d", &newEmployee->salary);
                push(newEmployee);
                printf("Employee Added Successfully.\n");
                break;
            case 2:
                newEmployee = pop();
                if (newEmployee == NULL) {
                    printf("No Employee Found.\n");
                } else {
                    printf("Employee Removed Successfully.\n");
                    free(newEmployee);
                }
                break;
            case 3:
                printf("Enter Employee Name: ");
                scanf("%s", name);
                newEmployee = head;
                while (newEmployee != NULL) {
                    if (strcmp(name, newEmployee->name) == 0) {
                        printEmployeeDetails(newEmployee);
                        break;
                    }
                    newEmployee = newEmployee->next;
                }
                if (newEmployee == NULL) {
                    printf("Employee Not Found.\n");
                }
                break;
            case 4:
                printAllEmployeeDetails();
                break;
            case 5:
                printf("Exiting Program.\n");
                exit(0);
            default:
                printf("Invalid Choice.\n");
        }
        printf("\n");
    }

    return 0;
}

