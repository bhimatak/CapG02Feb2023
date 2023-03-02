#include<stdio.h>
#include <stdlib.h>

struct Home
{
	int val;
	struct Home *ptr;
};

typedef struct Home HOME;

int main()
{
	HOME h1,h2,h3;
	HOME *ph;

	h1.val=10;
	h1.ptr =NULL;

	h2.val = 20;
	h2.ptr =NULL;
        
	h3.val =30;
	h3.val =NULL;

	h1.ptr = &h2;
	h2.ptr = &h3;
        h3.ptr = NULL;
	ph=&h1;

	while(ph!=NULL)
	{
		printf("%d\n",ph->val);
		ph=ph->ptr;
	}
}
