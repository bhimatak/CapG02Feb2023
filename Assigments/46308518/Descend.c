#include<stdio.h>

int main(){
	int n,temp,i,j;

	printf("Enter size:");
	scanf("%d",&n);
	int arr[n];
	int *ptr;
	ptr=arr;
	for(i=0;i<n;i++)
		scanf("%d",(ptr+i));
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(*(ptr+i)<*(ptr+j)){
			temp=*(ptr+i);
			*(ptr+i)=*(ptr+j);
			*(ptr+j)=temp;
			
		}
		}
	}
	for(i=0;i<n;i++){
		printf("%d\t",*(ptr+i));
	}

	return 0;
}

