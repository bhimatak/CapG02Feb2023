#include<stdio.h>
#include<string.h>
#include<pthread.h>
#include<unistd.h>

int total=0;

void *isPalindrome(void* args)
{
	char* word =(char *)args;
	int i,j;
	int len = strlen(word);
	j=len-1;
	for(i=0;i<j;i++,j--)
	{
		if(word[i]!=word[j])

			return NULL;
	}
	printf("%s is a Palindrome\n",word);
	total++;
	return NULL;
}

int main(int arg,char* argv[])
{
	pthread_t pid[arg-1];
	int i;

	for(i=0;i<arg-1;i++)
	{
		pthread_create(&pid[i],NULL,isPalindrome,argv[i+1]);
	}
	for(i=0;i<arg-1;i++)
	{
		pthread_join(pid[i],NULL);
	}
	if(total<1)
	{
		printf("No palindrome words\n");
	}
	else 
	{
		printf("%d words are palindrome\n",total);
	}

	return 0;
}
