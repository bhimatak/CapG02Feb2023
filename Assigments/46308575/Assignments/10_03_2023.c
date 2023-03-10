#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <pthread.h>

#define MAX_EMPLOYEES 10
#define MAX_NAME_LENGTH 50
#define FILENAME "employee_data.txt"

struct Employee {
    int id;
    char name[MAX_NAME_LENGTH];
    int age;
    float salary;
};

void* read_employee_data(void* arg);
void* write_employee_data(void* arg);
void print_employee_data(struct Employee employee);
void sort_employee_data(struct Employee* employees, int num_employees);
int compare_employee_data(const void* a, const void* b);
int search_employee_data(struct Employee* employees, int num_employees, int id);

int main() {
    struct Employee employees[MAX_EMPLOYEES];
    int num_employees = 0;

    // Get employee data from user input
    for (int i = 0; i < MAX_EMPLOYEES; i++) {
        struct Employee employee;

        printf("Enter details for Employee %d:\n", i+1);
        printf("ID: ");
        scanf("%d", &employee.id);
        printf("Name: ");
        scanf("%s", employee.name);
        printf("Age: ");
        scanf("%d", &employee.age);
        printf("Salary: ");
        scanf("%f", &employee.salary);

        employees[i] = employee;
        num_employees++;

        printf("\n");

        if (i == MAX_EMPLOYEES - 1) {
            printf("Maximum number of employees reached.\n");
        } else {
            char response;
            printf("Add another employee? (y/n): ");
            scanf(" %c", &response);

            if (response == 'n' || response == 'N') {
                break;
            }
        }
    }

    // Store employee data in file
    FILE* fp = fopen(FILENAME, "w");
    if (fp == NULL) {
        printf("Error: could not open file for writing.\n");
        return 1;
    }

    fwrite(employees, sizeof(struct Employee), num_employees, fp);

    fclose(fp);

    // Read employee data from file and store in array
    struct Employee employees_read[MAX_EMPLOYEES];
    fp = fopen(FILENAME, "r");
    if (fp == NULL) {
        printf("Error: could not open file for reading.\n");
        return 1;
    }

    fread(employees_read, sizeof(struct Employee), MAX_EMPLOYEES, fp);

    fclose(fp);

    // Print employee data
    printf("Employee data:\n");
    for (int i = 0; i < num_employees; i++) {
        print_employee_data(employees_read[i]);
    }

    // Sort employee data by ID
    sort_employee_data(employees_read, num_employees);

    printf("\nSorted employee data by ID:\n");
    for (int i = 0; i < num_employees; i++) {
        print_employee_data(employees_read[i]);
    }

    // Search for employee by ID
    int search_id;
    printf("\nEnter ID to search for: ");
    scanf("%d", &search_id);

    int result = search_employee_data(employees_read, num_employees, search_id);

    if (result != -1) {
        printf("Employee found:\n");
        print_employee_data(employees_read[result]);
    } else {
        printf("Employee with ID %d not found.\n", search_id);
    }

    // Update employee data with two threads
    pthread_t read_thread, write_thread;
    int update_id;
    float new_salary;

printf("\nEnter ID of employee to update: ");
scanf("%d", &update_id);

printf("Enter new salary: ");
scanf("%f", &new_salary);

// Create mutex for thread synchronization
pthread_mutex_t mutex;
pthread_mutex_init(&mutex, NULL);

// Create arguments for threads
struct {
    struct Employee* employees;
    int num_employees;
    int id;
    float salary;
    pthread_mutex_t* mutex;
} read_args = {employees_read, num_employees, update_id, 0, &mutex};

struct {
    struct Employee* employees;
    int num_employees;
    int id;
    float salary;
    pthread_mutex_t* mutex;
} write_args = {employees_read, num_employees, update_id, new_salary, &mutex};

// Create threads
pthread_create(&read_thread, NULL, read_employee_data, &read_args);
pthread_create(&write_thread, NULL, write_employee_data, &write_args);

// Wait for threads to complete
pthread_join(read_thread, NULL);
pthread_join(write_thread, NULL);

// Print updated employee data
printf("\nUpdated employee data:\n");
for (int i = 0; i < num_employees; i++) {
    print_employee_data(employees_read[i]);
}

// Clean up mutex
pthread_mutex_destroy(&mutex);

return 0;
}
