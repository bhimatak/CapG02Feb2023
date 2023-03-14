#include <stdio.h>
#include <stdlib.h>

struct Employee {
    char name[50];
    char gender;
    int age;
    float salary;
};

struct Employee user;

int readUser() {
    printf("Enter your name (first, middle and last name separated by spaces):\n");
    fgets(user.name, 50, stdin);

    printf("Enter your gender (M/F/O):\n");
    scanf("%c", &user.gender);
    getchar();

    printf("Enter your age:\n");
    scanf("%d", &user.age);
    getchar();

    printf("Enter your desired monthly salary (including 2 decimal precision in float):\n");
    scanf("%f", &user.salary);
    getchar();

    return EXIT_SUCCESS;
}

void displayUser() {
    printf("Name: %s", user.name);
    printf("Gender: %c\n", user.gender);
    printf("Age: %d\n", user.age);
    printf("Monthly Salary: %.2f\n", user.salary);
}

struct Employee getUser() {
    struct Employee u;

    printf("Enter your name (first, middle and last name separated by spaces):\n");
    fgets(u.name, 50, stdin);

    printf("Enter your gender (M/F/O):\n");
    scanf("%c", &u.gender);
    getchar();

    printf("Enter your age:\n");
    scanf("%d", &u.age);
    getchar();

    printf("Enter your desired monthly salary (including 2 decimal precision in float):\n");
    scanf("%f", &u.salary);
    getchar();

    return u;
}

void displayUserStruct(struct Employee u) {
    printf("Name: %s", u.name);
    printf("Gender: %c\n", u.gender);
    printf("Age: %d\n", u.age);
    printf("Monthly Salary: %.2f\n", u.salary);
}

int main() {
    // Test the functions
    readUser();
    displayUser();

    struct Employee u= getUser();
    displayUserStruct(u);

    return EXIT_SUCCESS;
}

