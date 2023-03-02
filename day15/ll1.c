/*

Linked List - non optimised (learning purpose)

*/
#include <stdio.h>
#include <stdlib.h>

struct home
{
	int val;
	struct home *ptr;
};

typedef struct home HOME;

int main()
{
	HOME h1,h2,h3;

	HOME *ph;

	//assign the values and assign the address of next home to ptr */

	h1.val = 10;
	h1.ptr = NULL;

	h2.val = 20;
	h2.ptr = NULL;
	
	h3.val = 30;
	h3.ptr = NULL;

	h1.ptr = &h2;
	h2.ptr = &h3;
	h3.ptr = NULL;

	ph = &h1; // ph is pointing to BA or it the head of LINKed list 
    
    printf("%d->",ph->val);

    ph = &h2;
	
	printf("%d->",ph->val);

	ph = &h3;
	
	printf("%d->",ph->val);

    printf("\n\n");
    return 0;

}