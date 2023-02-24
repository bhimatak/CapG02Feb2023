#include<stdio.h>
int main()
{
	int num,odd=1,even=1,rem,i;
	printf("Enter the number\n");
	scanf("%d",&num);
	for(i=0;num>0;i++)
	{
		rem=num%10;
		if(i%2==0)
		{
			even=even*rem;
		}
		else
		{
			odd=odd*rem;
		}
		num=num/10;
	}	
	if(odd==even)
		printf("YES\n");
	else
		printf("NO\n");
	return 0;
}
