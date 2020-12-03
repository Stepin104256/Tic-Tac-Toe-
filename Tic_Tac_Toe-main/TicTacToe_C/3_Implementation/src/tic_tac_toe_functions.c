#include "tic_tac_toe.h"
char box[10] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9' };
int rules()
{
    printf("\n\n\t\t\t\tTic-Tac-Toe\n\n");
    printf("\t\t\tWelcome to the most played fun game\n");
    printf("\nRules:-\n");
    printf("-----\n");
    printf("\n1:Each player will be entering the number to put respective X or O in the desired position");
    printf("\n2:Player who gets a combination of 3 same characters either diagonal or horizontally or vertically will be declared as the winner");
    printf("\n\nEnjoy the game! Be a Winner!\n\n");
    printf("For more clarifications please refer the link below \n ");
    printf("http://www.wikihow.com/Play-Tic-Tac-Toe\n\n");
    return 0;
}

int creating_board()
{
    printf("\n\n\tTic Tac Toe\n\n");

    printf("Player 1(X)  -  Player 2(O)\n\n\n");


    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c \n", box[1], box[2], box[3]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", box[4], box[5], box[6]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", box[7], box[8], box[9]);

    printf("     |     |     \n\n");
    return 0;
}
int check_for_win()
{
    if (box[1] == box[2] && box[2] == box[3])
        return 1;

    else if (box[4] == box[5] && box[5] == box[6])
        return 1;

    else if (box[7] == box[8] && box[8] == box[9])
        return 1;

    else if (box[1] == box[4] && box[4] == box[7])
        return 2;

    else if (box[2] == box[5] && box[5] == box[8])
        return 2;

    else if (box[3] == box[6] && box[6] == box[9])
        return 2;

    else if (box[1] == box[5] && box[5] == box[9])
        return 3;

    else if (box[3] == box[5] && box[5] == box[7])
        return 3;
    else if (box[1] != '1' && box[2] != '2' && box[3] != '3' &&box[4] != '4' && box[5] != '5'
         && box[6] != '6' && box[7]!= '7' && box[8] != '8' && box[9] != '9')                 // no match

        return 0;
    else
        return -1;
}

int check_horizontal(int t)
{
    if(t == 1)
        return 1;
    else
        return 0;
}

int check_vertical(int t)
{
    if(t == 2)
        return 1;
    else
        return 0;
}

int check_diagonal(int t)
{
    if(t == 3)
        return 1;
    else
        return 0;
}

int check_if_tie(int t)
{
    if (t == 1 || t == 2 || t == 3)
        return 1;
    else
        return 0;
}

int marking_board( int choice, char mark)

{
          if (choice == 1 && box[1] == '1')
            {
              box[1] = mark;
              return 1;
            }

        else if (choice == 2 && box[2] == '2')
            {
              box[2] = mark;
              return 1;
            }


        else if (choice == 3 && box[3] == '3')
            {
              box[3] = mark;
              return 1;
            }


        else if (choice == 4 && box[4] == '4')
            {
              box[4] = mark;
              return 1;
            }

        else if (choice == 5 && box[5] == '5')
            {
              box[5] = mark;
              return 1;
            }

        else if (choice == 6 && box[6] == '6')
            {
              box[6] = mark;
              return 1;
            }

        else if (choice == 7 && box[7] == '7')
            {
              box[7] = mark;
              return 1;
            }

        else if (choice == 8 && box[8] == '8')
            {
              box[8] = mark;
              return 1;
            }

        else if  (choice == 9 && box[9] == '9')
            {
              box[9] = mark;
              return 1;
            }

        else
        {
          printf("Invalid move ");
          return 0;
        }

 }

