#include <stdio.h>
#include <string.h>

int main()
{
	struct Employee
	{
		int empID;
		int empPhone;
		float empSal;
		char empName[20];
	};

	struct Employee emp1;

	scanf("%d%d%f%s",&emp1.empID,&emp1.empPhone,&emp1.empSal,emp1.empName);

	printf("\nName: %s",emp1.empName);
	printf("\nID: %d",emp1.empID);
	printf("\nPhone: %d",emp1.empPhone);
	printf("\nSalary: %f",emp1.empSal);

	printf("\n\n");
	return 0;
}