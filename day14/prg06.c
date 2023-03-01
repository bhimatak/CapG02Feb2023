#include <stdio.h>
#include <stdlib.h>

int main()
{

	char *ptr;
	int len,i;
	printf("\nEnter the length of the string : ");
	scanf("%d",&len);

	ptr = (char *)malloc(len*sizeof(char));

	printf("\nEnter ypur Name: ");
	scanf("%s",ptr);

	printf("\nNAme: %s\n",ptr);

	for(i=0;*(ptr+i) != '\0' ;i++)
		printf("%c",*(ptr+i));

	printf("\n\n");

	return 0;
}