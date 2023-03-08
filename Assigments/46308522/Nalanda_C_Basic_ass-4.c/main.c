#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define BUFF 1024

int tot_words(char *);
char display(char *);
char *longest_line(char *);
int total_lines(char *);
void append_last_line(char *);

char longest[BUFF];
int words_tot = 0;
int line_count = 0;

int main(int argc, char const *argv[])
{
    char filename[BUFF];

    printf("Enter the filename to open: \n");
    scanf("%s", filename);
    
    printf("\nTotal words in the file are : %d\n",tot_words(filename));
    printf("\nThe data in the file is :\n");
    display(filename);
    printf("\nThe longest line in the file is : %s",longest_line(filename));
    printf("\nTotal number of lines in the file are :%d",total_lines(filename));
    append_last_line(filename);
    printf("\n\n");

    return EXIT_SUCCESS;
}

int tot_words(char *filename)
{
    char ch;  
    FILE *file;  

    file = fopen(filename,"r");  
    while((ch = fgetc(file)) != EOF)
    {  
          if(ch ==' ' || ch == '\n')  
            words_tot++;  
    } 
    fclose(file);
    return words_tot;
}
char display(char *filename)
{
    FILE *fptr;
    char c;

    fptr = fopen(filename, "r");
    c = fgetc(fptr);
    while (c != EOF)
    {
        printf ("%c", c);
        c = fgetc(fptr);
    }
    fclose(fptr);
}
char *longest_line(char *filename)
{
    FILE *fp;
    char str[BUFF];
    int len=0;

    fp=fopen(filename,"r");
    if(fp==NULL)
    {
        printf("Error");
        return 0;
    }
    while(fgets(str,BUFF,fp)!=NULL)
    {
        if(len<strlen(str))
        {
            strcpy(longest,str);
            len=strlen(str);
        }
    }
    return longest;
}
int total_lines(char *filename)
{
    char ch;  
    FILE *file;  
    char line[BUFF];

    file = fopen(filename,"r");  
    if ( file != NULL )
    {
        while (fgets(line,BUFF, file) != NULL)
        {
            line_count++;
        }
    }
    fclose(file);
    return line_count;
}
void append_last_line(char *filename)
{
    FILE *fps;
    FILE *fpr;
    int ll = 1;
    char line[BUFF];

    printf("\nAppending..on %d line",line_count);
    fps = fopen(filename,"r");
    fpr = fopen("write_data.txt", "w");
    if (fpr == NULL) 
    {
        puts("Not able to open this file");
        fclose(fpr);
        exit(1);
    }
    if ( fps != NULL )
    {
        while (fgets(line,BUFF, fps) != NULL)
        {
            if(ll == line_count)
            {
                fputs(line,fpr);
                fprintf(fpr,"\n");
            }
            ll++;
        }
	rewind(fps);
	ll = 1;
	while(fgets(line,BUFF,fps) !=NULL)
	{
		if(ll == line_count)
		{
			break;
		}
		fputs(line,fpr);
		ll++;
	}
    }
    else
    {
        printf("File error!");
        fclose(fps);
    }
    fclose(fps);
    fclose(fpr);
}
