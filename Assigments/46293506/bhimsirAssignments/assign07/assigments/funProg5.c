#include"string.h"
#include<stdio.h>
#include"myHeader.h"

char freq(char str[])
{
	int i,j;
	int len=strlen(str);
        int count;
	int vist[len];
	for(i=0;i<len;i++)
	{
		
		
		if(vist[i]!=1)
		{
			count =1;
		           for(j=i+1;j<len;j++)
		               {
				       printf("%c %c\n",str[i],str[j]);
		                	if(str[i]==str[j])
		                          	{                       
				                        count++;
				                        vist[j]=1;
			                        }                  
	                      	}
			   
	                          printf("%c : %d\n",str[i],count);
	           }
		 
         }     

}

char printList2()
{
	char str[50];

	printf("Enter a string\n");
	scanf("%s",str);
	
	freq(str);

}




