#include<stdio.h> 
#include<string.h> 
#include<stdlib.h>


int getSentence(char []); 
int printOneWord(char []); 
int printLongestWord(char []); 
int getSunString(char []);
int findSubString(char []);

int main() 
{
       	char str[1024];
	int count;
        getSentence(str);
//	printf("%s\n",str);
    //  printf("NO of Words: %d\n",printOneWord(str));
      //printLongestWord(str);
        findSubString(str);
	return 0;
}

int getSentence(char str[])
{
       	printf("User Enter the Sentence\n");
	fgets(str,1024,stdin); 
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
 

int findSubString(char str[])
{
	char str1[20];
        int j,jvalue=0;
	int i,k;
	char *str2;
	int len;
	char *flag;

    	printf("Enter a SubString to Search\n");
	scanf("%s",str1);
        k=0;
        len =strlen(str1);
/*	for(i=0;i<strlen(str);i++)
	{
		if(str[i]==32 || str[i]==10)
		{       
			for(j=jvalue;j<i;j++)
			{
				   str2[k]=str[j];
				   k++;

			}
			jvalue=i;
			flag=strstr(str2,str1);
			if(flag)
			{
				flag==2;
			}
		}        
		
         }*/
         str2=strstr(str,str1);

	 printf("%s\n",str2);


}



