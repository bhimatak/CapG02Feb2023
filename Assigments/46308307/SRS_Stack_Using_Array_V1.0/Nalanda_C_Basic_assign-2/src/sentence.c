/*This is a menu driven application which performs operations on a sentence such as to display words in a new line, display the largest word, display words without printing any white space and replace all the white spaces with !*/

#include<stdio.h>
#include<myHeader.h>
#include<stdlib.h>

int main()
{
	char mystr[BUFF];
	int choice;
	int words = 0;
	int replace = 0;
	int longest = 0;

	while(1)
	{

	        printf("\n\n1.Input a sentence\n2.Print one word in a line\n3.Print the longest word in the sentence\n4.Print words in a line without printing white space\n5.Replace all the white spaces with !\n6.EXIT\n");
		printf("\nEnter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				getSentence(mystr);
				break;
			case 2:

				words = dispWord(mystr);
				printf("\nNumber of words in a sentence = %d",words);
				break;
			case 3:
				longest = dispLongest(mystr);
				printf("\nLongest word in the sentence = %d",longest);
				break;
			case 4:
				dispWords(mystr);
				break;
			case 5:
				replace = replacews(mystr);
				printf("\nNo. of white spaces replaced = %d",replace);
				break;
			case 6:

				printf("\nApplication has exited successfully!\n\n");
				exit(EXIT_SUCCESS);
			default:
				printf("\nInvalid choice !Enter your choice again!!!");
		}
	}

	return(EXIT_SUCCESS);
}
