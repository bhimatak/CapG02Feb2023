#include<stdio.h>

#include<string.h>
temp
int main()
{
 
    char strg[20];
    
    int i,j;
    int len;
    int istart, iend;
    
    int flag = 0;
    
    printf("\nEnter any string: ");
    
    scanf("%s",strg);

    len = strlen(strg);
			
    for(i=0,i<len;i++)
    {
        if(strg[i] != strg[len-i-1]){
            temp = 1;
        break;
   }		
}
    if (temp==0) 
    {
        
	    printf("\nyour String %s is palindrome\n",strg);
    }
    else 
    {
    
	    printf("\n-1\n");
    }
    return 0;
}
