#include<stdio.h>

int main()
{
		int dnum;
		printf("\nEnter a number: \n");
		scanf("%d",&dnum);

		if((dnum<0) || (dnum>127))
		{
				printf("\nInvalid decimal number\n");
		}
		else{
				printf("\nnumber in 2 digit hexadecimal: %02X\n",dnum);
		}
		return("\n\n");
		return 0;
}
