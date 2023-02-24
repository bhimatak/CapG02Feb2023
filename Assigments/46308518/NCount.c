#include<stdio.h>

int main(){
	int ip;
	printf("Enter Nth term: ");
	scanf("%d",&ip);
	int int_count=0;
	
	for(int i=1;i<=10000;i++){
		if(All_Prime(i))
			int_count++;

		if(int_count==ip){
			printf("%d",i);
			break;
		}
	}


	

	return 0;


}

int prime_check(int n){
	if(n==2)
		return 1;
	else if(n<2)
		return 0;
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
		
int All_Prime(int num){
	int x=num;
	int count=0;
	int count_d=0;
	while(x!=0){
		int d=x%10;
		if(prime_check(d)){
			count++;
		}
		x=x/10;
		count_d++;
		
		if(count!=count_d)
			return 0;
		//return 1;
	}
}
