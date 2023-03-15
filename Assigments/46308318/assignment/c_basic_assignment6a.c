#include <stdio.h>
#include <string.h>

// function prototypes
int getMin(int a, int b);
int getMax(int a, int b);
char* getLongstring(char* str1, char* str2);
int readChoice();
int (*getfunc(int choice))(int, int);
int process_numbers(int choice, int a, int b);

int main() {
    int choice, a, b;
    char str1[100], str2[100];
    
    choice = readChoice();
    
    switch(choice) {
        case 1:
            printf("Enter two numbers: ");
            scanf("%d %d", &a, &b);
            printf("Minimum of %d and %d is %d\n", a, b, process_numbers(choice, a, b));
            break;
        case 2:
            printf("Enter two numbers: ");
            scanf("%d %d", &a, &b);
            printf("Maximum of %d and %d is %d\n", a, b, process_numbers(choice, a, b));
            break;
        case 3:
            printf("Enter two strings: ");
            scanf("%s %s", str1, str2);
            printf("Longest string is: %s\n", getLongstring(str1, str2));
            break;
        default:
            printf("Invalid choice!\n");
    }
    
    return 0;
}

// function to get minimum of two numbers
int getMin(int a, int b) {
    return (a < b) ? a : b;
}

// function to get maximum of two numbers
int getMax(int a, int b) {
    return (a > b) ? a : b;
}

// function to get longest string
char* getLongstring(char* str1, char* str2) {
    return (strlen(str1) > strlen(str2)) ? str1 : str2;
}

// function to display menu and read user's choice
int readChoice() {
    int choice;
    printf("Menu:\n");
    printf("1. Get min number\n");
    printf("2. Get maximum number\n");
    printf("3. Get longest string\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    return choice;
}

// function to get function address based on user's choice
int (*getfunc(int choice))(int, int) {
    switch(choice) {
        case 1:
            return &getMin;
        case 2:
            return &getMax;
        default:
            return NULL;
    }
}

// function to process numbers based on user's choice
int process_numbers(int choice, int a, int b) {
    int (*func_ptr)(int, int) = getfunc(choice);
    if(func_ptr != NULL) {
        return (*func_ptr)(a, b);
    } else {
        return -1; 
    }
}
