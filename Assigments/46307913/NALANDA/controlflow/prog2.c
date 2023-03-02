#include<stdio.h>

int main() 
{

    int num;
    printf("\nEnter a number:\n");
    scanf("%d",&num);

    switch(num){
       case 2:
       printf("\nHe/She is Software Developer\n");
       break;

       case 3:
       printf("\nHe/She is Senior Software Developer\n");
       break;

       case 4:
       printf("\nHe/She is Team Lead\n");
       break;


       case 5:
       printf("\nHe/She is Senior Team Lead\n");
       break;

       default:
       printf("\nIncorrect Designation code entered\n");
    }
    return 0;
}

