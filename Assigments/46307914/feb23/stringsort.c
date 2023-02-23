#include<stdio.h>
#include<string.h>

int main()

{
	char empnames[1024][1024];
	char temp[1024];
	int j=0,i=0,n=0;

	printf("\nEnter the number of employees: ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("\nEnter the names of employee%d: ",i);
		scanf(" ");
		fgets(empnames[i],1024,stdin);
		empnames[i][strlen(empnames[i])-1]='\0';
	}

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

	return 0;

}
			

