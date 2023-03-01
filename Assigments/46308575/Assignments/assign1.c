#include <stdio.h>
#include <string.h> 
#define row 5 
#define col 5 
typedef struct Employee {
       	char name[row];
       	int empID; float salary;
}

Employee;

void swap(Employee *a, Employee *b) 
	{
       	Employee temp = *a; 
	*a = *b; *b = temp; 
	}
void sort_employees(Employee employees[], int n)
	{
       	int i, j;
       	for (i = 0; i < n-1; i++) 
	{
	       	for (j = 0; j < n-i-1; j++) 
		{
		       	if (employees[j].salary > employees[j+1].salary) 
			{
			  swap(&employees[j], &employees[j+1]); 
			
			}
	       	
		}
       	}
}
int main()
	{
       	int n, i, j;
       	Employee employees[row];
       	printf("Enter the number of employees: ");
       	scanf("%d", &n);
       	for (i = 0; i < n; i++) 
	{
	       	printf("\nEnter details of Employee %d:\n", i+1);
	       	printf("Name: "); scanf("%s", employees[i].name);
	       	printf("employee ID: ");
	       	scanf("%d", &employees[i].empID);
	       	printf("Salary: ");
	       	scanf("%f", &employees[i].salary);
       	}
       	sort_employees(employees, n);
       	printf("\nEmployee details in ascending order of salary:\n");
       	for (i = 0; i < n; i++)
       	{
	printf("%s, %d ,%f\n", employees[i].name,employees[i].empID, employees[i].salary);
       	}

       	return 0; 
}
