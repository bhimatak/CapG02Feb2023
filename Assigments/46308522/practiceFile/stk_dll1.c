#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Employee

{
    char name[50];
 
    int id;
  
    float salary;
  
    struct Employee* prev;
  
    struct Employee* next;

}Employee;

Employee* top = NULL;

void push(Employee* emp) 

{
    if (top == NULL) 
    
    {
        top = emp;
        emp->prev = NULL;
        emp->next = NULL;
    }
   
    else 
    
    {
        emp->prev = top;
        emp->next = NULL;
        top->next = emp;
        top = emp;
    }
}

Employee* pop() 

{
    if (top == NULL) 
    
    {
        return NULL;
    }
   
    else 
    
    {
        Employee* emp = top;
        top = top->prev;
        if (top != NULL) 
	
	{
            top->next = NULL;
        }
        emp->prev = NULL;
        emp->next = NULL;
        return emp;
    }
}


void display() 
{
    if (top == NULL) 
    {
        printf("No employees are there\n");
    } 
    
    else 
    
    {
        Employee* emp = top;
        printf("Employee are:\n");
        while (emp != NULL) 
	{
            printf("%s%d%.2f\n", emp->name,emp->id,emp->salary);
            emp = emp->prev;
        }
    }
}



int main() 

{
    int choice;
    Employee* emp;
    do 
    
    {
        printf("\n1. Add employee\n");
        printf("2. Remove employee\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        switch (choice) 
	
	{
            case 1:
                emp = (Employee*) malloc(sizeof(Employee));
                printf("Enter name: ");
                scanf("%s", emp->name);
                printf("Enter id: ");
                scanf("%d", &emp->id);
                printf("Enter salary: ");
                scanf("%f", &emp->salary);
                push(emp);
                break;
           
	    case 2:
                emp = pop();
                if (emp == NULL) 
		
		{
                    printf("No employees in the stack\n");
                } else 
		
		{
                    printf("Removed employee: %s %d %.2f\n", emp->name, emp->id, emp->salary);
                    free(emp);
                }
                break;
            case 3:
		display();
		break;
	    case 4:
	    	printf("Thank you for using this Application.\n");
                break;
            default:
                printf("Invalid choice\n");
        }
    }
    
    while (choice != 3);
    return 0;
}
