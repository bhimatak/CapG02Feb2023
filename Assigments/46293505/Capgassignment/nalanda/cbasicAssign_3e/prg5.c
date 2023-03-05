#include<stdio.h>
#include<stdlib.h>

void freeMemory(void *ptr)
{
	if(ptr !=NULL)
	{
	free(ptr);
	}

}
