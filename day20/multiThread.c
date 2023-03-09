#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

typedef unsigned long long ULL;

ULL sumOdd = 0;
ULL sumEven = 0;

void findEven(ULL, ULL);
void findOdd(ULL, ULL);

int main()
{
	ULL start = 0, end = 1900000000;
	findEven(start,end);
	findOdd(start,end);

	printf("\nSum Even = %llu",sumEven);
	printf("\nSum Odd = %llu", sumOdd);

}

void findOdd(ULL start, ULL end)
{
	ULL i;
	for(i = start;i<=end;i++)
	{
		if((i & 1) == 1)
		{
			sumOdd += i;
			// sleep(1);
		}

	}
}

void findEven(ULL start, ULL end)
{
	ULL i;
	for(i=start;i<=end;i++)
	{
		if((i & 1) == 0)
		{
			sumEven += i;
			// sleep(1);
		}
	}
}