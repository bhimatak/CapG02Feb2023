#include <stdio.h>
#include <string.h>

#define MAX_LEN 100 // maximum length of input sentence

void acceptSentence(char sentence[]) {
    printf("Enter a sentence: ");
    fgets(sentence, MAX_LEN, stdin);
   
    if (sentence[strlen(sentence) - 1] == '\n') {
        sentence[strlen(sentence) - 1] = '\0';
    }
}

int printWords(char sentence[]) {
    int numWords = 0;
    char *word = strtok(sentence, " ");
    while (word != NULL) {
        printf("%s\n", word);
        numWords++;
        word = strtok(NULL, " ");
    }
    return numWords;
}

int printLongestWord(char sentence[]) {
    int maxWordLength = 0;
    char *word = strtok(sentence, " ");
    while (word != NULL) {
        int wordLength = strlen(word);
        if (wordLength > maxWordLength) {
            maxWordLength = wordLength;
        }
        word = strtok(NULL, " ");
    }
    return maxWordLength;
}

void removeWord(char sentence[], char substring[]) {
    char *word = strtok(sentence, " ");
    while (word != NULL) {
        if (strstr(word, substring) != NULL) {
            
            int wordLength = strlen(word);
            char *nextWord = strchr(word, ' ');
            if (nextWord != NULL) {
                memmove(word, nextWord + 1, strlen(nextWord));
            } else {
                sentence[strlen(sentence) - wordLength - 1] = '\0';
            }
            break;
        }
        word = strtok(NULL, " ");
    }
    printf("Updated sentence: %s\n", sentence);
}

void printWithoutWhitespace(char sentence[]) {
    for (int i = 0; sentence[i] != '\0'; i++) {
        if (sentence[i] != ' ') {
            printf("%c", sentence[i]);
        }
    }
    printf("\n");
}

int replaceWhitespace(char sentence[], char replacement) {
    int numReplacements = 0;
    for (int i = 0; sentence[i] != '\0'; i++) {
        if (sentence[i] == ' ') {
            sentence[i] = replacement;
            numReplacements++;
        }
    }
    return numReplacements;
}

int main() {
    char sentence[MAX_LEN];
    acceptSentence(sentence);
    
    printf("Words in the sentence:\n");
    int numWords = printWords(sentence);
    printf("Number of words: %d\n", numWords);
    
    printf("Longest word length: %d\n", printLongestWord(sentence));
    
    char substring[MAX_LEN];
    printf("Enter search substring: ");
    fgets(substring, MAX_LEN, stdin);
    if (substring[strlen(substring) - 1] == '\n') {
        substring[strlen(substring) - 1] = '\0';
    }
    removeWord(sentence, substring);
    
    printf("Sentence without whitespace:\n");
    printWithoutWhitespace(sentence);
    
    int numReplacements = replaceWhitespace(sentence, '!');
    printf("Sentence after whitespace replacement: %s\n", sentence);
    printf("Number of replacements: %d\n", numReplacements);
    
    return 0;
}