#include<stdio.h>

int main()
{
    
	int a[6]={1,2,3,4,5,6};
	int i;

	for(i=0;i<6;i++)
	{
		if(a[i]%2==0)
		{
			printf("\n%d\n", a[i]);
        }
	}
	return 0;
} 
