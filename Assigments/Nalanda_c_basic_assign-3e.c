#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LENGTH 80

void count_words(char *input_str);
char** extract_words(char *input_str);
int search_and_replace(char **words, char *search_word, char *replace_word);
void display_words(char **words);
void free_memory(char **words);

int main() {
    char input_str[MAX_LENGTH];
    printf("Enter a line of text (max length 80):\n");
    fgets(input_str, MAX_LENGTH, stdin);
    count_words(input_str);
    char **words = extract_words(input_str);
    display_words(words);
    char search_word[MAX_LENGTH], replace_word[MAX_LENGTH];
    printf("Enter search word:\n");
    fgets(search_word, MAX_LENGTH, stdin);
    search_word[strcspn(search_word, "\n")] = '\0'; // remove newline character
    printf("Enter replace word:\n");
    fgets(replace_word, MAX_LENGTH, stdin);
    replace_word[strcspn(replace_word, "\n")] = '\0'; // remove newline character
    int result = search_and_replace(words, search_word, replace_word);
    if (result == EXIT_SUCCESS) {
        printf("Search and replace successful!\n");
        display_words(words);
    } else {
        printf("Search word not found!\n");
    }
    free_memory(words);
    return 0;
}

void count_words(char *input_str) {
    int count = 0;
    char *token = strtok(input_str, " ");
    while (token != NULL) {
        count++;
        token = strtok(NULL, " ");
    }
    printf("Word count: %d\n", count);
}

char** extract_words(char *input_str) {
    char **words = malloc(sizeof(char*) * MAX_LENGTH); // allocate memory for word pointers
    int i = 0;
    char *token = strtok(input_str, " ");
    while (token != NULL) {
        words[i] = malloc(sizeof(char) * (strlen(token) + 1)); // allocate memory for word
        strcpy(words[i], token);
        i++;
        token = strtok(NULL, " ");
    }
    words[i] = NULL; // set last element to NULL to mark end of array
    return words;
}

int search_and_replace(char **words, char *search_word, char *replace_word) {
    for (int i = 0; words[i] != NULL; i++) {
        if (strcmp(words[i], search_word) == 0) {
            free(words[i]); // free memory of old word
            words[i] = malloc(sizeof(char) * (strlen(replace_word) + 1)); // allocate memory for new word
            strcpy(words[i], replace_word);
            return EXIT_SUCCESS;
        }
    }
    return EXIT_FAILURE;
}

void display_words(char **words) {
    printf("Words extracted:\n");
    for (int i = 0; words[i] != NULL; i++) {
        printf("%s\n", words[i]);
    }
}

void free_memory(char **words) {
    for (int i = 0; words[i] != NULL; i++) {
        free(words[i]);
    }
    free(words);
}