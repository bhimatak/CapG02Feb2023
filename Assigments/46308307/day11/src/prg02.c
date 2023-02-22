#include<stdio.h>
#include<string.h> 

void upper(char *);

int main()
{
	char str[20];

	memset(str,'\0',20);
	printf("\nEnter the string:");
	scanf("%s",str);
	upper(str);
	printf("%s",str);
	printf("\n\n");
	return 0;
}
void upper(char *str)
{
	int i=0;

	while(str[i]!='\0')
	{
		if(str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
}
