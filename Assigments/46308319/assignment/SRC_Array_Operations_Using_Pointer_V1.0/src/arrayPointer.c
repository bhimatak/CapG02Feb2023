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

	printf("\n\nEnter the Choice: ");
	printf("\n1.Copystring from Source to Destination\n2.Concat Source with Destination\n3.Display Source and Destination\n\n");
	scanf("%d",&ch);

	switch(ch)
	{
		case 1:
			copystr(source,dest);
			printf("Destination array after Copyfunction :\n");
			displayArray(dest);
			break;

		case 2:	

			concatusinguf(leng1,source,dest);
			printf("Source Array after Concat Function :\n");
			displayArray(source);
			break;

		case 3:
			printf("\n\nSource Array:\n");
			displayArray(source);
			printf("\n\nDestination Array:\n");
			displayArray(dest);
			break;

		default:
			printf("\n\nInvalid Option\n\n");
	}
	return EXIT_SUCCESS;
}
