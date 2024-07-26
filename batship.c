//Author: Elle Van Wyngarden
//Date: 07/22/24
//Final Project

#include <stdio.h>
#include <stdbool.h>
#define DIM 10
#define EASY_FILE "easy.txt"

void initializeBoard(char board[][DIM]);
void displayBoard(char board[][DIM]);
void getMove(int* colPtr, int* rowPtr);

void displayBoard(char board[][DIM]){
	for(int row = 0; row < DIM; row++){
		for(int col = 0; col < DIM; col++){
			printf("%c", board[row][col]);
		}
	}
}

void initializeBoard(char board[][DIM]){
	for(int row = 0; row < DIM; row++){
		for(int col = 0; col < DIM; col++){
			board[row][col] = ' ';
		}
	}
}

int main(){

char colInput, board[DIM][DIM], ships[DIM][DIM];
int rowInput;
bool hit = false, gameOver = false;

	FILE* fp;
	fp = fopen(EASY_FILE, "r");

	if(fp == NULL){
			printf("Can't open file.\n");
			return 0;
		}
		
	initializeBoard(board);

	printf("\n");
	printf("*****LET'S PLAY BATSHIP*****\n");
	printf("\n");
	
//begin loop
	printf("   A B C D E F G H I J\n");


	displayBoard(board);
		          
	printf("        FIRE AWAY!\n");
	printf("(enter a spot in the grid like A1) ");
	scanf(" %c%d", &colInput, &rowInput);
	
	
	return 0;
}

/*
printf("\n");
printf("Invalid column letter. Try again!\n");


printf("CONGRATULATIONS!!!!\n");
printf("It took %d turns for you to hit 31 spots and destroy all the ships\n", );
printf("Your score is %d!\n", );
printf("Play again? (Y/N)");
*/
