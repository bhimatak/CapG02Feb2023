#include <stdio.h>
int main()
{
   int n,num,count=0;
   int digit,temp,temp1;
   int flag;
   printf("enter nth value");
   scanf("%d",&n);
   for(num=2;count<n;num++)
   {
       temp1=num;

            while(temp1 != 0)
            {
                digit=temp1%10;
               if(digit == 2 || digit == 3 || digit == 5 || digit == 7)
               {
                   flag=1;
               }
               else
               {
                   flag=0;
                   break;
               }
                 temp1=temp1/10;
            }

     if(flag==1)
     {
       count++;
      
     }
     if(count==n)
     {
         temp=num;
         break;
     }

   }
   printf("%d",temp);
   return 0;

}
