#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
#include<string.h>
#include<unistd.h>
#define MAXLEN 1024

int countWords=0;
int countChars=0;

void * countWor(void* args)
{
	char * sentence = (char*) args;
	int i=0;

	for(i=0;sentence[i]!='\0';i++)
	{
		if(sentence[i]==' ' || sentence[i]=='\n')
			countWords++;
		printf("\nWords thread");
		sleep(0.1);
	}

	if(countWords>0)
		printf("\n\nThere are %d words\n\n",countWords);
	else
		printf("\n\nThere are no words in the given line!!\n\n");
	return EXIT_SUCCESS;
}

void * countCharacters(void* args)
{
	char * sentence = (char*) args;
	int i=0;

	for(i=0;sentence[i]!='\0';i++)
	{
		if(sentence[i]!=' ' &&  sentence[i]!='\n' && sentence[i]!='\t')
			countChars++;
		printf("\nCharacters thread");
		sleep(0.1);
	}

	if(countChars>0)
		printf("\n\nThere are %d Characters\n\n",countChars);
	else
		printf("\n\nThere are no Characters in the given line!!\n\n");
	return EXIT_SUCCESS;
}
int main()
{
	char sentence[1024];
	printf("\n\nEnter the text:\n");
	fgets(sentence, 1024, stdin);

	pthread_t thread1,thread2;
	pthread_create(&thread1,NULL,countWor,sentence);
	pthread_create(&thread2,NULL,countCharacters,sentence);
	pthread_join(thread1,NULL);
	pthread_join(thread2,NULL);

	return EXIT_SUCCESS;
}
