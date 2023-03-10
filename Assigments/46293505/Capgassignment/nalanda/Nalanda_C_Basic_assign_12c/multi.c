#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>

#define MAXLEN 1024

int chCount=0;
int wdCount=0;

void* countWord(void* argv)
{
	char* line = (char *)argv;
	int i;

	char *token;
	token = strtok(line," ");
	while(token)
	{
		token = strtok(NULL," ");
		wdCount++;
	}
	if(wdCount<1)
		printf("no words\n");
	else
		printf("%d Word\n",wdCount);

}

void* countChar(void* argv)
{
	char* line = (char *)argv;
	int i;
	for(i=0;line[i]!='\n';i++)
	{
		if(line[i]!=32 && line[i]!='\0')
		{
			chCount++;
		}
	}
	if(chCount<1)
		printf("no characters\n");
	else
		printf("%d of cahracters\n",chCount);
}
int main()
{
	pthread_t pid1,pid2;
	char line[1024];
	printf("Enter a sentence\n");
	fgets(line,1024,stdin);

	pthread_create(&pid1,NULL,countWord,line);
	pthread_create(&pid1,NULL,countChar,line);
	pthread_join(pid1,NULL);

         
	return 0;
}

