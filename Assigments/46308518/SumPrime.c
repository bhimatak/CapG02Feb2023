#include<stdio.h>
#include "PrimeLogic.h"

int Prime(int n){
	if( n==2){
		return 1;
	}
	else if(n<2){
		return 0;
	}
	else if(n%2==0)
		return 0;
	else if(n>2){
		for(int i=3;i*i<=n;i++){
			if(n%i==0)
				return 0;
			
		}
		return 1;
		
	}
}

int main(){
	int num;
	scanf("%d",&num);
	int count=0;
	for(int i=2;i<=num/2;i++){
		if(Prime(i)&&Prime(num-i)){
			
			printf("\n%d + %d = %d",i,(num-i),num);
			count++;
		}
	}
	printf("\nCount is %d",count);
		return 0;
}
