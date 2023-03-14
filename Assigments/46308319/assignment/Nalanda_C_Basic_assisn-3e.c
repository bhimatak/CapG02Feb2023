#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXSIZE 81

void countWords(char *);
void storeWords(char **, char *);
void printWords(char **);
void searchAndReplace(char **, char *, char *);

int main()
{
    char text[MAXSIZE];
    char searchWord[MAXSIZE];
    char replaceWord[MAXSIZE];

    printf("\nEnter text (max of 80 characters): ");
    fgets(text, MAXSIZE, stdin);

    printf("\n%s\n\n", text);

    countWords(text);

    char **words = (char **) malloc(MAXSIZE * sizeof(char *));
    storeWords(words, text);

    printWords(words);

    printf("\nEnter Search Word: ");
    scanf("%s", searchWord);

    printf("\nEnter Replace Word: ");
    scanf("%s", replaceWord);

    searchAndReplace(words, searchWord, replaceWord);

    printWords(words);

    for (int i = 0; i < MAXSIZE; i++) {
        free(words[i]);
    }

    free(words);

    return EXIT_SUCCESS;
}

void countWords(char *text)
{
    int count = 0;
    char *textCopy = (char *) malloc(MAXSIZE);
    strcpy(textCopy, text);
    char *token = strtok(textCopy, " ");

    while (token != NULL)
    {
        token = strtok(NULL, " ");
        count++;
    }

    printf("\nThere are %d words in the given string!!\n\n", count);
    free(textCopy);
}

void storeWords(char **words, char *text)
{
    int i = 0;
    char *textCopy = (char *) malloc(MAXSIZE);
    strcpy(textCopy, text);
    char *token = strtok(textCopy, " ");

    while (token != NULL)
    {
        words[i] = (char *) malloc(MAXSIZE);
        strcpy(words[i], token);
        token = strtok(NULL, " ");
        i++;
    }

    free(textCopy);
}

void printWords(char **words)
{
    printf("\nThe Stored Words are:\n");
    printf("<=========================>\n");

    for (int i = 0; words[i] != NULL; i++)
    {
        printf("%s\n", words[i]);
    }
}

void searchAndReplace(char **words, char *searchWord, char *replaceWord)
{
    int found = 0;

    for (int i = 0; words[i] != NULL; i++)
    {
        if (strcmp(words[i], searchWord) == 0)
        {
            strcpy(words[i], replaceWord);
            printf("\n\nSuccessfully Replaced!\n\n");
            found = 1;
            break;
        }
    }

    if (!found)
    {
        printf("\n\nNo Words Found!\n\n");
    }
}




