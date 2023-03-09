#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <string.h>

int pal_count = 0;   

void* isPalindrome(void* args)
{
    char* word = (char*) args;
    int i, j, length;

    length = strlen(word);
    for (i = 0, j = length - 1; i < j; i++, j--)
    {
        if (word[i] != word[j])
            return NULL;    
        
    }
    printf("\n%s is a palindrome ",word);
    pal_count++;
    return NULL;
}

int main(int argc, char* argv[])
 {
 
    if (argc < 3)
    {
        printf("Please enter 2 words\n");
        return EXIT_FAILURE;
    }
    
    pthread_t td[argc-1];

    int i;
    
    for (i = 0; i < argc-1; i++)
    {
        pthread_create(&td[i], NULL, isPalindrome, argv[i+1]);
    }
  
    
    for (i = 0; i < argc-1; i++)
    {
    	pthread_join(td[i], NULL);
    }
    
    if(pal_count<1)
      printf("\n\nThere are no palindromes.\n\n");
      
    else
      printf("\n\nTotal palindromes found: %d\n", pal_count);
    
    return EXIT_SUCCESS;
}
