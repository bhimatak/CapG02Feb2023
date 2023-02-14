#include <stdio.h>

int main()
{
	char ch;
	int it;
	char str[27];

	for(it=0,ch='A';it<26;it++, ch++)
	{
		printf("\n%c = %d",ch,ch);
		str[it] = ch;
	}
	str[it] = '\0';

	printf("\n\n Letter in serial order\n");

	for(it=0;it<27;it++)
		printf("\n%c = %d",str[it], str[it]);

	printf("\n\n Letters print whole at a time\n");
	//printf("%s",str);
	puts(str);
	printf("\n\n");

	return 0;
}