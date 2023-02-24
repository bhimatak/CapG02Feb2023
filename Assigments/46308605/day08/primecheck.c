#include<stdio.h>

int nthPrime(int);

int main() {
    int number;
    printf("\nEnter the term:\n");
    scanf("%d",&number);
    printf("\n %d\n",nthPrime(number));
    return 0;
}

int nthPrime(int term) {
    int it,temp,flag,count=0,rem,reqn;
    for(it=2;;it++) {
        temp=it;
        while(temp!=0) {
            rem=temp%10;
            if(rem==2 || rem==3 || rem==5 || rem==7) {
                flag=1;
            } else {
                flag=0;
                break;
            }
            temp=temp/10;
        }
        if(flag==1)
            count++;
        if(count==term) {
            reqn=it;
            break;
        }
    }
    return reqn;
}
