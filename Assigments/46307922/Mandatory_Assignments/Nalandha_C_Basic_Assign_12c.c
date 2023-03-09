#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <string.h>

int count = 0;   

void* isPalindrome(void* args) {
    char* word = (char*) args;
    int i, j, len;

    len = strlen(word);
    for (i = 0, j = len - 1; i < j; i++, j--) {
        if (word[i] != word[j]) {
            return NULL;    
        }
    }
    count++;
    return NULL;
}

int main(int argc, char* argv[])
 {
    if (argc < 2) {
        printf("Please enter minimum of 2 words as arguments.\n");
        return 1;
    }
    
    pthread_t threads[argc-1];

    int i;
    
    for (i = 0; i < argc-1; i++) {
        if (pthread_create(&threads[i], NULL, isPalindrome, argv[i+1]) != 0) {
            printf("Failed to create thread %d.\n", i+1);
            return 1;
        }
    }
    
    for (i = 0; i < argc-1; i++) {
    	pthread_join(threads[i], NULL);
    }
    
    printf("Total number of palindromes: %d\n", count);
    
    return 0;
}
