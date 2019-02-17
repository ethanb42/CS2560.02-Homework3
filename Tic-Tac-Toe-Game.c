/*
 * Tic-Tac-Toe-Game.c
 *
 *  Created on: Feb 15, 2019
 *      Author: Ethan Balderas
 */
#include <stdio.h>


//define variables
int row;      //row for the board
int column;   //column for the board


//gameOver codes
// 0 = not over
// 1= tie
// 2= player 1 wins
// 3= player 2 wins
int gameOver=0;

int player =1; //the player number who is taking their turn
int turn=0; //used to help determine a tie or win

char board [3][3];  //2D char array to represent the board


int game(){

	//Initialize the board to blank
	for (int i=0; i<3;i++){
		for (int j =0; j<3; j++){
			board[i][j] ='*';
		}
	}
	//display empty board

	printf("Welcome to Tic-Tac-Toe\n");

	do{
		printBoard();
		userTurn();
		printf("Turn: %d", turn);
		checkWin();
	}while (gameOver ==0);
	printBoard();

	if(gameOver==1){
		printf("The game tied.");
		exit(1);
	}
	else if(gameOver == 2){
		printf("Player 1 won!");
		exit(1);

	}
	else if (gameOver ==3){
		printf("Player 2 won!");
		exit(1);
	}

	return 0;
}


int userTurn(){
	do{
		printf("Player %d please enter a row [0-2]  : ", player);
		fflush(stdout); //ECLIPSE BUG
		scanf("%d", &row);

	}while(row>2 || row <0);


	do{
		printf("Player %d please enter a column [0-2]  : ", player);
		fflush(stdout); //ECLIPSE BUG
		scanf("%d", &column);

	}while(column>2 || column <0);

	//We have the row and column now we need to check it is a valid move
	if (board[column][row] != '*'){
		printf("This position is already claimed, please try again!\n\n");
		return 0;

	}
	//now we know the spot is available
	if(player ==1){
		board[column][row] ='X';
	}
	else{
		board[column][row] ='O';
	}
	//the user has completed their valid turn so we need to update relevant data
	//swaps the players turn
	if (player == 1){
		player =2;
	}
	else{
		player =1;
	}

	turn++;
	return 0;
	//the turn is complete, now we need to check win conditions

}



int checkWin(){
	//we need to check all the cases for a win after each turn.
	if (turn ==9){
		gameOver = 1;
		return 0;
	}

	//lets check all the rows/columns for matches
	for (int x=0; x<3;x++){

		if ((board[x][0] == board[x][1]) && board[x][1]==board[0][2] ){
			if(board[x][0] == 'X'){
				gameOver =2;
				return 0;
			}
			if(board[x][0] == 'O'){
				gameOver=3;
				return 0;
			}

			}

		if (board[0][x] == board[1][x] && board[0][x]==board[2][x]){
			if(board[0][x] == 'X'){
				gameOver =2;
				return 0;
			}
			if(board[0][x] == 'O'){
				gameOver=3;
				return 0;
				}
			}
					}
	//last thing is to check the diagonals
	if (board[0][0] == board[1][1] &&  board[1][1]==board [2][2]){
		if(board[1][1] == 'X')
		{
			gameOver=2;
		}
		else if(board[1][1] == 'O'){
			gameOver =3;
		}

	}
	if(board[2][0] == board[1][1] && board[1][1]==board[0][2]){
		if(board[1][1] == 'X')
		{
			gameOver=2;
			return 0;
		}
		else if(board[1][1] == 'O'){
			gameOver =3;
		}

	}
	return 0;

	}



int printBoard(){

	for (int i=0; i<3;i++){
			printf("\n");
			for (int j =0; j<3; j++){
				printf("%c ", board[i][j]);
			}
		}
	printf("\n");
	return 0;
}



