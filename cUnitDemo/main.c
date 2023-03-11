#include "file1.h"

int main()
{
	printf("%d\n",add(10,15));
	printf("%d\n",mul(10,add(10,15)));
	printf("%f\n",div1(10,0));
	char *_name="";
	if(validName(_name) == 0)
		printf("\nInvalid Name\n");
	else
		printf("\nValid Name\n"); 

	printf("%s\n",getName());
	return 0;
}