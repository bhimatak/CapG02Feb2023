#include<stdio.h>
#include<string.h>


int main(){
	char a[40];
	//printf("Enter sentence: ");
	//scanf("%c",a);
	//gets(a);
	input_func(a);
	printf("\nentered sentence : %s",a);
	printf("\nThe number of words: %d",count_words(a));
	printf("\nThe longest word in the string is of %d letters",long_word(a));
	printf("\nThe sentence without white spaces :"); display_without_white_spaces(a);
	printf("\nThe updated sentence repacing spaces with !: ");
	replacing(a);
	
	return 0;

}
void input_func(char a[]){
	printf("Enter sentence :");
	fgets(a,1024,stdin);
}
int count_words(char a[20]){

	int count=0;
	for(int i=0;i<strlen(a);i++){
		if(a[i]!=' '){
			count++;
		}
	}
	return count;
}

//to find the longest word in a string

int long_word(char str[])
{
	int length=0,max=0,i=0,j=0;

	for(i=0;str[i]!='\n';i++)
	{
		if(str[i]!=' ')
		{
			length++;
		}

		else
		{
			if(length>max)
			{
				max=length;
				j=i-max;
			}

			length=0;
		}
				
	}

	if(length>max)
	{
		max=length;
		j=i-max;
	}
	
	printf("\n\nThe longest word is ");


	for(i=0;i<max ;i++)
		printf("%c",str[j+i]);

	return max;

}


void display_without_white_spaces(char a[]){
	for(int i=0;i<strlen(a);i++){
		if(a[i]==' ')
			continue;

		printf("%c",a[i]);
	}
	
	printf("\n---\n");
}

/* replacing ' ' with a !*/


void replacing(char a[]){
	char c='!';
	for(int j=0;j<strlen(a);j++){
		if(a[j]==' ')
			strcpy(a[j],c);
		puts(a[j]);
		
	}
}
