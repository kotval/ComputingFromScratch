#include <stdio.h>
int main() {
	//game board
	char board[5][3];
	// init board
        for(int i=0; i<3; i++){
		for(int j=0; j<5;j++){
			if(j%2==0) {
				board[i][j] = '-';
			}
			else {
				board[i][j] = '|';
		}
		}

	}	
	printf("Welcome to Jenny and Tam's Wicked TicTacToe\n");
	printf("Input moves by: row, col. E.g.\n");
	printf("-|-|-\n");
	printf("-|-|-\n");
	printf("-|-|-\n");
	printf("Player X: Select square:\n");
	printf("2,3");
	printf("-|-|-\n");
	printf("-|-|X\n");
	printf("-|-|-\n");
	printf("==================================\n");
	printf("Play!\n");

	//game loop
	while(1) {
		//Prompt Play X for input

		printf("Player X: Select square:\n");
		char  *input[3];
	        scanf("%c%c%c",input);
		
		char  userrow=*input[0]-1;
		char  usercol=*input[2];
		if(usercol==1){
			usercol=0;
		}
		if(usercol==3){
			usercol=4;
		}
		board[userrow][usercol]='X';
		//Print State of Game Board
		printf(board[0]);
		printf(board[1]);
		printf(board[2]);

	

		//Check for Win
		//
		
		//Prompt Play O for input
		//
		
		//Print State of Game Board
		//
		
		//Check for Win

	}

}
