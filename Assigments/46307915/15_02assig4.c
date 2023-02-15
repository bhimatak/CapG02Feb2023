#include <stdio.h>

int main()
{
int arr[10];
int i, j, n;
printf("Enter number of elements in array:");
scanf("%d", &n);
printf("Enter %d elements:\n", n);
for (i = 0; i < n; i++)
scanf("%d", &arr[i]);
printf("Array before eliminating odd positional values:\n");
for (i = 0; i < n; i++)
    printf("%d ", arr[i]);

for (i = 1; i < n; i += 2)
{
    for (j = i; j < n; j++)
    {
        arr[j - 1] = arr[j];
    }
    n--;
    i--;
}

printf("\nArray after eliminating odd positional values:\n");
for (i = 0; i < n; i++)
    printf("%d ", arr[i]);

return 0;
}




