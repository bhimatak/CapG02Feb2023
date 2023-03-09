#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#include<pthread.h>

int wCount=0;
int cCount=0;
void *wordCount(void *vrgs)
{

    sleep(0.1);
    char *ptr=(char *)vrgs;
    char *tokens= strtok(ptr," ");
    while(tokens)
    {
     wCount++;
     tokens=strtok(NULL," ");
    }
    printf("word count=%d\n",wCount);
}

void *charCount(void *vrgs)
{
 char *ptr=(char *)vrgs;
 int i;
 for(i=0;ptr[i]!='\0';i++)
	{
		if(ptr[i]!=' ' &&  ptr[i]!='\n' && ptr[i]!='\t')
			cCount++;

		
	}
 printf("character count=%d\n",cCount);
}

int main()
{
    int count=0;
    char ptr[1024];
    printf("Enter The String\n");
    fgets(ptr,1024,stdin);

    pthread_t tid1,tid2;

    pthread_create(&tid1,NULL,charCount,&ptr);
    pthread_create(&tid2,NULL,wordCount,&ptr);
    pthread_join(tid1,NULL);
    pthread_join(tid2,NULL);
    return 0;

}

