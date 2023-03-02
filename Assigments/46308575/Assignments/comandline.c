#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Person {
    char name[50];
    int age;
};

int main(int argc, char** argv) {
    struct Person p;
    
    // Check if there are enough command line arguments
    if (argc < 3) {
        printf("Usage: %s <name> <age>\n", argv[0]);
        return 1;
    }
    
    // Parse command line arguments and fill in the Person struct
    strcpy(p.name, argv[1]);
    p.age = atoi(argv[2]);
    
    // Print the Person struct
    printf("Name: %s\n", p.name);
    printf("Age: %d\n", p.age);
    
    return 0;
}
