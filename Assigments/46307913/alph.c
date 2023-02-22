#include<stdio.h>
#include<string.h>
void main()
{
     char s[100];
     printf("\nEnter String: \n");
     gets(s);
     sort(s);
     printf("\nAfter sorting=%s\n",s);
}
void sort(char s[])
{
     int i,j,n=strlen(s);
     char temp;
     for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
           if(s[i]>s[j]){
             temp=s[i];
             s[i]=s[j];
             s[j]=temp;
           }
        }
     }
     return 0;
} 
