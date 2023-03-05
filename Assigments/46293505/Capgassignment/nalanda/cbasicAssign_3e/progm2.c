#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LENGTH 80

int count_words(char *input);
char **extract_words(char *input);
int search_replace(char **words, char *search_word, char *replace_word);
void display_words(char **words);
void free_words(char **words);

int main() {
    char input[MAX_LENGTH];
    printf("Enter a line of text (max length 80):\n");
    fgets(input, MAX_LENGTH, stdin);

   
    int word_count = count_words(input);
    printf("Word count: %d\n", word_count);

   
    char **words = extract_words(input);

   
    char search_word[MAX_LENGTH], replace_word[MAX_LENGTH];
    printf("Enter a search word:\n");
    fgets(search_word, MAX_LENGTH, stdin);
    search_word[strcspn(search_word, "\n")] = '\0'; 
    printf("Enter a replace word:\n");
    fgets(replace_word, MAX_LENGTH, stdin);
    replace_word[strcspn(replace_word, "\n")] = '\0'; 
    if (search_replace(words, search_word, replace_word) == EXIT_SUCCESS) {
        printf("Search-replace successful.\n");
    } else {
        printf("Search word not found.\n");
    }

    
    printf("All words:\n");
    display_words(words);

  
    free_words(words);

    return 0;
}

int count_words(char *input) {
    int count = 0;
    char *token = strtok(input, " ");
    while (token != NULL) {
        count++;
        token = strtok(NULL, " ");
    }
    return count;
}

char **extract_words(char *input) {
    char **words = malloc(sizeof(char*) * MAX_LENGTH);
    char *token = strtok(input, " ");
    int i = 0;
    while (token != NULL) {
        words[i] = malloc(sizeof(char) * (strlen(token) + 1));
        strcpy(words[i], token);
        i++;
        token = strtok(NULL, " ");
    }
    return words;
}

int search_replace(char **words, char *search_word, char *replace_word) {
    for (int i = 0; words[i] != NULL; i++) {
        if (strcmp(words[i], search_word) == 0) {
            free(words[i]);
            words[i] = malloc(sizeof(char) * (strlen(replace_word) + 1));
            strcpy(words[i], replace_word);
            return EXIT_SUCCESS;
        }
    }
    return EXIT_FAILURE;
}

void display_words(char **words) {
    for (int i = 0; words[i] != NULL; i++) {
        printf("%s\n", words[i]);
    }
}

void free_words(char **words) {
    for (int i = 0; words[i] != NULL; i++) {
        free(words[i]);
    }
    free(words);
}
