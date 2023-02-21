#include<stdio.h>

int main(){
	int arr[10];
	int n;
	// to input
	for(int j=0;j<10;j++)
		scanf("%d",&arr[j]);
	printf("\nEnter num. of elementts to display");
	scanf("%d",&n);
	
	printArray(arr,n);

	printf("\n\nThe sum of smallest and largest number is: %d", sum_Min_Max(arr));

	return 0;
}



void printArray(int arr[],int n){
	for(int i=0;i<n;i++){
		printf("%d\t",arr[i]);
	}
}


int sum_Min_Max(int arr[]){
	int temp=0;
	for(int k=0;k<10;k++){
		for(int l=k+1;l<10;l++){
			if(arr[k]>arr[l]){
				temp=arr[k];
				arr[k]=arr[l];
				arr[l]=temp;
			}
		}
	}

	int res=arr[0]+arr[9];
	return res;
}
