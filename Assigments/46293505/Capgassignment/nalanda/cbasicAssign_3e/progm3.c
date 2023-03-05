#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_WORDS 100
#define WORD_LENGTH 20

// Function to perform search and replace on the first occurrence of search_word
void search_replace(char words[][WORD_LENGTH], int num_words, char search_word[], char replace_word[])
{
    int i;
    for (i = 0; i < num_words; i++)
    {
        if (strcmp(words[i], search_word) == 0)
        {
            strcpy(words[i], replace_word);
            break;
        }
    }
}

int main()
{
    char words[MAX_WORDS][WORD_LENGTH];
    char search_word[WORD_LENGTH], replace_word[WORD_LENGTH];
    int num_words, i;

    printf("Enter the number of words: ");
    scanf("%d", &num_words);

    printf("Enter the words:\n");
    for (i = 0; i < num_words; i++)
    {
        scanf("%s", words[i]);
    }

    printf("Enter the search word: ");
    scanf("%s", search_word);

    printf("Enter the replace word: ");
    scanf("%s", replace_word);

    search_replace(words, num_words, search_word, replace_word);

    printf("The modified words are:\n");
    for (i = 0; i < num_words; i++)
    {
        printf("%s ", words[i]);
    }

    return 0;
}
