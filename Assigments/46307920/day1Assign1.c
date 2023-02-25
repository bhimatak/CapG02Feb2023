#include <stdio.h>
int main()
{
	int number,i,kn,reqn,flag,temp,count=0;
	printf("\n\n enter the number: ");
	scanf("%d",&number);
	for(i=2;;i++)
	{
		kn=i;
		while(kn!=0)
		{
			temp=kn%10;
			if(temp==2 ||temp==3||temp==5||temp==7){
				flag=1;
				}
			else
			{
				flag=0;
				break;
			}
			kn=kn/10;}
			if(flag==1)
			{
				count++;
			}
			if(count==number)
			{
				reqn=i;
				break;
			}
		}
		printf("\n\noutput: %d\n\n",reqn);
		return 0;
	}



