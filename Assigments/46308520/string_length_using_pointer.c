#include <stdio.h>
int getLength(char []);

int main() {
    char ch[100];
    int len;
    printf("Enter the string\n");
    scanf("%s",ch);
    len=getLength(ch);
    printf("\nThe length is %d",len);
    
    return 0;
}

int getLength(char ch[])
{
    char *ptr;
    ptr = ch;
    int count=0;
    int i;
    for(i=0;*ptr!='\0';i++)
    {
       count++;
       ptr++;
    }
    return count;
}
