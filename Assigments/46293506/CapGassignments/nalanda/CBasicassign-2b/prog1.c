#include<stdio.h>
#include<string.h>
#include<stdlib.h>


int getSentence(char []);
int printOneWord(char []);
int printLongestWord(char []);

int main()
{
	char str[1024];
//	int count;
        getSentence(str);
	printf("%s\n",str);
	printf("NO of Words: %d\n",printOneWord(str));


	return 0;
}

int getSentence(char str[])
{
	printf("User Enter the Sentence\n");
	fgets(str,1024,stdin);
}

int printOneWord(char str[])
{
	int i,j;
	int count=1;
	int jvalue =0;
	for(i=0;i<=strlen(str);i++)
	{
		if(str[i]==32)
		{
			count++;
			for(j=jvalue;j<=i;j++)
			{
				printf("%c",str[j]);
			}
                       
		        jvalue=i;
			printf("\n");

	            }
	}


			for(j=jvalue;j<=strlen(str);j++)
			{
				printf("%c",str[j]);
			}
			printf("\n\n");
		
	
	return count;
}



