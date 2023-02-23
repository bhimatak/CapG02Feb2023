/*

2d array of characters

char str[5];

strcpy(str,"Bhim");

2000 2001 2002 2003 2004
'B'   'h'  'i'  'm' '\0'  => (1 row/ 1 set) having 5 columns


char str[3][5];

strcpy(str[0],"abcd");

2000 2001 2002 2003 2004
'a'   'b'  'c'  'd' '\0'  => (1 row/ 1 set) having 5 columns


strcpy(str[1],"bcde");

2005 2006 2006 2006 2009
'b'   'c'  'd'  'e' '\0'  => (1 row/ 1 set) having 5 columns

strcpy(str[2],"cdef");

2010 2011 2012 2013 2014
'c'   'd'  'e'  'f' '\0'  => (1 row/ 1 set) having 5 columns


*/

#include <stdio.h>
#include <string.h>

#define row 3
#define col 1024
#define BUFF 1024

int main()
{
	int i,j;

	char eName[row][col];

	/*
	strcpy(eName[0],"Akash");
	strcpy(eName[1],"Soumya");
	strcpy(eName[2],"Deepak Kumar");
	*/
	for(i=0;i<row;i++)
	{
		printf("\nEnter Name of Emp %d: ", (i+1));
		// scanf("%[^\n]s",eName[i]);
		// scanf(" ");
		fgets(eName[i],BUFF,stdin);

		eName[i][strlen(eName[i])-1] = '\0';
	}


	for(i=0;i<row;i++)
	{
		printf("\nLength %d string = %d",(i+1),strlen(eName[i]));
		for(j=0;j<=strlen(eName[i]);j++)
		{
			printf("\n%c = %d Address=%u",eName[i][j],eName[i][j],&eName[i][j]);
		}

		printf("\nNext Name\n");
	}

	// for(i=0;i<row;i++)
	// 	printf("\nEmp Name : %s",eName[i]);
/*
	printf("\nEmp Name : %s",eName[1]);
	printf("\nEmp Name : %s",eName[2]);
*/
	printf("\n\n");

	return 0;
}