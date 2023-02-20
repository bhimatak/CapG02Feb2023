#include<stdio.h>
int main()
{
		int arr[100],num,i,b[100],a=0;
		printf("enter the array size: ");
		scanf("%d",&num);
		printf("\nenter the elements of array: ");
		for(i=0;i<num;i++)
		{
				scanf("%d\n",&arr[i]);
		}
		for(i=1;i<=num;i++)
		{
				if(i%2==0)
						continue;
				else
						b[a++]=arr[i];
		}
		for(i=0;i<num/2;i++)
		{
				printf("%d\t",b[i]);
		}
		printf("\n");
		return 0;
		}

								

