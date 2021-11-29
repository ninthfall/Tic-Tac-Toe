#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>



char gameBoard[3][3] = { "   ", "   ", "   " };
void title() {
	printf(" ___ _  _   ___  _   _   ___  _   _\n");
	printf("  |  | |     |  |_| |     |  | | |_\n");
	printf("  |  | |_    |  | | |_    |  |_| |_\n");
}

void board() {

	printf("\n              |     |     \n");
	printf("           %c  |  %c  |  %c  \n", gameBoard[0][0], gameBoard[0][1], gameBoard[0][2]);
	printf("         _____|_____|_____\n");
	printf("              |     |     \n");
	printf("           %c  |  %c  |  %c  \n", gameBoard[1][0], gameBoard[1][1], gameBoard[1][2]);
	printf("         _____|_____|_____\n");
	printf("              |     |     \n");
	printf("           %c  |  %c  |  %c  \n", gameBoard[2][0], gameBoard[2][1], gameBoard[2][2]);
	printf("              |     |     \n");
}

void slot() {

	printf("\n\nChoose from the available slots to play: \n");
	printf(" 1 | 2 | 3 \n");
	printf("---|---|---\n");
	printf(" 4 | 5 | 6 \n");
	printf("---|---|---\n");
	printf(" 7 | 8 | 9 \n");
}

int pieces(int a) {
	char player1;
	if (a == 1) {
		player1 = 'X';
	}
	else {
		player1 = 'O';
	}
	return player1;
}

int pieces1(int a) {
	char player2;
	if (a == 1) {
		player2 = 'O';
	}
	else {
		player2 = 'X';
	}
	return player2;
}

int playX(int a) {

	if (a == 1) {
		gameBoard[0][0] = 'X';
	}
	else if (a == 2) {
		gameBoard[0][1] = 'X';
	}
	else if (a == 3) {
		gameBoard[0][2] = 'X';
	}
	else if (a == 4) {
		gameBoard[1][0] = 'X';
	}
	else if (a == 5) {
		gameBoard[1][1] = 'X';
	}
	else if (a == 6) {
		gameBoard[1][2] = 'X';
	}
	else if (a == 7) {
		gameBoard[2][0] = 'X';
	}
	else if (a == 8) {
		gameBoard[2][1] = 'X';
	}
	else if (a == 9) {
		gameBoard[2][2] = 'X';
	}

	board();

}

int playO(int a) {

	if (a == 1) {
		gameBoard[0][0] = 'O';
	}
	else if (a == 2) {
		gameBoard[0][1] = 'O';
	}
	else if (a == 3) {
		gameBoard[0][2] = 'O';
	}
	else if (a == 4) {
		gameBoard[1][0] = 'O';
	}
	else if (a == 5) {
		gameBoard[1][1] = 'O';
	}
	else if (a == 6) {
		gameBoard[1][2] = 'O';
	}
	else if (a == 7) {
		gameBoard[2][0] = 'O';
	}
	else if (a == 8) {
		gameBoard[2][1] = 'O';
	}
	else if (a == 9) {
		gameBoard[2][2] = 'O';
	}

	board();

}

int win() {
	int result;

	if ((gameBoard[0][0] == 'X' && gameBoard[0][1] == 'X' && gameBoard[0][2] == 'X')
		|| (gameBoard[1][0] == 'X' && gameBoard[1][1] == 'X' && gameBoard[1][2] == 'X')
		|| (gameBoard[2][0] == 'X' && gameBoard[2][1] == 'X' && gameBoard[2][2] == 'X')
		|| (gameBoard[0][0] == 'X' && gameBoard[1][0] == 'X' && gameBoard[2][0] == 'X')
		|| (gameBoard[0][1] == 'X' && gameBoard[1][1] == 'X' && gameBoard[2][1] == 'X')
		|| (gameBoard[0][2] == 'X' && gameBoard[1][2] == 'X' && gameBoard[2][2] == 'X')
		|| (gameBoard[0][0] == 'X' && gameBoard[1][1] == 'X' && gameBoard[2][2] == 'X')
		|| (gameBoard[0][2] == 'X' && gameBoard[1][1] == 'X' && gameBoard[2][0] == 'X')) {
		result = 1;
		return result;
	}
	else if ((gameBoard[0][0] == 'O' && gameBoard[0][1] == 'O' && gameBoard[0][2] == 'O')
		|| (gameBoard[1][0] == 'O' && gameBoard[1][1] == 'O' && gameBoard[1][2] == 'O')
		|| (gameBoard[2][0] == 'O' && gameBoard[2][1] == 'O' && gameBoard[2][2] == 'O')
		|| (gameBoard[0][0] == 'O' && gameBoard[1][0] == 'O' && gameBoard[2][0] == 'O')
		|| (gameBoard[0][1] == 'O' && gameBoard[1][1] == 'O' && gameBoard[2][1] == 'O')
		|| (gameBoard[0][2] == 'O' && gameBoard[1][2] == 'O' && gameBoard[2][2] == 'O')
		|| (gameBoard[0][0] == 'O' && gameBoard[1][1] == 'O' && gameBoard[2][2] == 'O')
		|| (gameBoard[0][2] == 'O' && gameBoard[1][1] == 'O' && gameBoard[2][0] == 'O')) {
		result = 2;
		return result;
	}
	else if ((gameBoard[0][0] == 'X' || gameBoard[0][0] == 'O') && (gameBoard[0][1] == 'X' || gameBoard[0][1] == 'O') &&
		(gameBoard[0][2] == 'X' || gameBoard[0][2] == 'O') && (gameBoard[1][0] == 'X' || gameBoard[1][0] == 'O') &&
		(gameBoard[1][1] == 'X' || gameBoard[1][1] == 'O') && (gameBoard[1][2] == 'X' || gameBoard[1][2] == 'O') &&
		(gameBoard[2][0] == 'X' || gameBoard[2][0] == 'O') && (gameBoard[2][1] == 'X' || gameBoard[2][1] == 'O') &&
		(gameBoard[2][2] == 'X' || gameBoard[2][2] == 'O')) {
		result = -1;
		return result;
	}

}

int autoPlayX() {
	int result;
	int emptySpace = 0;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (gameBoard[i][j] == ' ') {
				emptySpace++;
			}
		}
	}

	//turn 1
	if (emptySpace == 8) {
		if (gameBoard[1][1] == ' ') {
			result = 5;
			return result;
		}
		else if (gameBoard[1][1] != ' ') {
			result = 1;
			return result;
		}
	}

	//turn 2	
	if (emptySpace == 6) {
		//if spot 5 is X
		if (gameBoard[1][1] == 'X') {
			if ((gameBoard[0][0] == 'O' && gameBoard[0][2] == 'O') || (gameBoard[0][0] == 'O' && gameBoard[2][2] == 'O') || (gameBoard[2][0] == 'O' && gameBoard[0][2] == 'O')) {
				result = 2;
				return result;
			}
			else if (gameBoard[0][0] == 'O' && gameBoard[2][0] == 'O') {
				result = 4;
				return result;
			}
			else if (gameBoard[0][2] == 'O' && gameBoard[2][2] == 'O') {
				result = 6;
				return result;
			}
			else if (gameBoard[2][0] == 'O' && gameBoard[2][2] == 'O') {
				result = 8;
				return result;
			}
			else if ((gameBoard[0][1] == 'O' && gameBoard[0][2] == 'O') || (gameBoard[1][0] == 'O' && gameBoard[2][0] == 'O') || (gameBoard[0][1] == 'O' && gameBoard[2][1] == 'O') || (gameBoard[1][0] == 'O' && gameBoard[1][2] == 'O') || (gameBoard[1][0] == 'O' && gameBoard[0][1] == 'O')) {
				result = 1;
				return result;
			}
			else if ((gameBoard[0][0] == 'O' && gameBoard[0][1] == 'O') || (gameBoard[1][2] == 'O' && gameBoard[2][2] == 'O') || (gameBoard[0][1] == 'O' && gameBoard[1][2] == 'O')) {
				result = 3;
				return result;
			}
			else if ((gameBoard[0][0] == 'O' && gameBoard[1][0] == 'O') || (gameBoard[2][1] == 'O' && gameBoard[2][2] == 'O') || (gameBoard[1][0] == 'O' && gameBoard[2][1] == 'O')) {
				result = 7;
				return result;
			}
			else if ((gameBoard[2][0] == 'O' && gameBoard[2][1] == 'O') || (gameBoard[1][2] == 'O' && gameBoard[0][2] == 'O') || (gameBoard[1][2] == 'O' && gameBoard[2][1] == 'O')) {
				result = 9;
				return result;
			}
		}
		//if spot 5 is O
		if (gameBoard[1][1] == 'O') {
			if (gameBoard[0][2] == 'O') {
				result = 7;
				return result;
			}
			else if (gameBoard[0][1] == 'O') {
				result = 8;
				return result;
			}
			else if (gameBoard[1][2] == 'O') {
				result = 4;
				return result;
			}
			else if (gameBoard[2][1] == 'O') {
				result = 2;
				return result;
			}
			else if (gameBoard[2][0] == 'O') {
				result = 3;
				return result;
			}
			else if (gameBoard[1][0] == 'O') {
				result = 6;
				return result;
			}
			else if (gameBoard[2][2] == 'O') {
				result = 3;
				return result;
			}
		}
	}

	//turn 3
	if (emptySpace == 4) {
		if (gameBoard[1][1] == 'X') {
			if (gameBoard[0][0] == 'X') {
				if (gameBoard[2][2] == ' ') {
					result = 9;
					return result;
				}
				else if (gameBoard[0][1] == 'O' && gameBoard[0][2] == 'O') {
					result = 6;
					return result;
				}
				else if (gameBoard[1][0] == 'O' && gameBoard[2][0] == 'O') {
					result = 8;
					return result;
				}
				else if (gameBoard[2][1] == 'O' && gameBoard[2][2] == 'O') {
					result = 7;
					return result;
				}
				else if ((gameBoard[1][2] == 'O' && gameBoard[2][2] == 'O') || (gameBoard[1][0] == 'O' && gameBoard[0][1] == 'O')) {
					result = 3;
					return result;
				}
			}
			if (gameBoard[0][2] == 'X') {
				if (gameBoard[2][0] == ' ') {
					result = 7;
					return result;
				}
				else if (gameBoard[0][0] == 'O' && gameBoard[0][1] == 'O') {
					result = 4;
					return result;
				}
				else if (gameBoard[1][2] == 'O' && gameBoard[2][2] == 'O') {
					result = 8;
					return result;
				}
				else if (gameBoard[0][1] == 'O' && gameBoard[1][2] == 'O') {
					result = 1;
					return result;
				}
			}
			if (gameBoard[2][0] == 'X') {
				if (gameBoard[0][2] == ' ') {
					result = 3;
					return result;
				}
				else if (gameBoard[0][0] == 'O' && gameBoard[1][0] == 'O') {
					result = 2;
					return result;
				}
				else if (gameBoard[2][1] == 'O' && gameBoard[2][2] == 'O') {
					result = 6;
					return result;
				}
				else if (gameBoard[1][0] == 'O' && gameBoard[2][1] == 'O') {
					result = 1;
					return result;
				}
			}
			if (gameBoard[2][2] == 'X') {
				if (gameBoard[0][0] == ' ') {
					result = 1;
					return result;
				}
				else if (gameBoard[0][2] == 'O' && gameBoard[1][2] == 'O') {
					result = 2;
					return result;
				}
				else if (gameBoard[2][0] == 'O' && gameBoard[2][1] == 'O') {
					result = 4;
					return result;
				}
				else if (gameBoard[1][2] == 'O' && gameBoard[2][1] == 'O') {
					result = 3;
					return result;
				}
			}
			if (gameBoard[0][1] == 'X') {
				if (gameBoard[0][0] == ' ') {
					result = 8;
					return result;
				}
				else if (gameBoard[0][0] == 'O' && gameBoard[0][2] == 'O') {
					result = 4;
					return result;
				}
				else if (gameBoard[0][0] == 'O' && gameBoard[2][2] == 'O') {
					result = 7;
					return result;
				}
				else if (gameBoard[0][2] == 'O' && gameBoard[2][0] == 'O') {
					result = 9;
					return result;
				}
			}
			if (gameBoard[1][0] == 'X') {
				if (gameBoard[1][2] == ' ') {
					result = 6;
					return result;
				}
				else if (gameBoard[0][0] == 'O' && gameBoard[2][0] == 'O') {
					result = 2;
					return result;
				}
			}
			if (gameBoard[2][1] == 'X') {
				if (gameBoard[0][1] == ' ') {
					result = 2;
					return result;
				}
				else if (gameBoard[2][0] == 'O' && gameBoard[2][2] == 'O') {
					result = 4;
					return result;
				}
			}
			if (gameBoard[1][2] == 'X') {
				if (gameBoard[1][0] == ' ') {
					result = 4;
					return result;
				}
				else if (gameBoard[0][2] == 'O' && gameBoard[2][2] == 'O') {
					result = 2;
					return result;
				}
			}
		}

		if (gameBoard[1][1] == 'O') {
			if (gameBoard[2][0] == 'X') {
				if (gameBoard[1][0] == ' ') {
					result = 4;
					return result;
				}
				else {
					result = 6;
					return result;
				}
			}
			if (gameBoard[1][0] == 'X') {
				if (gameBoard[2][0] == ' ') {
					result = 7;
					return result;
				}
				else {
					result = 3;
					return result;
				}
			}
			if (gameBoard[0][1] == 'X') {
				if (gameBoard[0][2] == ' ') {
					result = 3;
					return result;
				}
				else {
					result = 7;
					return result;
				}
			}
			if (gameBoard[0][2] == 'X') {
				if (gameBoard[0][1] == ' ') {
					result = 2;
					return result;
				}
				else {
					result = 8;
					return result;
				}
			}
			if (gameBoard[2][1] == 'X') {
				if (gameBoard[0][2] == 'O') {
					result = 7;
					return result;
				}
				else if (gameBoard[1][0] == 'O') {
					result = 6;
					return result;
				}
				else if (gameBoard[2][0] == 'O') {
					result = 3;
					return result;
				}
				else if (gameBoard[1][2] == 'O' || gameBoard[2][2] == 'O') {
					result = 4;
					return result;
				}
			}
			if (gameBoard[1][2] == 'X') {
				if (gameBoard[0][1] == 'O') {
					result = 8;
					return result;
				}
				else if (gameBoard[0][2] == 'O') {
					result = 7;
					return result;
				}
				else if (gameBoard[2][0] == 'O') {
					result = 3;
					return result;
				}
				else if (gameBoard[2][1] == 'O' || gameBoard[2][2] == 'O') {
					result = 2;
					return result;
				}
			}
		}
	}

	//turn 4
	if (emptySpace == 2) {
		if (gameBoard[1][1] == 'X') {
			if (gameBoard[0][0] == 'X') {
				if (gameBoard[1][2] == 'X' && gameBoard[1][0] == ' ') {
					result = 4;
					return result;
				}
				else if (gameBoard[1][2] == 'X' && gameBoard[1][0] == 'O' && gameBoard[2][0] == ' ') {
					result = 7;
					return result;
				}
				if (gameBoard[2][1] == 'X' && gameBoard[0][1] == ' ') {
					result = 2;
					return result;
				}
				else if (gameBoard[2][1] == 'X' && gameBoard[0][1] == 'O' && gameBoard[0][2] == ' ') {
					result = 3;
					return result;
				}
				if (gameBoard[2][0] == 'X' && gameBoard[1][0] == ' ') {
					result = 4;
					return result;
				}
				else if (gameBoard[2][0] == 'X' && gameBoard[1][0] == 'O' && gameBoard[0][2] == ' ') {
					result = 3;
					return result;
				}
				if (gameBoard[0][2] == 'X' && gameBoard[0][1] == ' ') {
					result = 2;
					return result;
				}
				else if (gameBoard[0][2] == 'X' && gameBoard[0][1] == 'O' && gameBoard[2][0] == ' ') {
					result = 7;
					return result;
				}
			}
			if (gameBoard[0][2] == 'X') {
				if (gameBoard[1][0] == 'X' && gameBoard[1][2] == ' ') {
					result = 6;
					return result;
				}
				else if (gameBoard[1][0] == 'X' && gameBoard[1][2] == 'O' && gameBoard[2][1] == ' ') {
					result = 8;
					return result;
				}

				if (gameBoard[2][1] == 'X' && gameBoard[0][1] == ' ') {
					result = 2;
					return result;
				}
				else if (gameBoard[2][1] == 'X' && gameBoard[0][1] == 'O' && gameBoard[0][0] == ' ') {
					result = 1;
					return result;
				}
			}
			if (gameBoard[0][1] == 'X') {
				if (gameBoard[2][0] == 'X') {
					if (gameBoard[2][1] == ' ') {
						result = 8;
						return result;
					}
					else if (gameBoard[2][1] == 'O' && gameBoard[0][2] == ' ') {
						result = 3;
						return result;
					}
					else if (gameBoard[2][1] == 'O' && gameBoard[0][2] == 'O' && gameBoard[1][2] == ' ') {
						result = 6;
						return result;
					}
				}
				if (gameBoard[2][2] == 'X') {
					if (gameBoard[2][1] == ' ') {
						result = 8;
						return result;
					}
					else if (gameBoard[2][1] == 'O' && gameBoard[0][0] == ' ') {
						result = 1;
						return result;
					}
					else if (gameBoard[2][1] == 'O' && gameBoard[0][0] == 'O' && gameBoard[1][0] == ' ') {
						result = 4;
						return result;
					}
				}
				if (gameBoard[1][0] == 'X') {
					if (gameBoard[1][2] == ' ') {
						result = 4;
						return result;
					}
					else if (gameBoard[1][2] == 'O' && gameBoard[2][1] == ' ') {
						result = 8;
						return result;
					}
					else if (gameBoard[1][2] == 'O' && gameBoard[2][1] == 'O' && gameBoard[2][2] == ' ') {
						result = 9;
						return result;
					}
				}
				if (gameBoard[1][2] == 'X') {
					if (gameBoard[2][1] == ' ') {
						result = 8;
						return result;
					}
					else if (gameBoard[2][1] == 'O' && gameBoard[2][0]) {
						result = 7;
						return result;
					}
				}
			}
			if (gameBoard[1][0] == 'X') {
				if (gameBoard[1][2] == ' ') {
					result = 6;
					return result;
				}
				else if (gameBoard[1][2] == 'O' && gameBoard[0][2] == ' ' && (gameBoard[2][2] == 'X' || gameBoard[2][1] == 'X')) {
					result = 3;
					return result;
				}
			}
			if (gameBoard[1][2] == 'X' && gameBoard[2][0] == 'X') {
				if (gameBoard[1][0] == ' ') {
					result = 4;
					return result;
				}
				else if (gameBoard[1][0] == 'O' && gameBoard[0][0] == ' ') {
					result = 1;
					return 1;
				}
			}
			if (gameBoard[0][0] == 'X' && gameBoard[0][2] == 'X' && gameBoard[2][0] == 'O' && gameBoard[2][2] == 'O' && gameBoard[2][1] == ' ') {
				result = 8;
				return result;
			}
			else if (gameBoard[0][0] == 'X' && gameBoard[0][2] == 'X' && gameBoard[2][0] == 'O' && gameBoard[2][2] == ' ') {
				result = 9;
				return result;
			}
			if (gameBoard[0][0] == 'X' && gameBoard[0][2] == 'O' && gameBoard[2][0] == 'X' && gameBoard[2][2] == 'O' && gameBoard[1][2] == ' ') {
				result = 6;
				return result;
			}
			else if (gameBoard[0][0] == 'X' && gameBoard[0][2] == 'O' && gameBoard[2][0] == 'X' && gameBoard[2][2] == ' ') {
				result = 9;
				return result;
			}
			if (gameBoard[0][0] == 'O' && gameBoard[0][2] == 'X' && gameBoard[2][0] == 'O' && gameBoard[2][2] == 'X' && gameBoard[1][0] == ' ') {
				result = 4;
				return result;
			}
			else if (gameBoard[0][0] == 'O' && gameBoard[0][2] == 'X' && gameBoard[2][0] == ' ' && gameBoard[2][2] == 'X') {
				result = 7;
				return result;
			}
		}

		if (gameBoard[1][1] == 'O') {
			if (gameBoard[0][0] == 'X' && gameBoard[0][2] == 'X' && gameBoard[0][1] == ' ') {
				result = 2;
				return result;
			}
			else if (gameBoard[0][0] == 'X' && gameBoard[0][2] == 'X' && gameBoard[0][1] == 'O' && gameBoard[1][2] == 'X' && gameBoard[2][2] == ' ') {
				result = 9;
				return result;
			}
			else if (gameBoard[0][0] == 'X' && gameBoard[0][2] == 'X' && gameBoard[0][1] == 'O' && gameBoard[2][1] == ' ') {
				result = 8;
				return result;
			}
			if (gameBoard[0][0] == 'X' && gameBoard[0][2] == 'X' && gameBoard[0][1] == 'O') {
				if ((gameBoard[1][0] == 'O' || gameBoard[2][2] == 'O' || gameBoard[2][0] == 'O') && gameBoard[1][2] == ' ') {
					result = 6;
					return result;
				}
				else if (gameBoard[1][2] == 'O' && gameBoard[1][0] == ' ') {
					result = 4;
					return result;
				}
			}
			if (gameBoard[0][0] == 'X' && gameBoard[0][1] == 'X' && gameBoard[0][2] == ' ') {
				result = 3;
				return 3;
			}
			else if (gameBoard[0][0] == 'X' && gameBoard[0][1] == 'X' && gameBoard[0][2] == 'O' && gameBoard[2][0] == ' ') {
				result = 7;
				return 7;
			}
			if (gameBoard[0][0] == 'X' && gameBoard[1][0] == 'X' && gameBoard[2][0] == ' ') {
				result = 7;
				return result;
			}
			else if (gameBoard[0][0] == 'X' && gameBoard[1][0] == 'X' && gameBoard[2][0] == 'O' && gameBoard[0][2] == ' ') {
				result = 3;
				return result;
			}
			if (gameBoard[0][0] == 'X' && gameBoard[2][0] == 'X' && gameBoard[1][0] == ' ') {
				result = 4;
				return result;
			}
			else if (gameBoard[0][0] == 'X' && gameBoard[2][0] == 'X' && gameBoard[1][0] == 'O' && gameBoard[1][2] == ' ') {
				result = 6;
				return result;
			}
			if (gameBoard[0][0] == 'X' && gameBoard[1][2] == 'X' && gameBoard[2][1] == 'X' && gameBoard[0][2] == 'O' && gameBoard[2][0] == ' ') {
				result = 7;
				return result;
			}
			else if (gameBoard[0][0] == 'X' && gameBoard[1][2] == 'X' && gameBoard[2][1] == 'X' && (gameBoard[2][0] == 'O' || gameBoard[2][2] == 'O') && gameBoard[0][2] == ' ') {
				result = 3;
				return result;
			}
			if (gameBoard[0][0] == 'X' && gameBoard[1][2] == 'X' && gameBoard[2][0] == 'X' && gameBoard[0][1] == 'O' && gameBoard[2][1] == ' ') {
				result = 8;
				return result;
			}
			else if (gameBoard[0][0] == 'X' && gameBoard[1][2] == 'X' && gameBoard[2][0] == 'X' && (gameBoard[2][1] == 'O' || gameBoard[2][2] == 'O') && gameBoard[0][1] == ' ') {
				result = 2;
				return result;
			}
		}
	}
}

int autoPlayO() {

	int result;
	int emptySpace = 0;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (gameBoard[i][j] == ' ') {
				emptySpace++;
			}
		}
	}

	//turn 1
	if (emptySpace == 8) {
		if (gameBoard[1][1] == ' ') {
			result = 5;
			return result;
		}
		else if (gameBoard[1][1] != ' ') {
			result = 1;
			return result;
		}
	}

	//turn 2	
	if (emptySpace == 6) {
		//if spot 5 is X
		if (gameBoard[1][1] == 'O') {
			if ((gameBoard[0][0] == 'X' && gameBoard[0][2] == 'X') || (gameBoard[0][0] == 'X' && gameBoard[2][2] == 'X') || (gameBoard[2][0] == 'X' && gameBoard[0][2] == 'X')) {
				result = 2;
				return result;
			}
			else if (gameBoard[0][0] == 'X' && gameBoard[2][0] == 'X') {
				result = 4;
				return result;
			}
			else if (gameBoard[0][2] == 'X' && gameBoard[2][2] == 'X') {
				result = 6;
				return result;
			}
			else if (gameBoard[2][0] == 'X' && gameBoard[2][2] == 'X') {
				result = 8;
				return result;
			}
			else if ((gameBoard[0][1] == 'X' && gameBoard[0][2] == 'X') || (gameBoard[1][0] == 'X' && gameBoard[2][0] == 'X') || (gameBoard[0][1] == 'X' && gameBoard[2][1] == 'X') || (gameBoard[1][0] == 'X' && gameBoard[1][2] == 'X') || (gameBoard[1][0] == 'X' && gameBoard[0][1] == 'X')) {
				result = 1;
				return result;
			}
			else if ((gameBoard[0][0] == 'X' && gameBoard[0][1] == 'X') || (gameBoard[1][2] == 'X' && gameBoard[2][2] == 'X') || (gameBoard[0][1] == 'X' && gameBoard[1][2] == 'X')) {
				result = 3;
				return result;
			}
			else if ((gameBoard[0][0] == 'X' && gameBoard[1][0] == 'X') || (gameBoard[2][1] == 'X' && gameBoard[2][2] == 'X') || (gameBoard[1][0] == 'X' && gameBoard[2][1] == 'X')) {
				result = 7;
				return result;
			}
			else if ((gameBoard[2][0] == 'X' && gameBoard[2][1] == 'X') || (gameBoard[1][2] == 'X' && gameBoard[0][2] == 'X') || (gameBoard[1][2] == 'X' && gameBoard[2][1] == 'X')) {
				result = 9;
				return result;
			}
		}
		//if spot 5 is O
		if (gameBoard[1][1] == 'X') {
			if (gameBoard[0][2] == 'X') {
				result = 7;
				return result;
			}
			else if (gameBoard[0][1] == 'X') {
				result = 8;
				return result;
			}
			else if (gameBoard[1][2] == 'X') {
				result = 4;
				return result;
			}
			else if (gameBoard[2][1] == 'X') {
				result = 2;
				return result;
			}
			else if (gameBoard[2][0] == 'X') {
				result = 3;
				return result;
			}
			else if (gameBoard[1][0] == 'X') {
				result = 6;
				return result;
			}
			else if (gameBoard[2][2] == 'X') {
				result = 3;
				return result;
			}
		}
	}

	//turn 3
	if (emptySpace == 4) {
		if (gameBoard[1][1] == 'O') {
			if (gameBoard[0][0] == 'O') {
				if (gameBoard[2][2] == ' ') {
					result = 9;
					return result;
				}
				else if (gameBoard[0][1] == 'X' && gameBoard[0][2] == 'X') {
					result = 6;
					return result;
				}
				else if (gameBoard[1][0] == 'X' && gameBoard[2][0] == 'X') {
					result = 8;
					return result;
				}
				else if (gameBoard[2][1] == 'X' && gameBoard[2][2] == 'X') {
					result = 7;
					return result;
				}
				else if ((gameBoard[1][2] == 'X' && gameBoard[2][2] == 'X') || (gameBoard[1][0] == 'X' && gameBoard[0][1] == 'X')) {
					result = 3;
					return result;
				}
			}
			if (gameBoard[0][2] == 'O') {
				if (gameBoard[2][0] == ' ') {
					result = 7;
					return result;
				}
				else if (gameBoard[0][0] == 'X' && gameBoard[0][1] == 'X') {
					result = 4;
					return result;
				}
				else if (gameBoard[1][2] == 'X' && gameBoard[2][2] == 'X') {
					result = 8;
					return result;
				}
				else if (gameBoard[0][1] == 'X' && gameBoard[1][2] == 'X') {
					result = 1;
					return result;
				}
			}
			if (gameBoard[2][0] == 'O') {
				if (gameBoard[0][2] == ' ') {
					result = 3;
					return result;
				}
				else if (gameBoard[0][0] == 'X' && gameBoard[1][0] == 'X') {
					result = 2;
					return result;
				}
				else if (gameBoard[2][1] == 'X' && gameBoard[2][2] == 'X') {
					result = 6;
					return result;
				}
				else if (gameBoard[1][0] == 'X' && gameBoard[2][1] == 'X') {
					result = 1;
					return result;
				}
			}
			if (gameBoard[2][2] == 'O') {
				if (gameBoard[0][0] == ' ') {
					result = 1;
					return result;
				}
				else if (gameBoard[0][2] == 'X' && gameBoard[1][2] == 'X') {
					result = 2;
					return result;
				}
				else if (gameBoard[2][0] == 'X' && gameBoard[2][1] == 'X') {
					result = 4;
					return result;
				}
				else if (gameBoard[1][2] == 'X' && gameBoard[2][1] == 'X') {
					result = 3;
					return result;
				}
			}
			if (gameBoard[0][1] == 'O') {
				if (gameBoard[0][0] == ' ') {
					result = 8;
					return result;
				}
				else if (gameBoard[0][0] == 'X' && gameBoard[0][2] == 'X') {
					result = 4;
					return result;
				}
				else if (gameBoard[0][0] == 'X' && gameBoard[2][2] == 'X') {
					result = 7;
					return result;
				}
				else if (gameBoard[0][2] == 'X' && gameBoard[2][0] == 'X') {
					result = 9;
					return result;
				}
			}
			if (gameBoard[1][0] == 'O') {
				if (gameBoard[1][2] == ' ') {
					result = 6;
					return result;
				}
				else if (gameBoard[0][0] == 'X' && gameBoard[2][0] == 'X') {
					result = 2;
					return result;
				}
			}
			if (gameBoard[2][1] == 'O') {
				if (gameBoard[0][1] == ' ') {
					result = 2;
					return result;
				}
				else if (gameBoard[2][0] == 'X' && gameBoard[2][2] == 'X') {
					result = 4;
					return result;
				}
			}
			if (gameBoard[1][2] == 'O') {
				if (gameBoard[1][0] == ' ') {
					result = 4;
					return result;
				}
				else if (gameBoard[0][2] == 'X' && gameBoard[2][2] == 'X') {
					result = 2;
					return result;
				}
			}
		}

		if (gameBoard[1][1] == 'X') {
			if (gameBoard[2][0] == 'O') {
				if (gameBoard[1][0] == ' ') {
					result = 4;
					return result;
				}
				else {
					result = 6;
					return result;
				}
			}
			if (gameBoard[1][0] == 'O') {
				if (gameBoard[2][0] == ' ') {
					result = 7;
					return result;
				}
				else {
					result = 3;
					return result;
				}
			}
			if (gameBoard[0][1] == 'O') {
				if (gameBoard[0][2] == ' ') {
					result = 3;
					return result;
				}
				else {
					result = 7;
					return result;
				}
			}
			if (gameBoard[0][2] == 'O') {
				if (gameBoard[0][1] == ' ') {
					result = 2;
					return result;
				}
				else {
					result = 8;
					return result;
				}
			}
			if (gameBoard[2][1] == 'O') {
				if (gameBoard[0][2] == 'X') {
					result = 7;
					return result;
				}
				else if (gameBoard[1][0] == 'X') {
					result = 6;
					return result;
				}
				else if (gameBoard[2][0] == 'X') {
					result = 3;
					return result;
				}
				else if (gameBoard[1][2] == 'X' || gameBoard[2][2] == 'X') {
					result = 4;
					return result;
				}
			}
			if (gameBoard[1][2] == 'O') {
				if (gameBoard[0][1] == 'X') {
					result = 8;
					return result;
				}
				else if (gameBoard[0][2] == 'X') {
					result = 7;
					return result;
				}
				else if (gameBoard[2][0] == 'X') {
					result = 3;
					return result;
				}
				else if (gameBoard[2][1] == 'X' || gameBoard[2][2] == 'X') {
					result = 2;
					return result;
				}
			}
		}
	}

	//turn 4
	if (emptySpace == 2) {
		if (gameBoard[1][1] == 'O') {
			if (gameBoard[0][0] == 'O') {
				if (gameBoard[1][2] == 'O' && gameBoard[1][0] == ' ') {
					result = 4;
					return result;
				}
				else if (gameBoard[1][2] == 'O' && gameBoard[1][0] == 'X' && gameBoard[2][0] == ' ') {
					result = 7;
					return result;
				}
				if (gameBoard[2][1] == 'O' && gameBoard[0][1] == ' ') {
					result = 2;
					return result;
				}
				else if (gameBoard[2][1] == 'O' && gameBoard[0][1] == 'X' && gameBoard[0][2] == ' ') {
					result = 3;
					return result;
				}
				if (gameBoard[2][0] == 'O' && gameBoard[1][0] == ' ') {
					result = 4;
					return result;
				}
				else if (gameBoard[2][0] == 'O' && gameBoard[1][0] == 'X' && gameBoard[0][2] == ' ') {
					result = 3;
					return result;
				}
				if (gameBoard[0][2] == 'O' && gameBoard[0][1] == ' ') {
					result = 2;
					return result;
				}
				else if (gameBoard[0][2] == 'O' && gameBoard[0][1] == 'X' && gameBoard[2][0] == ' ') {
					result = 7;
					return result;
				}
			}
			if (gameBoard[0][2] == 'O') {
				if (gameBoard[1][0] == 'O' && gameBoard[1][2] == ' ') {
					result = 6;
					return result;
				}
				else if (gameBoard[1][0] == 'O' && gameBoard[1][2] == 'X' && gameBoard[2][1] == ' ') {
					result = 8;
					return result;
				}

				if (gameBoard[2][1] == 'O' && gameBoard[0][1] == ' ') {
					result = 2;
					return result;
				}
				else if (gameBoard[2][1] == 'O' && gameBoard[0][1] == 'X' && gameBoard[0][0] == ' ') {
					result = 1;
					return result;
				}
			}
			if (gameBoard[0][1] == 'O') {
				if (gameBoard[2][0] == 'O') {
					if (gameBoard[2][1] == ' ') {
						result = 8;
						return result;
					}
					else if (gameBoard[2][1] == 'X' && gameBoard[0][2] == ' ') {
						result = 3;
						return result;
					}
					else if (gameBoard[2][1] == 'X' && gameBoard[0][2] == 'X' && gameBoard[1][2] == ' ') {
						result = 6;
						return result;
					}
				}
				if (gameBoard[2][2] == 'O') {
					if (gameBoard[2][1] == ' ') {
						result = 8;
						return result;
					}
					else if (gameBoard[2][1] == 'X' && gameBoard[0][0] == ' ') {
						result = 1;
						return result;
					}
					else if (gameBoard[2][1] == 'X' && gameBoard[0][0] == 'X' && gameBoard[1][0] == ' ') {
						result = 4;
						return result;
					}
				}
				if (gameBoard[1][0] == 'O') {
					if (gameBoard[1][2] == ' ') {
						result = 4;
						return result;
					}
					else if (gameBoard[1][2] == 'X' && gameBoard[2][1] == ' ') {
						result = 8;
						return result;
					}
					else if (gameBoard[1][2] == 'X' && gameBoard[2][1] == 'X' && gameBoard[2][2] == ' ') {
						result = 9;
						return result;
					}
				}
				if (gameBoard[1][2] == 'O') {
					if (gameBoard[2][1] == ' ') {
						result = 8;
						return result;
					}
					else if (gameBoard[2][1] == 'X' && gameBoard[2][0]) {
						result = 7;
						return result;
					}
				}
			}
			if (gameBoard[1][0] == 'O') {
				if (gameBoard[1][2] == ' ') {
					result = 6;
					return result;
				}
				else if (gameBoard[1][2] == 'X' && gameBoard[0][2] == ' ' && (gameBoard[2][2] == 'O' || gameBoard[2][1] == 'O')) {
					result = 3;
					return result;
				}
			}
			if (gameBoard[1][2] == 'O' && gameBoard[2][0] == 'O') {
				if (gameBoard[1][0] == ' ') {
					result = 4;
					return result;
				}
				else if (gameBoard[1][0] == 'X' && gameBoard[0][0] == ' ') {
					result = 1;
					return 1;
				}
			}
			if (gameBoard[0][0] == 'O' && gameBoard[0][2] == 'O' && gameBoard[2][0] == 'X' && gameBoard[2][2] == 'X' && gameBoard[2][1] == ' ') {
				result = 8;
				return result;
			}
			else if (gameBoard[0][0] == 'O' && gameBoard[0][2] == 'O' && gameBoard[2][0] == 'X' && gameBoard[2][2] == ' ') {
				result = 9;
				return result;
			}
			if (gameBoard[0][0] == 'O' && gameBoard[0][2] == 'X' && gameBoard[2][0] == 'O' && gameBoard[2][2] == 'X' && gameBoard[1][2] == ' ') {
				result = 6;
				return result;
			}
			else if (gameBoard[0][0] == 'O' && gameBoard[0][2] == 'X' && gameBoard[2][0] == 'O' && gameBoard[2][2] == ' ') {
				result = 9;
				return result;
			}
			if (gameBoard[0][0] == 'X' && gameBoard[0][2] == 'O' && gameBoard[2][0] == 'X' && gameBoard[2][2] == 'O' && gameBoard[1][0] == ' ') {
				result = 4;
				return result;
			}
			else if (gameBoard[0][0] == 'X' && gameBoard[0][2] == 'O' && gameBoard[2][0] == ' ' && gameBoard[2][2] == 'O') {
				result = 7;
				return result;
			}
		}

		if (gameBoard[1][1] == 'X') {
			if (gameBoard[0][0] == 'O' && gameBoard[0][2] == 'O' && gameBoard[0][1] == ' ') {
				result = 2;
				return result;
			}
			else if (gameBoard[0][0] == 'O' && gameBoard[0][2] == 'O' && gameBoard[0][1] == 'X' && gameBoard[1][2] == 'O' && gameBoard[2][2] == ' ') {
				result = 9;
				return result;
			}
			else if (gameBoard[0][0] == 'O' && gameBoard[0][2] == 'O' && gameBoard[0][1] == 'X' && gameBoard[2][1] == ' ') {
				result = 8;
				return result;
			}
			if (gameBoard[0][0] == 'O' && gameBoard[0][2] == 'O' && gameBoard[0][1] == 'X') {
				if ((gameBoard[1][0] == 'X' || gameBoard[2][2] == 'X' || gameBoard[2][0] == 'X') && gameBoard[1][2] == ' ') {
					result = 6;
					return result;
				}
				else if (gameBoard[1][2] == 'X' && gameBoard[1][0] == ' ') {
					result = 4;
					return result;
				}
			}
			if (gameBoard[0][0] == 'O' && gameBoard[0][1] == 'O' && gameBoard[0][2] == ' ') {
				result = 3;
				return 3;
			}
			else if (gameBoard[0][0] == 'O' && gameBoard[0][1] == 'O' && gameBoard[0][2] == 'X' && gameBoard[2][0] == ' ') {
				result = 7;
				return 7;
			}
			if (gameBoard[0][0] == 'O' && gameBoard[1][0] == 'O' && gameBoard[2][0] == ' ') {
				result = 7;
				return result;
			}
			else if (gameBoard[0][0] == 'O' && gameBoard[1][0] == 'O' && gameBoard[2][0] == 'X' && gameBoard[0][2] == ' ') {
				result = 3;
				return result;
			}
			if (gameBoard[0][0] == 'O' && gameBoard[2][0] == 'O' && gameBoard[1][0] == ' ') {
				result = 4;
				return result;
			}
			else if (gameBoard[0][0] == 'O' && gameBoard[2][0] == 'O' && gameBoard[1][0] == 'X' && gameBoard[1][2] == ' ') {
				result = 6;
				return result;
			}
			if (gameBoard[0][0] == 'O' && gameBoard[1][2] == 'O' && gameBoard[2][1] == 'O' && gameBoard[0][2] == 'X' && gameBoard[2][0] == ' ') {
				result = 7;
				return result;
			}
			else if (gameBoard[0][0] == 'O' && gameBoard[1][2] == 'O' && gameBoard[2][1] == 'O' && (gameBoard[2][0] == 'X' || gameBoard[2][2] == 'X') && gameBoard[0][2] == ' ') {
				result = 3;
				return result;
			}
			if (gameBoard[0][0] == 'O' && gameBoard[1][2] == 'O' && gameBoard[2][0] == 'O' && gameBoard[0][1] == 'X' && gameBoard[2][1] == ' ') {
				result = 8;
				return result;
			}
			else if (gameBoard[0][0] == 'O' && gameBoard[1][2] == 'O' && gameBoard[2][0] == 'O' && (gameBoard[2][1] == 'X' || gameBoard[2][2] == 'X') && gameBoard[0][1] == ' ') {
				result = 2;
				return result;
			}
		}
	}


}


main() {

	title();
	board();

	int piece;

	printf("Player 1 please choose your piece.\n");
	printf("Enter 1 for X and any other number for O\n");
	scanf("%i", &piece);

	pieces(piece);
	printf("Player 1 is: %c and Player 2 is: %c\n", pieces(piece), pieces1(piece));
	slot();
	int i = 1;
	int spot = 0;
	int turn = 0;

	while (1) {
		int validMove = 0;
		if (i % 2 == 0) {
			turn = 2;
			printf("Computer play:\n");
		}
		else {
			turn = 1;
			printf("\nPlayer 1 please make your move.\n");
			printf("Slot:   ");
			scanf("%i", &spot);
		}

		if (turn == 1) {
			while (validMove == 0) {
				if (spot < 1 || spot > 9) {
					printf("Invalid move, choose another slot!\n");
					printf("Slot:   ");
					scanf("%i", &spot);
				}
				else if (spot == 1 && gameBoard[0][0] != ' ') {
					printf("Invalid move, choose another slot!\n");
					printf("Slot:   ");
					scanf("%i", &spot);
				}
				else if (spot == 2 && gameBoard[0][1] != ' ') {
					printf("Invalid move, choose another slot!\n");
					printf("Slot:   ");
					scanf("%i", &spot);
				}
				else  if (spot == 3 && gameBoard[0][2] != ' ') {
					printf("Invalid move, choose another slot!\n");
					printf("Slot:   ");
					scanf("%i", &spot);
				}
				else if (spot == 4 && gameBoard[1][0] != ' ') {
					printf("Invalid move, choose another slot!\n");
					printf("Slot:   ");
					scanf("%i", &spot);
				}
				else if (spot == 5 && gameBoard[1][1] != ' ') {
					printf("Invalid move, choose another slot!\n");
					printf("Slot:   ");
					scanf("%i", &spot);
				}
				else if (spot == 6 && gameBoard[1][2] != ' ') {
					printf("Invalid move, choose another slot!\n");
					printf("Slot:   ");
					scanf("%i", &spot);
				}
				else if (spot == 7 && gameBoard[2][0] != ' ') {
					printf("Invalid move, choose another slot!\n");
					printf("Slot:   ");
					scanf("%i", &spot);
				}
				else if (spot == 8 && gameBoard[2][1] != ' ') {
					printf("Invalid move, choose another slot!\n");
					printf("Slot:   ");
					scanf("%i", &spot);
				}
				else if (spot == 9 && gameBoard[2][2] != ' ') {
					printf("Invalid move, choose another slot!\n");
					printf("Slot:   ");
					scanf("%i", &spot);
				}
				else {
					validMove = 1;
				}


			}
		}


		if (turn == 1 && piece == 1) {
			playX(spot);

		}
		else if (turn == 1 && piece != 1) {
			playO(spot);

		}
		else if (turn == 2 && piece == 1) {
			playO(autoPlayO());

		}
		else if (turn == 2 && piece != 1) {
			playX(autoPlayX());
		}

		if (win() == 1) {
			printf("X won\n");
			break;
		}
		else if (win() == 2) {
			printf("O won\n");
			break;
		}
		else if (win() == -1) {
			printf("No Winner\n");
			break;
		}

		i++;
	}

	system("pause");
}