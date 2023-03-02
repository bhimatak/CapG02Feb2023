#include <stdio.h>
#include <string.h>

#define MAX_SENTENCE_LENGTH 100

void accept_sentence(char *sentence) {
    printf("Enter a sentence: ");
    fgets(sentence, MAX_SENTENCE_LENGTH, stdin);
    
    sentence[strcspn(sentence, "\n")] = 0;
}

int print_words(char *sentence) {
    int count = 0;
    printf("Words in the sentence:\n");
    char *word = strtok(sentence, " ");
    while (word != NULL) {
        printf("%s\n", word);
        count++;
        word = strtok(NULL, " ");
    }
    return count;
}

int print_longest_word(char *sentence) {
    int max_length = 0;
    char longest_word[MAX_SENTENCE_LENGTH];
    char *word = strtok(sentence, " ");
    while (word != NULL) {
        int length = strlen(word);
        if (length > max_length) {
            max_length = length;
            strcpy(longest_word, word);
        }
        word = strtok(NULL, " ");
    }
    printf("Longest word in the sentence: %s\n", longest_word);
    return max_length;
}

void print_words_in_line(char *sentence) {
    printf("Sentence with no whitespace:\n");
    for (int i = 0; i < strlen(sentence); i++) {
        if (sentence[i] != ' ') {
            printf("%c", sentence[i]);
        }
    }
    printf("\n");
}

int replace_whitespace(char *sentence, char replacement) {
    int count = 0;
    for (int i = 0; i < strlen(sentence); i++) {
        if (sentence[i] == ' ') {
            sentence[i] = replacement;
            count++;
        }
    }
    return count;
}

int main() {
    char sentence[MAX_SENTENCE_LENGTH];
    accept_sentence(sentence);

    int num_words = print_words(sentence);
    printf("Number of words in the sentence: %d\n", num_words);

    int longest_word_length = print_longest_word(sentence);
    printf("Length of longest word: %d\n", longest_word_length);

    print_words_in_line(sentence);

    int num_replacements = replace_whitespace(sentence, '!');
    printf("Number of whitespace replacements: %d\n", num_replacements);
    printf("Modified sentence: %s\n", sentence);

    return 0;
}
