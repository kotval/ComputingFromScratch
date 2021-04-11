int main() {
	//game board
	char board[5][3];
	// init board
        for(int i=0; i<3; i++){
		for(int j=0; j<5;j++){
			if(j%2==0) {
				board[i][j] = "-";
			}
			else {
				board[i][j] = "|";
			}
		}

	}	
	puts("Welcome to Jenny and Tam's Wicked TicTacToe\n");
	puts("Input moves by: row, col. E.g.\n");
	puts("-|-|-\n");
	puts("-|-|-\n");
	puts("-|-|-\n");
	puts("Player X: Select square:\n");
	puts("2,3");
	puts("-|-|-\n");
	puts("-|-|X\n");
	puts("-|-|-\n");
	puts("==================================\n");
	puts("Play!\n");

	//game loop
	while(1) {
		//Prompt Play X for input

		//Print State of Game Board
		//

		//Check for Win
		//
		
		//Prompt Play O for input
		//
		
		//Print State of Game Board
		//
		
		//Check for Win

	}

}
