#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <pthread.h>
#include <unistd.h>

#define MAX_WORDS 100
#define MAX_WORD_LENGTH 50

int num_palindromes = 0;
pthread_mutex_t mutex;

void *isPalindrome(void *arg) {
    char *word = (char *) arg;
    int len = strlen(word);
    int is_palindrome = 1;
    for (int i = 0; i < len / 2; i++) {
        if (word[i] != word[len - i - 1]) {
            is_palindrome = 0;
            break;
        }
    }
    pthread_mutex_lock(&mutex);
    if (is_palindrome) {
        num_palindromes++;
    }
    pthread_mutex_unlock(&mutex);
    char *status = is_palindrome ? "is a palindrome" : "is not a palindrome";
    char *message = (char *) malloc((len + strlen(status) + 5) * sizeof(char));
    sprintf(message, "%s %s.\n", word, status);
    pthread_exit((void *) message);
}

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Usage: %s word1 word2 ...\n", argv[0]);
        return 1;
    }
    int num_words = argc - 1;
    pthread_t threads[MAX_WORDS];
    pthread_mutex_init(&mutex, NULL);
    for (int i = 0; i < num_words; i++) {
        char *word = argv[i + 1];
        pthread_create(&threads[i], NULL, isPalindrome, (void *) word);
    }
    printf("Palindromes:\n");
    for (int i = 0; i < num_words; i++) {
        void *result;
        pthread_join(threads[i], &result);
        printf("%s", (char *) result);
        free(result);
    }
    printf("%d palindromes found.\n", num_palindromes);
    pthread_mutex_destroy(&mutex);
    return 0;
}

