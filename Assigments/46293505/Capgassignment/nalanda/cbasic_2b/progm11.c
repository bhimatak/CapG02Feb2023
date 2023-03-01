#include<stdio.h>
#include<string.h>
#include<stdlib.h>


int getSentence(char []);
int printOneWord(char []);
int printLongestWord(char []);

int main()
{
	char str[1024]
        getSentence(str);

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
		if(str[i]==32 && str[i+1]!=32)
		{
			count++;
			for(j=jvalue;j<=i;j++)
			{
				printf("%c",str[j]);
			}
                       
		        jvalue=i;
			printf("\n");

	            }
		if(str[i]!=32)
		{
			for(j=jvalue+1;j<=strlen(str);j++)
			{
				printf("%c",str[j]);
				
			}
		
		}
		printf("\n\n");

	}



		
	
	return count;
}


int printLongestWord(char str[])
{
	int i,j;
	int large=2;
	int count=0;
	int jvalue =0;
	for(i=0;i<=strlen(str);i++)
	{
		if(str[i]==32)
		{       count=0;
			for(j=jvalue;j<=i;j++)
			{
		           if(str[j]!=32)
			   {
				   count++;
			           
			   }
			  
			}
                        
		
			
                     
		        jvalue=i;

	            }

	}

			for(j=jvalue;j<=strlen(str);j++)
			{
			//	printf("%c",str[j]);
			}
			printf("\n\n");
		
	
	return count;
}

