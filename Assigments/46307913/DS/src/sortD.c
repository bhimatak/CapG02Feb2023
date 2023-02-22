#include<stdio.h>
int sort(int n,int *ptr)
{
    int i,j,temp;
	for(i=0;i<n;i++)
	{
	    for(j=i+1;j<n;j++)
		{
		    if(*(ptr+j)<*(ptr+i))
			{
			   temp=*(ptr+i);
			   *(ptr+i)=*(ptr+j);
			   *(ptr+j)=temp;
	   	        }
	        }
        }
	for(i=0;i<n;i++)
	    printf("\n%d\n",*(ptr+i));
}
int main()
{
    int n=5;
	int arr[]={10,20,30,1,19};
	sort(n,arr);
	return 0;
}
