#include<stdio.h> 
#include<string.h> 
#include<stdlib.h>
#include<ctype.h>

int getSentence(char []); 
int dispSen(char *);
int printOneWord(char []); 
int printLongestWord(char []); 
void remove_word(char [],char []);
int printSNSpc(char []);
int replaceSpcByNotNull(char *);

int main() 
{
	int ch=1,ch1;;
       	char str[1024];
	int count;
	char search[30];
	getSentence(str);
	while(ch)
	{
		printf("\nEnter \n 1.display sentence \n 2.print the sentence word by word \n 3. print the longest word in a sentence\n");
		printf("4.to remove Word from Sentence \n 5. print word without space \n 6.replace space by not null\n 7.exit ");
                printf("\nenter your choice\n");
		scanf("%d",&ch1);
		switch(ch1)
		{
			
			case 1:dispSen(str);
			       break;
			case 2:printf("NO of Words: %d\n",printOneWord(str));
			       break;
			case 3:printLongestWord(str);
			       break;
			case 4:printf("Enter a word to search\n");
                               scanf("%s",search);
                               remove_word(str,search);
			       break;
			case 5:printSNSpc(str);
			       break;
			case 6:replaceSpcByNotNull(str);
			       break;
			default:printf("Wrong chice\n");
				return EXIT_SUCCESS;

		
		}
	}

	return 0;
}

int getSentence(char str[])
{
       	printf("User Enter the Sentence\n");
	fgets(str,1024,stdin); 
}
int dispSen(char arr[])
{
	printf("%s\n",arr);
}

int printOneWord(char str[]) 
{
       	int i,j; int count=0; int jvalue =0;
	for(i=0;i<=strlen(str)-1;i++) 
	{ 
		if(str[i]==32 ||str[i+1]=='\n') 
		{ 
			count++; 
			for(j=jvalue;j<=i;j++) 
			{

				if(str[j]!=32)
				{
					printf("%c",str[j]);
				
				}
				
			}
                       printf("\n");
		        jvalue=i;

	            }
	}
	return count;
}


int printLongestWord(char str[])
{
	int i,j;
	int k;
	int count=0;
	int jvalue =0;
	int large[20];
	int c=0;
	int li=0;
	int index[20];
	int si;

	for(i=0;i<strlen(str);i++)
	{
		if(str[i]==32 || str[i+1]=='\n')
		{       
			
		      	count=0;  
			for(j=jvalue;j<=i;j++)
			{
				if(str[j]!=' ')
				{
					count++;
				}
			}
			large[li]=count;
			index[li]=jvalue;
			li++;
		        jvalue=i;
	            }
	}

	c=large[0];
	for(i=0;i<li;i++)
	{
		if(large[i]>c)
		{
			c = large[i];
			si=i;
			
		}
	}


	for(k=index[si]+1;k<(index[si] + c + 1);k++)
	{
           printf("%c",str[k]);
	 }
	printf("  is the first longest word and its length is :%d ",c); 
	printf("\n");

}
 

void remove_word(char sentence[],char search[]) {
    int len = strlen(sentence);
    int start_index = -1;
    int end_index = -1;
    int i;
    int shift;
    char word[1024];
    int search_len = strlen(search);

    printf("Enter string to search\n");

    for (i = 0; i < len; i++) {
        if (isspace(sentence[i]) || i == len-1) {
            if (i == len-1) {
                i++;
            }
            if (start_index != -1 && end_index == -1) {
                end_index = i-1;
            }
    
            strncpy(word, &sentence[start_index], end_index-start_index+1);
            word[end_index-start_index+1] = '\0';
            if (strstr(word, search) != NULL) {
                shift = end_index-start_index+2;
                memmove(&sentence[start_index], &sentence[start_index+shift], len-start_index-shift);
                len -= shift;
                i -= shift;
            }
            start_index = -1;
            end_index = -1;
        } else if (start_index == -1) {
            start_index = i;
        }
    }
}

int printSNSpc(char str[])
{
	int i;
	for(i=0;i<strlen(str);i++)
	{
		if(str[i]!=32 && str[i]!=10)
		{
			printf("%c",str[i]);
		}
	}
	printf("\n\n");
}

int replaceSpcByNotNull(char str[])
{
	int i;
	for(i=0;i<strlen(str);i++)
	{
		if(str[i]==32)
		{
			str[i]='!';
		}
	}
}
