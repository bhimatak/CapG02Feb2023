#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <string.h>

int countPal = 0;   

void* checkPalindrome(void* args)
{
    char* word = (char*) args;
    int i, j, length;

    length = strlen(word);
    for (i = 0, j = length - 1; i < j; i++, j--)
    {
        if (word[i] != word[j])
            return NULL;    
        
    }
    printf("\n%s is a palindrome word",word);
    countPal++;
    return NULL;
}

int main(int argc, char* argv[])
 {
 
    if (argc < 3)
    {
        printf("Please enter minimum of 2 words as arguments.\n");
        return EXIT_FAILURE;
    }
    
    pthread_t td[argc-1];

    int i;
    
    for (i = 0; i < argc-1; i++)
    {
        pthread_create(&td[i], NULL, checkPalindrome, argv[i+1]);
    }
  
    
    for (i = 0; i < argc-1; i++)
    {
    	pthread_join(td[i], NULL);
    }
    
    if(countPal<1)
      printf("\n\nThere are no palindromes present in the given input!!\n\n");
      
    else
      printf("\n\nTotal number of palindromes: %d\n", countPal);
    
    return EXIT_SUCCESS;
}
