#include <stdio.h>

int findN(int);

int isPnum(int);

int main()
{
	int n;
	printf("Enter the value of element to find:");
	scanf("%d",&n);

	int primeNumber=findN(n);
	printf("%d number is %d \n",n,primeNumber);

	return 0; 
}


int findN(int n)
{
	int flag=0;
	int num=1;
	int result;


	while(flag<n)
	{
		if(isPnum(num)){
			flag++;
		}
		num++;
		
	}
	
	return num-1;
}

int isPnum(int n)
{
	int val;
	while(n>0)
	{
		val=n%10;
		if(val!=2 && val!=3 && val!=5 && val!=7)
			return 0;
		n/=10;
	}
	return 1;
}
