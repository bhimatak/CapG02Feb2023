#include<stdio.h>

int main()
{
	int num,k,l,rem,flag,s,i,j;
	printf("Enter a number:");
	scanf("%d",&num);
	k=num;
	i=1;
	while(k>0)
	{
		rem = k%10;
		l = num;
		flag = 0;
		s=0;
		j=0;
	   	while(l>0)
		{
			j++;
			s = l%10;
			if(i==j)
			{
				l = l/10;
				continue;
			}
			if(rem==s)
			{
				flag=1;
				break;
			}
			l = l/10;
		}
		if(flag==0)
		{
			printf("%d\t",rem);
		}
		k = k/10;
		i++;
	}
	printf("\n");
	return 0;
}
