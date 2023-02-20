#include<stdio.h>

int main(){
	int arr[10];
	int n;
	// to input
	for(int j=0;j<10;j++)
		scanf("%d",&arr[j]);
	printf("Enter num. of elementts to display");
	scanf("%d",&n);
	
	printArray(arr,n);
	return 0;
}



void printArray(int arr[],int n){
	for(int i=0;i<n;i++){
		printf("%d\t",arr[i]);
	}
}
