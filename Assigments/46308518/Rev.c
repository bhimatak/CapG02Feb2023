#include<stdio.h>


int main(){
	int num;
	
	printf("GIVE THE SIZE OF ARRAY: ");
	scanf("%d",&num);
	int i=0,j=0;
	int arr[num];
	printf("\nInsert array elements:");
	for(i=0;i<num;i++){
		scanf("%d",&arr[i]);
	}
	int temp;
	int x=num;
	for(j=0;j<x/2;j++){
		temp=arr[j];
		arr[j]=arr[x-j-1];
		arr[x-j-1]=temp;
			}

	for(int k=0;k<num;k++)
		printf("%d ",arr[k]);


	return 0;
}



