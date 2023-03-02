#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Employee
{
    int empID;
    char name[20];
    int phone;
};

typedef struct Employee emp;

void display(emp emp1)
{
    printf("Employee ID : %d\n",emp1.empID);
    printf("Employee Name : %s\n",emp1.name);
    printf("Employee Phone : %d\n",emp1.phone);
}

int main(int argc, char **argv)
{
    emp emp1;
    emp1.empID=atoi(argv[1]);
    strcpy(emp1.name,argv[2]);
    emp1.phone=atoi(argv[3]);
    display(emp1);
    return 0;
}

