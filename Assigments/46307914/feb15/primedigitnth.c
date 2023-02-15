#include<stdio.h>

int nthprime(int);
int main()
{
	int number;

	printf("\n\n Enter the number : ");
	scanf("%d",&number);

	printf("\n\n Output: %d\n\n",nthprime(number));

	return 0;
}

int nthprime(int num)
{
	int i,kn,reqn,flag,temp,count=0;
	for(i=2;;i++)
	{
		kn=i;
		while(kn!=0)
		{
			temp=kn%10;
			if(temp==2 || temp==3 || temp==5 || temp==7)
			{
				flag=1;
			}
			else
			{
				flag=0;
				break;
			}
			kn=kn/10;
		}
		if(flag==1)
		{
			count++;
		}
		if(count==num)
		{
			reqn=i;
			break;
		}
	}

	return reqn;
}
