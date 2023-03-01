#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *ptr;
	int noEle, it;
	printf("\nEnter the no of elements required: ");
	scanf("%d",&noEle);

	ptr = (int *)malloc(noEle*sizeof(int));
	printf("\nEnter %d elements of the array",noEle);
	for(it=0;it<noEle;it++){
		//scanf("%d",&ptr[it]);
		scanf("%d",ptr+it);
	}

	printf("\nList is \n");
	for(it=0;it<noEle;it++)
		printf(" %d",*(ptr+it));

	printf("\n\n");
	return 0;
	

}