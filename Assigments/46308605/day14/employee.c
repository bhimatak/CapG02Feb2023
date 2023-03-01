#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Employee{

        char e_name[50];
	int age;
	float salary;
	
	
};

int main(){
	int n,i,j;
	printf("Enter the no of Employees:");
	scanf("%d",&n);

	struct Employee *emp_list =(struct Employee *)malloc(n*sizeof(struct Employee));

	

	for(i=0;i<n;i++)
	{
		printf("Enter the details of Employee %d:\n",i+1);
		printf("Name: ");
		scanf("%s",emp_list[i].e_name);
		printf("Age: ");
		scanf("%d",&emp_list[i].age);
		printf("Salary :");
		scanf("%f",&emp_list[i].salary);
	}
	
	printf("\nEmployee details:\n");
	for(i=0;i<n;i++)
	{
		printf("Name:%s\n",emp_list[i].e_name);
		printf("Age:%d\n",emp_list[i].age);
		printf("Salary:%f\n",emp_list[i].salary);
		printf("\n");
	}

	//for sorting
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(strcmp(emp_list[i].e_name,emp_list[j].e_name)>0){
				struct Employee temp = emp_list[i];
				emp_list[i]=emp_list[j];
				emp_list[j]=temp;
			}
		}
	}

	//Display employee details
	printf("Sorted Employee are :\n");
	for(i=0;i<n;i++)
	{
		printf("Name:%s\n",emp_list[i].e_name);
		printf("Age:%d\n",emp_list[i].age);
		printf("Salary :%f\n",emp_list[i].salary);
		printf("\n\n");
	}

	free(emp_list);

	return 0;
}
