#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct employee {
    char name[50];
    int age;
    float salary;
    struct employee* next;
};

int main() {
    int n; // Number of employees to enter
    struct employee* head = NULL;
    struct employee* current = NULL;
    
    printf("Enter the number of employees: ");
    scanf("%d", &n);
    
    // Allocate memory for each employee
    for (int i = 0; i < n; i++) {
        struct employee* emp = (struct employee*) malloc(sizeof(struct employee));
        printf("Enter details of employee %d:\n", i+1);
        printf("Name: ");
        scanf("%s", emp->name);
        printf("Age: ");
        scanf("%d", &emp->age);
        printf("Salary: ");
        scanf("%f", &emp->salary);
        
        // Add employee to linked list
        emp->next = NULL;
        if (head == NULL) {
            head = emp;
            current = emp;
        } else {
            current->next = emp;
            current = emp;
        }
    }
    
    // Print the details of each employee
    printf("\nDetails of employees:\n");
    current = head;
    while (current != NULL) {
        printf("Name: %s\n", current->name);
        printf("Age: %d\n", current->age);
        printf("Salary: %.2f\n", current->salary);
        printf("------------------------\n");
        current = current->next;
    }
    
    // Free memory allocated for each employee
    current = head;
    while (current != NULL) {
        struct employee* temp = current;
        current = current->next;
        free(temp);
    }
    
    return 0;
}
