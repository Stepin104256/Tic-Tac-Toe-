#include "tic_tac_toe.h"

/*Start of the Game*/
int main()
{
    int ch, i, j, choice,t;
    char mark;
    int player=1;
    int final;
    char name[2][20];
/* Prints the Welcome message and prompts the user to select a option */
    start:
    		printf("\n\n\t\tHello! Welcome to the Tic Tac Toe Game");
   		printf("\n\t\t--------------------------------------\n");
   		printf("\n\n1.Start The Game");
		printf("\n\n2.Quit The Game");
   		printf("\n\n3.View the rules of the Game");
		printf("\n\nEnter your choice(1-3) : ");
		scanf("%d", &ch);
    switch (ch)
     {
		    /* If the user enters 1, Start the game */
      case 1:
     		 printf("\nWhats the name of 1st Player?\n");
      		 scanf("%s",name[0]);
      		 printf("\nWhats the name of 2nd player?\n");
      		 scanf("%s",name[1]);
      		 printf("\n\nAwesome! Welcome to the game %s and %s \n",name[0],name[1]);
     		 printf("\nBest of Luck %s and %s!!\n",name[0],name[1]);
      		 printf("\n\t%s will be Player 1 with 'X' mark\n",name[0]);
     		 printf("\t%s will be Player 2 with 'O' mark\n",name[1]);
     		 question:
     		 printf("\nWant to continue? \n enter 1 to continue and 0 to go back to main menu");
     		 int g;
     		 scanf("%d",&g);
       		if (g == 1)
           		goto letsgo;
       		else if (g == 0)
          		 goto start;
      		else
         		 printf("Invalid option.\n");
          		 goto question;

      letsgo:
      do {
	  /* Displays the Tic Tac Toe game board */
       creating_board();
       player = (player % 2) ? 1 : 2;
       printf("Player %d, enter a number:  ", player);
       scanf("%d", &choice);
       mark = (player == 1) ? 'X' : 'O';
	/* Marks the board with user's choice */
      j= marking_board(choice, mark); 
      if (j == 0)
            player--;
      i = check_for_win();
        player++;
      }
      while(i==-1);
      creating_board(); 
		    /* Checks if there is a winner */
      t = check_for_win(); 
		    /* Checks if there is a horizontal win */
      check_horizontal(t);
		    /* Checks if tehre is a vertical win  */
      check_vertical(t);
		    /* Checks if there is a diagonal win */
      check_diagonal(t);
		    /* Checks if there is a tie */
      check_if_tie(t);
             
/* Displays the final result 
   Displays the Winner Name in case of a win 
   Displays that the game is a tie in case of a tie */
    if (i == 1||i == 2 || i==3)
    {
      final= --player;
      if(final == 2)
      {
      printf("\nWohooo!! %s won. Congratulations %s!!\nThanks for playing.\n\n\n",name[1],name[1]);
      }
      else
      {
      printf("\nWohooo!! %s won. Congratulations %s!!\nThanks for playing.\n\n\n",name[0],name[0]);
      }
    }
    else
        printf("\nOops!! Its a Tie..! No Winner.\nThanks for playing.\n\n\n");
     break;
/* If the user chooses option 2, then quits the game by displaying the message */
      case 2:
      		printf("\n\n\n\t\t\tThank You For Playing The Game.");
		break;
/* If the user chooses option 3, displays the Rules of the game */
      case 3:
      		rules();
     		 goto start;
      }
return 0;
}
