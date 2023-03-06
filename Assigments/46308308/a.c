#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_LENGTH 80

int main() {
    char input[MAX_LENGTH + 1];
    char **words = NULL;         
    int word_count = 0;

    printf("Enter a line of text (max %d characters):\n", MAX_LENGTH);
    fgets(input, MAX_LENGTH + 1, stdin);

    words = (char **) malloc(sizeof(char *));

    char *token = strtok(input, " ");
    while (token != NULL) {
        int start_index = 0;
        int end_index = strlen(token) - 1;
        while (!isalpha(token[start_index]) && start_index < end_index) {
            start_index++;
        }
        while (!isalpha(token[end_index]) && end_index > start_index) {
            end_index--;
        }
        int word_length = end_index - start_index + 1;
        char *word = (char *) malloc(word_length + 1);
        strncpy(word, &token[start_index], word_length);
        word[word_length] = '\0';
        words = (char **) realloc(words, (word_count + 1) * sizeof(char *));
        words[word_count] = word;
        word_count++;
        token = strtok(NULL, " ");
    }

    printf("Word count: %d\n", word_count);
    printf("Words: ");
    for (int i = 0; i < word_count; i++) {
        printf("%s ", words[i]);
    }
    printf("\n");

    for (int i = 0; i < word_count; i++) {
        free(words[i]);
    }
    free(words);

    return 0;
}
