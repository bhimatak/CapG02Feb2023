#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Employee
{
        int id;
        char name[20];
};
typedef struct Employee EMP;

int getEmpDet(EMP []);

int main()
{
        EMP emp[3];
	getEmpDet(emp);

        return 0;
}

int getEmpDet(EMP emp[])
{
        EMP *p;
	int i,j,noEmp;
	EMP *temp;
	EMP *t;
        printf("Enter the number of Employees\n");
	scanf("%d",&noEmp);
	p = (EMP*)malloc(1*(sizeof(EMP)));
	temp=p;
        for(i=0;i<noEmp;i++,p++)
	{
		printf("\n Enter name: ");
		scanf("%s",p->name);
           	printf("\nEnter id :");
        	scanf("%d",&p->id);

        }
	p=temp;
        for(i=0;i<noEmp;i++,p++)
	{
		printf("\nname:%s",p->name);
		printf("\nid:%d",p->id);
	}
	p=temp;

	for(i=0;i<=noEmp-2;i++,p++)
	{
		for(j=0;j<=noEmp-2;j++)
		{
		      if(strcmp((p+j)->name,(p+j+1)->name)>0)
		      {
			      t->name = p->name;
			      p->name = (p+j+1)->name;
			      (p+j+1)->name = t->name;

		      }
		}
	}


	p=temp;
	free(p);
}

