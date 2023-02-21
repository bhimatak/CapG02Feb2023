#include<stdio.h>

int main()
{
	int place=1,i,number,odd=1,even=1,rem;

	printf("Enter a number:");
	scanf("%d",&number);
	while(number > 0)
	{
		rem = number % 10;
		if(place % 2 == 0)
		{ 
			even*=rem;
		}
		else
		{
			odd*=rem;
		}
		place++;
		number = number / 10;
	}
	if(even == odd)
	{
		printf("\nProduct of odd and even places is equal\n");
	}
	else
	{
		printf("\nProduct of odd and even places is not equal\n");
	}
	return 0;
}
