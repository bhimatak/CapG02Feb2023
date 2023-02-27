#include <stdio.h>
#include <string.h>


struct Employee
{
		int empID;
		int empPhone;
		float empSal;
		char empName[20];
};


void dispEmps(struct Employee );

void dispArr(int*);

int main()
{
	

	struct Employee emp1, emp2;

	int a[10] = {1,2,3,4};
	int b;

	scanf("%d%d%f%s",&emp1.empID,&emp1.empPhone,&emp1.empSal,emp1.empName);
	
	dispEmps(emp1);

	//emp2 = emp1;
/*
	// dispArr(a);
	// //dispArr(&a[0]);

	// dispEmps(emp1);
*/
	
	// printf("\nName: %s",emp2.empName);
	// printf("\nID: %d",emp2.empID);
	// printf("\nPhone: %d",emp2.empPhone);
	// printf("\nSalary: %f",emp2.empSal);
	
	printf("\n\n");
	return 0;
}


void dispEmps(struct Employee emp2) //e1 = emp
{
	printf("\nName: %s",emp2.empName);
	printf("\nID: %d",emp2.empID);
	printf("\nPhone: %d",emp2.empPhone);
	printf("\nSalary: %f",emp2.empSal);

}


void dispArr(int *arr)
{
	int i;
	for(i=0;i<4;i++)
		printf(" %d", arr[i]);
}