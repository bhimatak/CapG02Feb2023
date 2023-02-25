#include<stdio.h>
#include<string.h>

void stringsort(char[]);

int main()
{
	char a[1024];
	
	memset(a,'\0',1024);

	printf("\n\nEnter string: ");
	scanf("%s",a);


	stringsort(a);

	
	printf("\n\n%s\n\n",a);

	return 0;

}

void stringsort(char a[])
{
	int i=0,j=0;
	
	char temp;

	for(i=0;i<strlen(a)-1;i++)
	{
		for(j=i+1;j<strlen(a);j++)
		{	
			if(a[i]>=a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}


}
