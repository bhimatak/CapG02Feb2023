#include<stdio.h>
#define SIZE 10

int main(){
	int arr[SIZE];
	int lim=0;
	
	printf("Enter %d elements \n",SIZE);
	for(int i=0;i<10;i++)
		scanf("%d", &arr[i]);
	printf("Enter limit:");
	scanf("%d",&lim);

	disp(arr,lim);
	//Implementing BS
	//
	printf("\nUsing Bubble sort");
	printf("\nThe array stands: \n");
	bubbleSort(arr,SIZE);
	int *ptr;
	ptr=arr;
	
	printf("\nprinting pointer\n");
	for(int i=0;i<SIZE;i++)
	printf("%d ",*(ptr+i));
	printf("====");
	printf("\nEnter element to be searched. \n");
	int item;
	scanf("%d",&item);
	binarySearching(ptr,item);

	return 0;
}



void disp(int arr[],int lim){
	if(lim<sizeof(arr)){
		for(int i=0;i<lim;i++){
			printf("%d ",arr[i]);
		}
	}
	else{
		printf("Size limit exceeded");
	}


}

void bubbleSort(int array[],int size){
	for(int i=0;i<size;i++){
		for(int j=0;j<size-i-1;j++){
			if(array[j]>array[j+1]){
			int temp=array[j];
			array[j]=array[j+1];
			array[j+1]=temp;
		}
	}

	}

	for(int i=0;i<size;i++){
		
		printf("%d ",array[i]);
	}
}

void mergeSort(int array[],int size){
	}


void binarySearching(int arr[],int item){
	int high=SIZE-1,low=0,mid=(high+low)/2;
	while(low<=high){
		if(arr[mid]<item){
			low=mid+1;
		}
		else if(arr[mid]==item){
			printf("\nFound at location :%d",mid+1);
			break;
		}

		else
			high=mid-1;
		mid=(low+high)/2;

		if(low>high)
			printf("NOT FOUND SORRY!");

	}


}

/*int main()
{
int i, low, high, mid, n, key, array[100];
printf("Enter number of elementsn");
scanf("%d",&n);
printf("Enter %d integersn", n);
for(i = 0; i < n; i++)
scanf("%d",&array[i]);
printf("Enter value to findn");
scanf("%d", &key);
low = 0;
high = n - 1;
mid = (low+high)/2;
while (low <= high) {
if(array[mid] < key)
low = mid + 1;
else if (array[mid] == key) {
printf("%d found at location %d.n", key, mid+1);
break;
}
else
high = mid - 1;
mid = (low + high)/2;
}
if(low > high)
printf("Not found! %d isn't present in the list.n", key);
return 0;
}*/
