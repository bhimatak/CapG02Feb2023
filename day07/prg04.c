#include <stdio.h>

int main()
{
	char ch = '\0';
	int it=0;
	char str[27];
	int sArr = 0;

	do
	{
		ch = getc(stdin);
		printf("\n%c",ch);
		str[it] = ch; 
		it++;
	}while(ch != '\n');
	str[it-1] = '\0';

	sArr = it;
		
	printf("\n\n Letters print whole at a time\n");

	for(it=0;it<sArr;it++)
		printf("\n%c = %d",str[it], str[it]);

	printf("\n\n%s",str);
	// puts(str);
	//printf("\n\n");

	return 0;
}