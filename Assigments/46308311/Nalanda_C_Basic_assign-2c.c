#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char name[50];
char gender;
int age;
float salary;


struct UserInfo {
    char name[50];
    char gender;
    int age;
    float salary;
};


int readUserInfo() {
    
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    strtok(name, "\n"); 

    
    printf("Enter your gender (M/F/O): ");
    scanf(" %c", &gender);

    
    printf("Enter your age: ");
    scanf("%d", &age);

    
    printf("Enter your monthly salary: ");
    scanf("%f", &salary);

    return EXIT_SUCCESS;
}

void displayUserInfo() {
    printf("Name: %s\n", name);
    printf("Gender: %c\n", gender);
    printf("Age: %d\n", age);
    printf("Monthly Salary: %.2f\n", salary);
}


struct UserInfo readUserInfoStruct() {
    struct UserInfo user;

    
    printf("Enter your name: ");
    fgets(user.name, sizeof(user.name), stdin);
    strtok(user.name, "\n"); // Remove trailing newline character

    
    printf("Enter your gender (M/F/O): ");
    scanf(" %c", &user.gender);

    
    printf("Enter your age: ");
    scanf("%d", &user.age);

    
    printf("Enter your monthly salary: ");
    scanf("%f", &user.salary);

    return user;
}

void displayUserInfoStruct(struct UserInfo user) {
    printf("Name: %s\n", user.name);
    printf("Gender: %c\n", user.gender);
    printf("Age: %d\n", user.age);
    printf("Monthly Salary: %.2f\n", user.salary);
}

int main() {
    
    readUserInfo();

    displayUserInfo();

    struct UserInfo user = readUserInfoStruct();

    displayUserInfoStruct(user);

    return EXIT_SUCCESS;
}
