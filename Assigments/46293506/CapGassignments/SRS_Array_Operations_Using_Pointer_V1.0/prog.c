#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int copyChar(char *,char *);
void display(char *);
int conCat(char *,char *);
int getString(char *);

char src[1024];

int main()
{
	char dest[1024];
	int i;
	int ch;
	printf("\n enter \n 1.copy characters from one array another");
	printf("\n 2.concatenate Two Strings\n 3.EXIT\n choice:");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:getString(src);
		       copyChar(src,dest);
		       display(dest);
		       break;
		case 2:getString(src);
		       getString(dest);
		       conCat(src,dest);
		       display(src);
		       break;
		case 3:exit(EXIT_FAILURE);
		default: printf("\nWrong Choice");
	}
	return 0;
}

int getString(char *src)
{
	printf("Enter a string\n");
	scanf("%s",src);
}

void display(char *arr)
{
	printf("%s",src);
	printf("\n");
}

int copyChar(char *src,char *dest)
{
	
	int i;
	for(i=0;i<strlen(src);i++)
	{
		*(dest+i) =*(src+i);
	}
	printf("Characters Copied\n");
}

int conCat(char *src,char *dest)
{
	int i;
	int len =strlen(src);
	int j=0;
	for(i=len;dest[j]!='\0';i++)
	{
                *(src + i) = *(dest+j);
		j++;
	}
	printf("String Concatenated \n");

}
