/**
* @file tic_tac_toe.h
* Tic Tac Toe game application with two human players
*
*/

#ifndef __TIC_TAC_TOE_H__
#define __TIC_TAC_TOE_H__

#include <stdio.h>

/**
*  Prints the Tic Tac Toe game Board indiacting each bloack with a respective number
* @return Returns 1 in case the board is printed successfully
*/
int creating_board();

/**
*  Takes the choice and mark and marks the board with the player's mark in the box chosen by the user and returns 1 if the box is marked with the move successfully else returns 0 if the user has made an invalid choice
* @param[in] choice
* @param[in] mark
* @return Returns 1 if valid choice is made else returns 0 if an ivalid choice is made
*/
int marking_board( int choice, char mark);

/**
*  Checks each box and checks if there is any winner
* @return Returns 1 in case if there is a win horizontally, returns 2 in case of a verital win, returns 3 in case of diagonal win, returns 0 if there is a tie and returns -1 in case of no winner or tie
*/
int check_for_win();

/**
*  checks if there is a horizontal win
* @param[in] t
* @return Returns 1 if t is equal to 1 else returns 0
*/
int check_horizontal(int t);

/**
*  checks if there is a vertical win
* @param[in] t
* @return Returns 1 if t is equal to 2 else returns 0
*/
int check_vertical(int t);

/**
*  Checks if there is a diagonal win
* @param[in] t
* @return Returns 1 if t is equal to 3 else returns 0
*/
int check_diagonal(int t);

/**
*  checks if there is a tie
* @param[in] t
* @return Returns 1 if t is equal to 1 or 2 or 3 else returns 0
*/
int check_if_tie(int t);

/**
*  Prints the Tic Tac Toe game rules
* @return Returns 1 in case the rules are printed successfully
*/
int rules();

#endif
