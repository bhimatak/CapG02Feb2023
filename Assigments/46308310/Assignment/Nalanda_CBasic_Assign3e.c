#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAXSIZE 80

/* functions to count, search, print, store and replace*/
void countWords(char *);
void storeWords(char **, char *);
void printWords(char **);
void searchAndReplace(char **, char *, char *);

int main()
{
	/* variables to input from user */
	char text[MAXSIZE];
	char searchWord[MAXSIZE];
	char replaceWord[MAXSIZE];

	/* user input*/
	printf("\nEnter your text(max of 80 Characters): ");
	fgets(text, MAXSIZE, stdin);

	printf("\n%s\n\n", text);

	/* count words in input string*/
	countWords(text);

	/* Allocate memory for an array of words*/
	char **words = (char **)malloc(MAXSIZE * sizeof(char *));

	/* store the words in the input string in the array*/
	storeWords(words, text);

	/* print the stored words*/
	printWords(words);

	/* get search and replace words from user*/
	printf("\nEnter search word: ");
	scanf("%s", searchWord);
	printf("\nEnter replace word: ");
	scanf("%s", replaceWord);

	/* search for the search word in the array and replace it with the replace word*/
	searchAndReplace(words, searchWord, replaceWord);

	/* print the array with the replaced word*/
	printWords(words);

	/* free the memory allocated for the array*/
	for (int i = 0; words[i] != NULL; i++)
	{
		free(words[i]);
	}
	free(words);

	return EXIT_SUCCESS;
}

/* function to count the number of words in a string*/
void countWords(char *str)
{
	int count = 0;
	char *strCopy = (char *)malloc(MAXSIZE);
	strcpy(strCopy, str);

	char *token = strtok(strCopy, " ");

	while (token != NULL)
	{
		count++;
		token = strtok(NULL, " ");
	}

	printf("\nThere are %d words in the given input string!!\n\n", count);

	// free the memory allocated for strCopy and token
	free(strCopy);
	free(token);
}

/* function to store the words in a string in an array*/
void storeWords(char **words, char *str)
{
	int i = 0;
	char *strCopy = (char *)malloc(MAXSIZE);
	strcpy(strCopy, str);

	char *token = strtok(strCopy, " ");

	while (token)
	{
		words[i] = (char *)malloc(MAXSIZE);
		strcpy(words[i], token);
		token = strtok(NULL, " ");
		i++;
	}

	/* free the memory allocated for strCopy and token*/
	free(strCopy);
	free(token);
}

/* function to print the words in an array*/
void printWords(char **words)
{				
	printf("<=========================>\n");
	printf("\nThe stored words are:\n");
	printf("<=========================>\n");

	for (int i = 0; words[i] != NULL; i++)
	{
		printf("%s\n", words[i]);
	}
}

/* function to search for a word in an array and replace it with a new word*/
void searchAndReplace(char **words, char *search, char *replace)
{
	int i, flag = 0;

	for (i = 0; words[i] != NULL; i++)
	{
		if (strcmp(words[i], search) == 0)
		{
			strcpy(words[i], replace);
			printf("\n\nSuccessfully replaced\n\n");
			flag = 1;
			break;
		}
	}

	if (flag != 1)
	{
		printf("\n\nNo words found!!\n\n");
	}
}

