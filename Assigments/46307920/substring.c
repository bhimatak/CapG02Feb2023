#include<stdio.h>
#include<string.h>

int main()

{
	int i=0,j=0,start=0,end=0,flag=0,k=0,l=0;
	char str[1024];
	
	printf("\nEnter the string:");
	scanf("%s",str);

	int length= strlen(str);

	for(i=0;i<length;i++)
	{
		for(j=length-1;j>i;j--)
		{

			if(str[i]==str[j])
			{
				if(flag==0)
				{
					start=i;
					end=j;
				}
				flag=1;
			
				for(k=start+1,l=end-1;(k<end)&&(l>k);k++,l--)
				{
					if(str[k]!=str[l])
					{
						flag =0;
						break;
					}
				}
				if(flag == 1)
					break;

			}
			else
			{
				flag=0;
				start=0;
				end=0;
			}
		}
		if(flag == 1)
			break;
	}
	
	for(i=start;i<=end;i++)
		printf("%c",str[i]);
	printf("\n\n");
	

	return 0;

}

