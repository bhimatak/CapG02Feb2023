#include <stdio.h>

int main() {
    int i;
    int count=0;
   int a[100];
   int n;
   printf("enter the array size");
   scanf("%d",&n);
  
   
/* inserting elements into array */ 
    for(i=0;i<n;i++)
    {
       scanf("%d",&a[i]);
    }

/* eleminating elements */

    for(i=0;i<n;i++)
    {
        
        if(i%2!=0)
        {
            a[count]=a[i];
            count++;
        }
    }

/* putting rest element as 0 */ 
    for(int i=n/2;i<n;i++)
    {
        a[i]=0;
    }

    printf("\nThe output is:\n");
    for(int i=0;i<n/2;i++)
    {
        printf("%d\n",a[i]);
    }

    return 0;
}
