#include <stdio.h>
void sort(int [],int);
void display(int [],int);
int main() {
    int arr[100];
    int n;
    int it;
    printf("enter the size of the array");
    scanf("%d",&n);
   
    sort(arr,n);
    display(arr,n);
    return 0;
}

void sort(int arr[],int n)
{
    int *ptr;
    int it,i,j,temp;
    ptr=arr;
    //inputting array
    for(it=0;it<n;it++)
    {
        scanf("%d",(ptr+it));
    }
    //sorting
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(*(ptr+i)<*(ptr+j))
            {
                temp= *(ptr+i);
                *(ptr+i) = *(ptr+j);
                *(ptr+j) = temp;
            }
        }
    }
     
    
}
void display(int arr[],int n)
{
    int i;
    printf("elements in descending order\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
}
