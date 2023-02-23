#include<stdio.h>
#include<string.h>
#define SIZE 1024
#define SIZE2 1024

int inputfunc(char [SIZE][SIZE2]);
void sortingstring(char [SIZE][SIZE2] ,int);

int main()

{
	char empnames[SIZE][SIZE2];
	int n=0;
	
	n= inputfunc(empnames);

	sortingstring(empnames,n);

	return 0;

}
	
int inputfunc(char empnames[SIZE][SIZE2])
{
	int n,i=0;
	
	printf("\nEnter the number of employees: ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("\nEnter the names of employee%d: ",i+1);
		scanf(" ");
		fgets(empnames[i],1024,stdin);
		empnames[i][strlen(empnames[i])-1]='\0';
	}

	return n;
}

void sortingstring( char empnames[SIZE][SIZE2],int n)
{
	char temp[SIZE];
	int i=0,j=0;

	printf("\nSorted List\n");

	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		{
			if(strcmp(empnames[i],empnames[j])>0)
			{
				strcpy(temp,empnames[i]);
				strcpy(empnames[i],empnames[j]);
				strcpy(empnames[j],temp);
			}
			
		}
	}

	for(i=0;i<n;i++)
	{
		printf("\n%s\n",empnames[i]);
	}

	printf("\n\n");


}
