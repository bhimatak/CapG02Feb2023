#include<stdio.h>
#include<stdlib.h>
#include<myHeader.h>

int main()
{
	int leng1,leng2,ch;
	char str1[size];
	char str2[size];
	char *source,*dest;

	source=str1;
	dest=str2;

	inputCharArray(source,dest);
	leng1=strlen(str1);
	leng2=strlen(str2);
	str1[leng1-1]='\0';
	str2[leng2-1]='\0';

	printf("\n\nEnter the choice: ");
	printf("\n1.Copystring from source to destination\n2.Concat source with destination\n3.Display source and Destination\n\n");
	scanf("%d",&ch);

	switch(ch)
	{
		case 1:
			copystr(source,dest);
			printf("Destination array after copyfunction :\n");
			displayArray(dest);
			break;

		case 2:	

			concatusinguf(leng1,source,dest);
			printf("Source array after concat function :\n");
			displayArray(source);
			break;

		case 3:
			printf("\n\nSource array:\n");
			displayArray(source);
			printf("\n\nDestination array:\n");
			displayArray(dest);
			break;

		default:
			printf("\n\nInvalid option!!\n\n");
	}
	return EXIT_SUCCESS;
}

