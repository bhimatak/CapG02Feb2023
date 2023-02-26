#include<stdio.h>
#include"ntprinum.c"

int nthPrimeNum(int,int[]);

int main()

{
    int i,num,arr[100],value;
    printf("Enter a number\n");
	scanf("%d",&num);
    for(i=0,value=1;i<num;value++,i++)
	 {
	   arr[i]=value;
	 }
    nthPrimeNum(num,arr);

  
   return 0;
}
