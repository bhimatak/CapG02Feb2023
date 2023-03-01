/* DMA */


#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a = 10;
	int ch = 1;
	while(ch){
		printf("\nAddress of a = %u and value = %d ",&a,a);
		printf("\nDo you want to continue? (1/0)");
		scanf("%d",&ch);


}

	return 0;

}
