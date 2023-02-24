#include <stdio.h>
int main()
{
	int num,i,k,r,flag,temp,count=0;
	printf("\n\n enter the number: ");
	scanf("%d",&num);
	for(i=2;;i++)
	{
		k=i;
		while(k!=0)
		{
			temp=k%10;
			if(temp==2 ||temp==3||temp==5||temp==7){
				flag=1;
				}
			else
			{
				flag=0;
				break;
			}
			k=k/10;}
			if(flag==1)
			{
				count++;
			}
			if(count==num)
			{
				r=i;
				break;
			}
		}
		printf("\n\noutput: %d\n\n",r);
		return 0;
	}
