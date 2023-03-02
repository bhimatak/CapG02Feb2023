#include<myheader.h>

int main()
{
	int index,ch=1;
	char str1[100];
	char str2[100];
	char chr;
	char *source=str1,*dest=str2;
	
	
	printf("\nEnter source string: ");
	fgets(str1,100,stdin);
	
	printf("\nEnter destination string: ");
	fgets(str2,100,stdin);
	
	printf("\n\nEnter the choice: ");
	printf("\n1.Copy String Source->Destination\n2.Update Source\n3.Concatenate Source<-Destination\n4.Display\n5.Exit\n");
	scanf("%d",&ch);

	switch(ch)
	{
		case 1:
			copystr(source,dest);
			printf("Destination after copying:%s\n",str2);
			break;

		case 2:	
			printf("\nEnter a character:");
			scanf("%c",&chr);
			printf("\nEnter an index:");
			scanf("%d",&index);
			updatestr(source,chr,index);
			printf("\nSource after update is :%s\n",str1);
			break;
		case 3:
			concatstr(source,dest);	
			printf("Source array after concat: %s\n",str1);
			break;

		case 4:
			displaystr(source);
			break;
		case 5:
			printf("\nExiting ...");
			break;
		default:
			printf("\n\nInvalid option!!\n\n");
			break;
	}
	
 	return 0;

}
