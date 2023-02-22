#include<stdio.h>
#include<string.h>

void main()
{
     char s[25];
     printf("\nEnter String: \n"); 
     gets(s);
     conv(s);
     printf("\nConverted String= %s\n",s);
}
void conv(char s[])
{
     int i;
     for(i=0;s[i]!='\0';i++)
     {
        if(s[i]>='a' && s[i]<='z')
        {
           s[i]=s[i]-32;
        }  
     }
} 
