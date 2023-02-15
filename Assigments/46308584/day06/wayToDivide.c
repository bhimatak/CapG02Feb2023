#include <stdio.h>
int main() 
{
    int num, count = 0;
    int i,j,k;
    printf("Enter a number ");
    scanf("%d", &num);
    for (i = 1;i<=num;i++)
    {
        for (j=i;j<=num;j++)
	{
            for ( k =j;k<=num;k++)
	    {
                int l = num - i - j - k;
                if (l >= k && l <= num - i - j) 
		{
                    count++;
                    printf("%d + %d + %d + %d\n", i, j, k, l);
                }
            }
        }
    }
    printf("Count: %d\n", count);
    return 0;
}
