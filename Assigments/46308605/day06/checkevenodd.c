#include<stdio.h>
int main()
{
int n,odd=1,even=1,rem,i;
printf("Enter the number to check even or odd: \n");
scanf("%d",&n);
for(i=0;n>0;i++)
{
rem=n%10;
if(i%2==0)
{
even=even*rem;
}
else
{
odd=odd*rem;
}
n=n/10;
}
if(odd==even)
printf("YES\n");
else
printf("NO\n");

return 0;
}
