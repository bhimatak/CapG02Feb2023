#include<stdio.h>

int main()
{ 
   int run;
   int gusser;
   int player1;
   int player2;
   int player3;
   printf("Enter 1 to continue Game or 0 to exist from game\n ");
   scanf("%d",&run);
   while(run){
          printf("*****WEL-COME TO GAME*****\n");
          printf("Gusser Guess a number to start a game\n");
		  
		  scanf("%d",&gusser);
		  printf("player1 Guess a number\n");
		  scanf("%d",&player1);
		  printf("player2 Guess a number\n");
		  scanf("%d",&player2);
		  printf("player3 Guess a number\n");
		  scanf("%d",&player3);
          if(player1==gusser)
		      {
			     printf("Player1 won the game\n");
		      }
		  else if(player2==gusser)
		      {
			     printf("Player2 won a game\n");
		      }
	      else if(player3==gusser)
		      {
			     printf("player3 won a game\n");
			  }
		  else 
		      {
			     printf("uff Game lost\n");
		      }
	  
          printf("Enter 1 to continue or 0 to exist from game ");
          scanf("%d",&run);
	 }	    
  printf("***Thank you for playing Game\n***");
  return 0;
}

