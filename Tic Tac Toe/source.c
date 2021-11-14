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

	//turn 1
	if (gameBoard[1][1] == ' ') {
		result = 5;
		return result;
	}
	else if (gameBoard[1][1] != ' ' && gameBoard[0][0] == ' ' && gameBoard[0][1] == ' ' && gameBoard[0][2] == ' ' && gameBoard[1][0] == ' ' && gameBoard[1][2] == ' ' && gameBoard[2][0] == ' ' && gameBoard[2][1] == ' ' && gameBoard[2][2] == ' ') {
		result = 1;
		return result;
	}

	//turn 2
	if (gameBoard[0][0] == 'X' && gameBoard[0][1] == 'O' && gameBoard[0][2] == ' ' && gameBoard[1][0] == ' ' && gameBoard[1][1] == 'O' && gameBoard[1][2] == ' ' && gameBoard[2][0] == ' ' && gameBoard[2][1] == ' ' && gameBoard[2][2] == ' ') {
		result = 8;
		return result;
	}//1
	else if (gameBoard[0][0] == 'X' && gameBoard[0][1] == ' ' && gameBoard[0][2] == 'O' && gameBoard[1][0] == ' ' && gameBoard[1][1] == 'O' && gameBoard[1][2] == ' ' && gameBoard[2][0] == ' ' && gameBoard[2][1] == ' ' && gameBoard[2][2] == ' ') {
		result = 7;
		return result;
	}//2
	else if (gameBoard[0][0] == 'X' && gameBoard[0][1] == ' ' && gameBoard[0][2] == ' ' && gameBoard[1][0] == 'O' && gameBoard[1][1] == 'O' && gameBoard[1][2] == ' ' && gameBoard[2][0] == ' ' && gameBoard[2][1] == ' ' && gameBoard[2][2] == ' ') {
		result = 6;
		return result;
	}//3
	else if (gameBoard[0][0] == 'X' && gameBoard[0][1] == ' ' && gameBoard[0][2] == ' ' && gameBoard[1][0] == ' ' && gameBoard[1][1] == 'O' && gameBoard[1][2] == 'O' && gameBoard[2][0] == ' ' && gameBoard[2][1] == ' ' && gameBoard[2][2] == ' ') {
		result = 4;
		return result;
	}//4
	else if (gameBoard[0][0] == 'X' && gameBoard[0][1] == ' ' && gameBoard[0][2] == ' ' && gameBoard[1][0] == ' ' && gameBoard[1][1] == 'O' && gameBoard[1][2] == ' ' && gameBoard[2][0] == 'O' && gameBoard[2][1] == ' ' && gameBoard[2][2] == ' ') {
		result = 3;
		return result;
	}//5
	else if (gameBoard[0][0] == 'X' && gameBoard[0][1] == ' ' && gameBoard[0][2] == ' ' && gameBoard[1][0] == ' ' && gameBoard[1][1] == 'O' && gameBoard[1][2] == ' ' && gameBoard[2][0] == ' ' && gameBoard[2][1] == 'O' && gameBoard[2][2] == ' ') {
		result = 2;
		return result;
	}//6
	else if (gameBoard[0][0] == 'X' && gameBoard[0][1] == ' ' && gameBoard[0][2] == ' ' && gameBoard[1][0] == ' ' && gameBoard[1][1] == 'O' && gameBoard[1][2] == ' ' && gameBoard[2][0] == ' ' && gameBoard[2][1] == ' ' && gameBoard[2][2] == 'O') {
		result = 7;
		return result;
	}//7
	else if (gameBoard[0][0] == 'O' && gameBoard[0][1] == 'O' && gameBoard[0][2] == ' ' && gameBoard[1][0] == ' ' && gameBoard[1][1] == 'X' && gameBoard[1][2] == ' ' && gameBoard[2][0] == ' ' && gameBoard[2][1] == ' ' && gameBoard[2][2] == ' ') {
		result = 3;
		return result;
	}//8
	else if (gameBoard[0][0] == 'O' && gameBoard[0][1] == ' ' && gameBoard[0][2] == 'O' && gameBoard[1][0] == ' ' && gameBoard[1][1] == 'X' && gameBoard[1][2] == ' ' && gameBoard[2][0] == ' ' && gameBoard[2][1] == ' ' && gameBoard[2][2] == ' ') {
		result = 2;
		return result;
	}//9
	else if (gameBoard[0][0] == 'O' && gameBoard[0][1] == ' ' && gameBoard[0][2] == ' ' && gameBoard[1][0] == 'O' && gameBoard[1][1] == 'X' && gameBoard[1][2] == ' ' && gameBoard[2][0] == ' ' && gameBoard[2][1] == ' ' && gameBoard[2][2] == ' ') {
		result = 7;
		return result;
	}//10
	else if (gameBoard[0][0] == 'O' && gameBoard[0][1] == ' ' && gameBoard[0][2] == ' ' && gameBoard[1][0] == ' ' && gameBoard[1][1] == 'X' && gameBoard[1][2] == 'O' && gameBoard[2][0] == ' ' && gameBoard[2][1] == ' ' && gameBoard[2][2] == ' ') {
		result = 3;
		return result;
	}//11
	else if (gameBoard[0][0] == 'O' && gameBoard[0][1] == ' ' && gameBoard[0][2] == ' ' && gameBoard[1][0] == ' ' && gameBoard[1][1] == 'X' && gameBoard[1][2] == ' ' && gameBoard[2][0] == 'O' && gameBoard[2][1] == ' ' && gameBoard[2][2] == ' ') {
		result = 4;
		return result;
	}//12
	else if (gameBoard[0][0] == 'O' && gameBoard[0][1] == ' ' && gameBoard[0][2] == ' ' && gameBoard[1][0] == ' ' && gameBoard[1][1] == 'X' && gameBoard[1][2] == ' ' && gameBoard[2][0] == ' ' && gameBoard[2][1] == 'O' && gameBoard[2][2] == ' ') {
		result = 7;
		return result;
	}//13
	else if (gameBoard[0][0] == 'O' && gameBoard[0][1] == ' ' && gameBoard[0][2] == ' ' && gameBoard[1][0] == ' ' && gameBoard[1][1] == 'X' && gameBoard[1][2] == ' ' && gameBoard[2][0] == ' ' && gameBoard[2][1] == ' ' && gameBoard[2][2] == 'O') {
		result = 2;
		return result;
	}//14
	else if (gameBoard[0][0] == ' ' && gameBoard[0][1] == 'O' && gameBoard[0][2] == 'O' && gameBoard[1][0] == ' ' && gameBoard[1][1] == 'X' && gameBoard[1][2] == ' ' && gameBoard[2][0] == ' ' && gameBoard[2][1] == ' ' && gameBoard[2][2] == ' ') {
		result = 1;
		return result;
	}//15
	else if (gameBoard[0][0] == ' ' && gameBoard[0][1] == 'O' && gameBoard[0][2] == ' ' && gameBoard[1][0] == 'O' && gameBoard[1][1] == 'X' && gameBoard[1][2] == ' ' && gameBoard[2][0] == ' ' && gameBoard[2][1] == ' ' && gameBoard[2][2] == ' ') {
		result = 1;
		return result;
	}//16
	else if (gameBoard[0][0] == ' ' && gameBoard[0][1] == 'O' && gameBoard[0][2] == ' ' && gameBoard[1][0] == ' ' && gameBoard[1][1] == 'X' && gameBoard[1][2] == 'O' && gameBoard[2][0] == ' ' && gameBoard[2][1] == ' ' && gameBoard[2][2] == ' ') {
		result = 3;
		return result;
	}//17
	else if (gameBoard[0][0] == ' ' && gameBoard[0][1] == 'O' && gameBoard[0][2] == ' ' && gameBoard[1][0] == ' ' && gameBoard[1][1] == 'X' && gameBoard[1][2] == ' ' && gameBoard[2][0] == 'O' && gameBoard[2][1] == ' ' && gameBoard[2][2] == ' ') {
		result = 1;
		return result;
	}//18
	else if (gameBoard[0][0] == ' ' && gameBoard[0][1] == 'O' && gameBoard[0][2] == ' ' && gameBoard[1][0] == ' ' && gameBoard[1][1] == 'X' && gameBoard[1][2] == ' ' && gameBoard[2][0] == ' ' && gameBoard[2][1] == 'O' && gameBoard[2][2] == ' ') {
		result = 1;
		return result;
	}//19
	else if (gameBoard[0][0] == ' ' && gameBoard[0][1] == 'O' && gameBoard[0][2] == ' ' && gameBoard[1][0] == ' ' && gameBoard[1][1] == 'X' && gameBoard[1][2] == ' ' && gameBoard[2][0] == ' ' && gameBoard[2][1] == ' ' && gameBoard[2][2] == 'O') {
		result = 3;
		return result;
	}//20
	else if (gameBoard[0][0] == ' ' && gameBoard[0][1] == ' ' && gameBoard[0][2] == 'O' && gameBoard[1][0] == 'O' && gameBoard[1][1] == 'X' && gameBoard[1][2] == ' ' && gameBoard[2][0] == ' ' && gameBoard[2][1] == ' ' && gameBoard[2][2] == ' ') {
		result = 1;
		return result;
	}//21
	else if (gameBoard[0][0] == ' ' && gameBoard[0][1] == ' ' && gameBoard[0][2] == 'O' && gameBoard[1][0] == ' ' && gameBoard[1][1] == 'X' && gameBoard[1][2] == 'O' && gameBoard[2][0] == ' ' && gameBoard[2][1] == ' ' && gameBoard[2][2] == ' ') {
		result = 9;
		return result;
	}//22
	else if (gameBoard[0][0] == ' ' && gameBoard[0][1] == ' ' && gameBoard[0][2] == 'O' && gameBoard[1][0] == ' ' && gameBoard[1][1] == 'X' && gameBoard[1][2] == ' ' && gameBoard[2][0] == 'O' && gameBoard[2][1] == ' ' && gameBoard[2][2] == ' ') {
		result = 6;
		return result;
	}//23
	else if (gameBoard[0][0] == ' ' && gameBoard[0][1] == ' ' && gameBoard[0][2] == 'O' && gameBoard[1][0] == ' ' && gameBoard[1][1] == 'X' && gameBoard[1][2] == ' ' && gameBoard[2][0] == ' ' && gameBoard[2][1] == 'O' && gameBoard[2][2] == ' ') {
		result = 9;
		return result;
	}//24
	else if (gameBoard[0][0] == ' ' && gameBoard[0][1] == ' ' && gameBoard[0][2] == 'O' && gameBoard[1][0] == ' ' && gameBoard[1][1] == 'X' && gameBoard[1][2] == ' ' && gameBoard[2][0] == ' ' && gameBoard[2][1] == ' ' && gameBoard[2][2] == 'O') {
		result = 6;
		return result;
	}//25
	else if (gameBoard[0][0] == ' ' && gameBoard[0][1] == ' ' && gameBoard[0][2] == ' ' && gameBoard[1][0] == 'O' && gameBoard[1][1] == 'X' && gameBoard[1][2] == 'O' && gameBoard[2][0] == ' ' && gameBoard[2][1] == ' ' && gameBoard[2][2] == ' ') {
		result = 3;
		return result;
	}//26
	else if (gameBoard[0][0] == ' ' && gameBoard[0][1] == ' ' && gameBoard[0][2] == ' ' && gameBoard[1][0] == 'O' && gameBoard[1][1] == 'X' && gameBoard[1][2] == ' ' && gameBoard[2][0] == 'O' && gameBoard[2][1] == ' ' && gameBoard[2][2] == ' ') {
		result = 1;
		return result;
	}//27
	else if (gameBoard[0][0] == ' ' && gameBoard[0][1] == ' ' && gameBoard[0][2] == ' ' && gameBoard[1][0] == 'O' && gameBoard[1][1] == 'X' && gameBoard[1][2] == ' ' && gameBoard[2][0] == ' ' && gameBoard[2][1] == 'O' && gameBoard[2][2] == ' ') {
		result = 7;
		return result;
	}//28
	else if (gameBoard[0][0] == ' ' && gameBoard[0][1] == ' ' && gameBoard[0][2] == ' ' && gameBoard[1][0] == 'O' && gameBoard[1][1] == 'X' && gameBoard[1][2] == ' ' && gameBoard[2][0] == ' ' && gameBoard[2][1] == ' ' && gameBoard[2][2] == 'O') {
		result = 7;
		return result;
	}//29
	else if (gameBoard[0][0] == ' ' && gameBoard[0][1] == ' ' && gameBoard[0][2] == ' ' && gameBoard[1][0] == ' ' && gameBoard[1][1] == 'X' && gameBoard[1][2] == 'O' && gameBoard[2][0] == 'O' && gameBoard[2][1] == ' ' && gameBoard[2][2] == ' ') {
		result = 9;
		return result;
	}//30
	else if (gameBoard[0][0] == ' ' && gameBoard[0][1] == ' ' && gameBoard[0][2] == ' ' && gameBoard[1][0] == ' ' && gameBoard[1][1] == 'X' && gameBoard[1][2] == 'O' && gameBoard[2][0] == ' ' && gameBoard[2][1] == 'O' && gameBoard[2][2] == ' ') {
		result = 9;
		return result;
	}//31
	else if (gameBoard[0][0] == ' ' && gameBoard[0][1] == ' ' && gameBoard[0][2] == ' ' && gameBoard[1][0] == ' ' && gameBoard[1][1] == 'X' && gameBoard[1][2] == ' ' && gameBoard[2][0] == 'O' && gameBoard[2][1] == ' ' && gameBoard[2][2] == 'O') {
		result = 3;
		return result;
	}//32
	else if (gameBoard[0][0] == ' ' && gameBoard[0][1] == ' ' && gameBoard[0][2] == ' ' && gameBoard[1][0] == ' ' && gameBoard[1][1] == 'X' && gameBoard[1][2] == ' ' && gameBoard[2][0] == 'O' && gameBoard[2][1] == 'O' && gameBoard[2][2] == ' ') {
		result = 9;
		return result;
	}//33
	else if (gameBoard[0][0] == ' ' && gameBoard[0][1] == ' ' && gameBoard[0][2] == ' ' && gameBoard[1][0] == ' ' && gameBoard[1][1] == 'X' && gameBoard[1][2] == ' ' && gameBoard[2][0] == 'O' && gameBoard[2][1] == ' ' && gameBoard[2][2] == 'O') {
		result = 8;
		return result;
	}//34
	else if (gameBoard[0][0] == ' ' && gameBoard[0][1] == ' ' && gameBoard[0][2] == ' ' && gameBoard[1][0] == ' ' && gameBoard[1][1] == 'X' && gameBoard[1][2] == ' ' && gameBoard[2][0] == ' ' && gameBoard[2][1] == 'O' && gameBoard[2][2] == 'O') {
		result = 7;
		return result;
	}

	//turn 3
	if (gameBoard[0][0] == 'X' && gameBoard[0][1] == 'O' && gameBoard[0][2] == 'O' && gameBoard[1][0] == ' ' && gameBoard[1][1] == 'O' && gameBoard[1][2] == ' ' && gameBoard[2][0] == ' ' && gameBoard[2][1] == 'X' && gameBoard[2][2] == ' ') {
		result = 7;
		return result;
	}
	else if (gameBoard[0][0] == 'X' && gameBoard[0][1] == 'O' && gameBoard[0][2] == ' ' && gameBoard[1][0] == 'O' && gameBoard[1][1] == 'O' && gameBoard[1][2] == ' ' && gameBoard[2][0] == ' ' && gameBoard[2][1] == 'X' && gameBoard[2][2] == ' ') {
		result = 6;
		return result;
	}
	else if (gameBoard[0][0] == 'X' && gameBoard[0][1] == 'O' && gameBoard[0][2] == ' ' && gameBoard[1][0] == ' ' && gameBoard[1][1] == 'O' && gameBoard[1][2] == 'O' && gameBoard[2][0] == ' ' && gameBoard[2][1] == 'X' && gameBoard[2][2] == ' ') {
		result = 4;
		return result;
	}
	else if (gameBoard[0][0] == 'X' && gameBoard[0][1] == 'O' && gameBoard[0][2] == ' ' && gameBoard[1][0] == ' ' && gameBoard[1][1] == 'O' && gameBoard[1][2] == ' ' && gameBoard[2][0] == 'O' && gameBoard[2][1] == 'X' && gameBoard[2][2] == ' ') {
		result = 3;
		return result;
	}
	else if (gameBoard[0][0] == 'X' && gameBoard[0][1] == 'O' && gameBoard[0][2] == ' ' && gameBoard[1][0] == ' ' && gameBoard[1][1] == 'O' && gameBoard[1][2] == ' ' && gameBoard[2][0] == ' ' && gameBoard[2][1] == 'X' && gameBoard[2][2] == 'O') {
		result = 4;
		return result;
	}

	if (gameBoard[0][0] == 'X' && gameBoard[0][1] == ' ' && gameBoard[0][2] == 'O' && gameBoard[1][0] == 'O' && gameBoard[1][1] == 'O' && gameBoard[1][2] == ' ' && gameBoard[2][0] == 'X' && gameBoard[2][1] == ' ' && gameBoard[2][2] == ' ') {
		result = 6;
		return result;
	}
	else if (gameBoard[0][0] == 'X' && gameBoard[0][2] == 'O' && gameBoard[1][0] == ' ' && gameBoard[1][1] == 'O' && gameBoard[2][0] == 'X' && (gameBoard[1][2] == 'O' || gameBoard[2][1] == 'O' || gameBoard[2][2] == 'O' || gameBoard[0][1] == 'O')) {
		result = 4;
		return result;
	}//win

	if (gameBoard[0][0] == 'X' && gameBoard[0][1] == 'O' && gameBoard[0][2] == ' ' && gameBoard[1][0] == 'O' && gameBoard[1][1] == 'O' && gameBoard[1][2] == 'X' && gameBoard[2][0] == ' ' && gameBoard[2][1] == ' ' && gameBoard[2][2] == ' ') {
		result = 8;
		return result;
	}
	else if (gameBoard[0][0] == 'X' && gameBoard[0][1] == ' ' && gameBoard[0][2] == 'O' && gameBoard[1][0] == 'O' && gameBoard[1][1] == 'O' && gameBoard[1][2] == 'X' && gameBoard[2][0] == ' ' && gameBoard[2][1] == ' ' && gameBoard[2][2] == ' ') {
		result = 7;
		return result;
	}
	else if (gameBoard[0][0] == 'X' && gameBoard[0][1] == ' ' && gameBoard[0][2] == ' ' && gameBoard[1][0] == 'O' && gameBoard[1][1] == 'O' && gameBoard[1][2] == 'X' && gameBoard[2][0] == 'O' && gameBoard[2][1] == ' ' && gameBoard[2][2] == ' ') {
		result = 3;
		return result;
	}
	else if (gameBoard[0][0] == 'X' && gameBoard[0][1] == ' ' && gameBoard[0][2] == ' ' && gameBoard[1][0] == 'O' && gameBoard[1][1] == 'O' && gameBoard[1][2] == 'X' && gameBoard[2][0] == ' ' && gameBoard[2][1] == 'O' && gameBoard[2][2] == ' ') {
		result = 2;
		return result;
	}
	else if (gameBoard[0][0] == 'X' && gameBoard[0][1] == ' ' && gameBoard[0][2] == ' ' && gameBoard[1][0] == 'O' && gameBoard[1][1] == 'O' && gameBoard[1][2] == 'X' && gameBoard[2][0] == ' ' && gameBoard[2][1] == ' ' && gameBoard[2][2] == 'O') {
		result = 3;
		return result;
	}

	if (gameBoard[0][0] == 'X' && gameBoard[0][1] == ' ' && gameBoard[0][2] == ' ' && gameBoard[1][0] == 'X' && gameBoard[1][1] == 'O' && gameBoard[1][2] == 'O' && gameBoard[2][0] == 'O' && gameBoard[2][1] == ' ' && gameBoard[2][2] == ' ') {
		result = 3;
		return result;
	}
	else if (gameBoard[0][0] == 'X' && gameBoard[1][0] == 'X' && gameBoard[1][1] == 'O' && gameBoard[1][2] == 'O' && gameBoard[2][0] == ' ' && (gameBoard[2][1] == 'O' || gameBoard[2][2] == 'O' || gameBoard[0][1] == 'O' || gameBoard[0][2] == 'O')) {
		result = 7;
		return result;
	}//win

	if (gameBoard[0][0] == 'X' && gameBoard[0][1] == 'O' && gameBoard[0][2] == 'X' && gameBoard[1][0] == ' ' && gameBoard[1][1] == 'O' && gameBoard[1][2] == ' ' && gameBoard[2][0] == 'O' && gameBoard[2][1] == ' ' && gameBoard[2][2] == ' ') {
		result = 8;
		return result;
	}
	else if (gameBoard[0][0] == 'X' && gameBoard[0][1] == ' ' && gameBoard[0][2] == 'X' && gameBoard[1][1] == 'O' && gameBoard[2][0] == 'O' && (gameBoard[1][0] == 'O' || gameBoard[1][2] == 'O' || gameBoard[2][1] == 'O' || gameBoard[2][2] == 'O')) {
		result = 2;
		return result;
	}//win

	if (gameBoard[0][0] == 'X' && gameBoard[0][1] == 'X' && gameBoard[0][2] == 'O' && gameBoard[1][0] == ' ' && gameBoard[1][1] == 'O' && gameBoard[1][2] == ' ' && gameBoard[2][0] == ' ' && gameBoard[2][1] == 'O' && gameBoard[2][2] == ' ') {
		result = 7;
		return result;
	}
	else if (gameBoard[0][0] == 'X' && gameBoard[0][1] == 'X' && gameBoard[0][2] == ' ' && gameBoard[1][1] == 'O' && gameBoard[2][1] == 'O' && (gameBoard[1][0] == 'O' || gameBoard[1][2] == 'O' || gameBoard[2][0] == 'O' || gameBoard[2][2] == 'O')) {
		result = 3;
		return result;
	}//win

	if (gameBoard[0][0] == 'X' && gameBoard[0][1] == ' ' && gameBoard[0][2] == ' ' && gameBoard[1][0] == 'O' && gameBoard[1][1] == 'O' && gameBoard[1][2] == ' ' && gameBoard[2][0] == 'X' && gameBoard[2][1] == ' ' && gameBoard[2][2] == 'O') {
		result = 6;
		return result;
	}
	else if (gameBoard[0][0] == 'X' && gameBoard[1][0] == ' ' && gameBoard[1][1] == 'O' && gameBoard[2][0] == 'X' && gameBoard[2][2] == 'O' && (gameBoard[0][2] == 'O' || gameBoard[0][1] == 'O' || gameBoard[1][2] == 'O' || gameBoard[2][1] == 'O')) {
		result = 4;
		return result;
	}//win

	if (gameBoard[0][0] == 'O' && gameBoard[0][1] == 'O' && gameBoard[0][2] == 'X' && gameBoard[1][0] == ' ' && gameBoard[1][1] == 'X' && gameBoard[1][2] == ' ' && gameBoard[2][0] == 'O' && gameBoard[2][1] == ' ' && gameBoard[2][2] == ' ') {
		result = 4;
		return result;
	}
	else if (gameBoard[0][0] == 'O' && gameBoard[0][1] == 'O' && gameBoard[0][2] == 'X' && gameBoard[1][1] == 'X' && gameBoard[2][0] == ' ' && (gameBoard[1][2] == 'O' || gameBoard[2][1] == 'O' || gameBoard[2][2] == 'O' || gameBoard[1][0] == 'O')) {
		result = 7;
		return result;
	}//win

	if (gameBoard[0][0] == 'O' && gameBoard[0][1] == 'X' && gameBoard[0][2] == 'O' && gameBoard[1][0] == ' ' && gameBoard[1][1] == 'X' && gameBoard[1][2] == ' ' && gameBoard[2][0] == ' ' && gameBoard[2][1] == 'O' && gameBoard[2][2] == ' ') {
		result = 4;
		return result;
	}
	else if (gameBoard[0][0] == 'O' && gameBoard[0][1] == 'X' && gameBoard[0][2] == 'O' && gameBoard[1][1] == 'X' && gameBoard[2][1] == ' ' && (gameBoard[1][0] == 'O' || gameBoard[1][2] == 'O' || gameBoard[2][0] == 'O' || gameBoard[2][2] == 'O')) {
		result = 8;
		return result;
	}//win

	if (gameBoard[0][0] == 'O' && gameBoard[0][1] == ' ' && gameBoard[0][2] == 'O' && gameBoard[1][0] == 'O' && gameBoard[1][1] == 'X' && gameBoard[1][2] == ' ' && gameBoard[2][0] == 'X' && gameBoard[2][1] == ' ' && gameBoard[2][2] == ' ') {
		result = 2;
		return result;
	}
	else if (gameBoard[0][0] == 'O' && gameBoard[0][2] == ' ' && gameBoard[2][0] == 'X' && gameBoard[1][0] == 'O' && gameBoard[1][1] == 'X' && (gameBoard[1][2] == 'O' || gameBoard[0][1] == 'O' || gameBoard[2][1] == 'O' || gameBoard[2][2] == 'O')) {
		result = 3;
		return result;
	}//win

	if (gameBoard[0][0] == 'O' && gameBoard[0][1] == ' ' && gameBoard[0][2] == 'X' && gameBoard[1][0] == ' ' && gameBoard[1][1] == 'X' && gameBoard[1][2] == 'O' && gameBoard[2][0] == 'O' && gameBoard[2][1] == ' ' && gameBoard[2][2] == ' ') {
		result = 4;
		return result;
	}
	else if (gameBoard[0][0] == 'O' && gameBoard[0][2] == 'X' && gameBoard[1][1] == 'X' && gameBoard[1][2] == 'O' && gameBoard[2][0] == ' ' && (gameBoard[1][0] == 'O' || gameBoard[0][1] == 'O' || gameBoard[2][1] == 'O' || gameBoard[2][2] == 'O')) {
		result = 7;
		return result;
	}//win

	if (gameBoard[0][0] == 'O' && gameBoard[0][1] == ' ' && gameBoard[0][2] == ' ' && gameBoard[1][0] == 'X' && gameBoard[1][1] == 'X' && gameBoard[1][2] == 'O' && gameBoard[2][0] == 'O' && gameBoard[2][1] == ' ' && gameBoard[2][2] == ' ') {
		result = 2;
		return result;
	}
	else if (gameBoard[0][0] == 'O' && gameBoard[1][0] == 'X' && gameBoard[2][0] == 'O' && gameBoard[1][1] == 'X' && gameBoard[1][2] == ' ' && (gameBoard[0][1] == 'O' || gameBoard[0][2] == 'O' || gameBoard[2][1] == 'O' || gameBoard[2][2] == 'O')) {
		result = 6;
		return result;
	}//win

	if (gameBoard[0][0] == 'O' && gameBoard[0][1] == ' ' && gameBoard[0][2] == 'O' && gameBoard[1][0] == ' ' && gameBoard[1][1] == 'X' && gameBoard[1][2] == ' ' && gameBoard[2][0] == 'X' && gameBoard[2][1] == 'O' && gameBoard[2][2] == ' ') {
		result = 2;
		return result;
	}
	else if (gameBoard[0][0] == 'O' && gameBoard[0][2] == ' ' && gameBoard[1][1] == 'X' && gameBoard[2][0] == 'X' && gameBoard[2][1] == 'O' && (gameBoard[1][2] == 'O' || gameBoard[0][1] == 'O' || gameBoard[1][0] == 'O' || gameBoard[2][2] == 'O')) {
		result = 3;
		return result;
	}//win

	if (gameBoard[0][0] == 'O' && gameBoard[0][1] == 'X' && gameBoard[0][2] == ' ' && gameBoard[1][0] == ' ' && gameBoard[1][1] == 'X' && gameBoard[1][2] == ' ' && gameBoard[2][0] == ' ' && gameBoard[2][1] == 'O' && gameBoard[2][2] == 'O') {
		result = 7;
		return result;
	}
	else if (gameBoard[0][0] == 'O' && gameBoard[0][1] == 'X' && gameBoard[1][1] == 'X' && gameBoard[2][2] == 'O' && gameBoard[2][1] == ' ' && (gameBoard[0][2] == 'O' || gameBoard[1][0] == 'O' || gameBoard[1][2] == 'O' || gameBoard[2][0] == 'O')) {
		result = 8;
		return result;
	}//win

	if (gameBoard[0][0] == 'X' && gameBoard[0][1] == 'O' && gameBoard[0][2] == 'O' && gameBoard[1][0] == ' ' && gameBoard[1][1] == 'X' && gameBoard[1][2] == ' ' && gameBoard[2][0] == ' ' && gameBoard[2][1] == ' ' && gameBoard[2][2] == 'O') {
		result = 6;
		return result;
	}
	else if (gameBoard[0][0] == 'X' && gameBoard[0][1] == 'O' && gameBoard[0][2] == 'O' && gameBoard[2][2] == ' ' && gameBoard[1][1] == 'X' && (gameBoard[1][0] == 'O' || gameBoard[1][2] == 'O' || gameBoard[2][0] == 'O' || gameBoard[2][1] == 'O')) {
		result = 9;
		return result;
	}//win

	if (gameBoard[0][0] == 'X' && gameBoard[0][1] == 'O' && gameBoard[0][2] == ' ' && gameBoard[1][0] == 'O' && gameBoard[1][1] == 'X' && gameBoard[1][2] == ' ' && gameBoard[2][0] == ' ' && gameBoard[2][1] == ' ' && gameBoard[2][2] == 'O') {
		result = 3;
		return result;
	}
	else if (gameBoard[0][0] == 'X' && gameBoard[0][1] == 'O' && gameBoard[2][2] == ' ' && gameBoard[1][0] == 'O' && gameBoard[1][1] == 'X' && (gameBoard[0][2] == 'O' || gameBoard[1][2] == 'O' || gameBoard[2][0] == 'O' || gameBoard[2][1] == 'O')) {
		result = 9;
		return result;
	}//win

	if (gameBoard[0][0] == ' ' && gameBoard[0][1] == 'O' && gameBoard[0][2] == 'X' && gameBoard[1][0] == ' ' && gameBoard[1][1] == 'X' && gameBoard[1][2] == 'O' && gameBoard[2][0] == 'O' && gameBoard[2][1] == ' ' && gameBoard[2][2] == ' ') {
		result = 1;
		return result;
	}
	else if (gameBoard[0][1] == 'O' && gameBoard[0][2] == 'X' && gameBoard[1][1] == 'X' && gameBoard[1][2] == 'O' && gameBoard[2][0] == ' ' && (gameBoard[0][0] == 'O' || gameBoard[1][0] == 'O' || gameBoard[2][1] == 'O' || gameBoard[2][2] == 'O')) {
		result = 7;
		return result;
	}//win

	if (gameBoard[0][0] == 'X' && gameBoard[0][1] == 'O' && gameBoard[0][2] == ' ' && gameBoard[1][0] == ' ' && gameBoard[1][1] == 'X' && gameBoard[1][2] == ' ' && gameBoard[2][0] == 'O' && gameBoard[2][1] == ' ' && gameBoard[2][2] == 'O') {
		result = 8;
		return result;
	}
	else if (gameBoard[0][0] == 'X' && gameBoard[0][1] == 'O' && gameBoard[2][2] == ' ' && gameBoard[1][1] == 'X' && gameBoard[2][0] == 'O' && (gameBoard[0][2] == 'O' || gameBoard[1][0] == 'O' || gameBoard[1][2] == 'O' || gameBoard[2][1] == 'O')) {
		result = 9;
		return result;
	}//win

	if (gameBoard[0][0] == 'X' && gameBoard[0][1] == 'O' && gameBoard[0][2] == ' ' && gameBoard[1][0] == ' ' && gameBoard[1][1] == 'X' && gameBoard[1][2] == ' ' && gameBoard[2][0] == ' ' && gameBoard[2][1] == 'O' && gameBoard[2][2] == 'O') {
		result = 7;
		return result;
	}
	else if (gameBoard[0][0] == 'X' && gameBoard[0][1] == 'O' && gameBoard[2][2] == ' ' && gameBoard[1][1] == 'X' && gameBoard[2][1] == 'O' && (gameBoard[0][2] == 'O' || gameBoard[1][0] == 'O' || gameBoard[1][2] == 'O' || gameBoard[2][0] == 'O')) {
		result = 9;
		return result;
	}//win

	if (gameBoard[0][0] == ' ' && gameBoard[0][1] == 'O' && gameBoard[0][2] == 'X' && gameBoard[1][0] == ' ' && gameBoard[1][1] == 'X' && gameBoard[1][2] == ' ' && gameBoard[2][0] == 'O' && gameBoard[2][1] == ' ' && gameBoard[2][2] == 'O') {
		result = 8;
		return result;
	}
	else if (gameBoard[0][1] == 'O' && gameBoard[0][2] == 'X' && gameBoard[2][2] == 'O' && gameBoard[1][1] == 'X' && gameBoard[2][0] == ' ' && (gameBoard[1][0] == 'O' || gameBoard[0][0] == 'O' || gameBoard[1][2] == 'O' || gameBoard[2][1] == 'O')) {
		result = 7;
		return result;
	}//win

	if (gameBoard[0][0] == 'X' && gameBoard[0][1] == ' ' && gameBoard[0][2] == 'O' && gameBoard[1][0] == 'O' && gameBoard[1][1] == 'X' && gameBoard[1][2] == ' ' && gameBoard[2][0] == ' ' && gameBoard[2][1] == ' ' && gameBoard[2][2] == 'O') {
		result = 6;
		return result;
	}
	else if (gameBoard[0][0] == 'X' && gameBoard[2][2] == ' ' && gameBoard[0][2] == 'O' && gameBoard[1][0] == 'O' && gameBoard[1][1] == 'X' && (gameBoard[1][2] == 'O' || gameBoard[0][1] == 'O' || gameBoard[2][0] == 'O' || gameBoard[2][1] == 'O')) {
		result = 9;
		return result;
	}//win

	if (gameBoard[0][0] == 'O' && gameBoard[0][1] == ' ' && gameBoard[0][2] == 'O' && gameBoard[1][0] == ' ' && gameBoard[1][1] == 'X' && gameBoard[1][2] == 'O' && gameBoard[2][0] == ' ' && gameBoard[2][1] == ' ' && gameBoard[2][2] == 'X') {
		result = 2;
		return result;
	}
	else if (gameBoard[0][0] == ' ' && gameBoard[2][2] == 'X' && gameBoard[0][2] == 'O' && gameBoard[1][1] == 'X' && gameBoard[1][2] == 'O' && (gameBoard[1][0] == 'O' || gameBoard[0][1] == 'O' || gameBoard[2][0] == 'O' || gameBoard[2][1] == 'O')) {
		result = 1;
		return result;
	}//win

	if (gameBoard[0][0] == ' ' && gameBoard[0][1] == ' ' && gameBoard[0][2] == 'O' && gameBoard[1][0] == 'O' && gameBoard[1][1] == 'X' && gameBoard[1][2] == 'X' && gameBoard[2][0] == 'O' && gameBoard[2][1] == ' ' && gameBoard[2][2] == ' ') {
		result = 1;
		return result;
	}
	else if (gameBoard[0][0] == ' ' && gameBoard[0][2] == 'O' && gameBoard[1][1] == 'X' && gameBoard[1][2] == 'X' && gameBoard[2][0] == 'O' && (gameBoard[1][0] == 'O' || gameBoard[0][1] == 'O' || gameBoard[2][1] == 'O' || gameBoard[2][2] == 'O')) {
		result = 4;
		return result;
	}//win

	if (gameBoard[0][0] == 'O' && gameBoard[0][1] == ' ' && gameBoard[0][2] == 'O' && gameBoard[1][0] == ' ' && gameBoard[1][1] == 'X' && gameBoard[1][2] == ' ' && gameBoard[2][0] == ' ' && gameBoard[2][1] == 'O' && gameBoard[2][2] == 'X') {
		result = 2;
		return result;
	}
	else if (gameBoard[0][0] == ' ' && gameBoard[2][1] == 'O' && gameBoard[2][2] == 'X' && gameBoard[0][2] == 'O' && gameBoard[1][1] == 'X' && (gameBoard[0][1] == 'O' || gameBoard[1][0] == 'O' || gameBoard[1][2] == 'O' || gameBoard[2][0] == 'O')) {
		result = 1;
		return result;
	}//win

	if (gameBoard[0][0] == ' ' && gameBoard[0][1] == ' ' && gameBoard[0][2] == 'O' && gameBoard[1][0] == 'O' && gameBoard[1][1] == 'X' && gameBoard[1][2] == 'X' && gameBoard[2][0] == ' ' && gameBoard[2][1] == ' ' && gameBoard[2][2] == 'O') {
		result = 8;
		return result;
	}
	else if (gameBoard[2][2] == 'O' && gameBoard[0][2] == 'O' && gameBoard[1][0] == ' ' && gameBoard[1][1] == 'X' && gameBoard[1][2] == 'X' && (gameBoard[0][0] == 'O' || gameBoard[0][1] == 'O' || gameBoard[2][0] == 'O' || gameBoard[2][1] == 'O')) {
		result = 4;
		return result;
	}//win

	if (gameBoard[0][0] == ' ' && gameBoard[0][1] == ' ' && gameBoard[0][2] == 'X' && gameBoard[1][0] == 'O' && gameBoard[1][1] == 'X' && gameBoard[1][2] == 'O' && gameBoard[2][0] == 'O' && gameBoard[2][1] == ' ' && gameBoard[2][2] == ' ') {
		result = 1;
		return result;
	}
	else if (gameBoard[0][2] == 'X' && gameBoard[1][0] == 'O' && gameBoard[1][1] == 'X' && gameBoard[1][2] == 'O' && gameBoard[2][0] == ' ' && (gameBoard[0][0] == 'O' || gameBoard[0][1] == 'O' || gameBoard[2][2] == 'O' || gameBoard[2][1] == 'O')) {
		result = 7;
		return result;
	}//win

	if (gameBoard[0][0] == 'X' && gameBoard[0][1] == ' ' && gameBoard[0][2] == ' ' && gameBoard[1][0] == 'O' && gameBoard[1][1] == 'X' && gameBoard[1][2] == ' ' && gameBoard[2][0] == 'O' && gameBoard[2][1] == ' ' && gameBoard[2][2] == 'O') {
		result = 8;
		return result;
	}
	else if (gameBoard[0][0] == 'X' && gameBoard[2][2] == ' ' && gameBoard[1][0] == 'O' && gameBoard[1][1] == 'X' && gameBoard[2][0] == 'O' && (gameBoard[0][1] == 'O' || gameBoard[0][2] == 'O' || gameBoard[1][2] == 'O' || gameBoard[2][1] == 'O')) {
		result = 9;
		return result;
	}//win

	if (gameBoard[0][0] == ' ' && gameBoard[0][1] == ' ' && gameBoard[0][2] == 'O' && gameBoard[1][0] == 'O' && gameBoard[1][1] == 'X' && gameBoard[1][2] == ' ' && gameBoard[2][0] == 'X' && gameBoard[2][1] == 'O' && gameBoard[2][2] == ' ') {
		result = 1;
		return result;
	}
	else if (gameBoard[0][2] == ' ' && gameBoard[1][0] == 'O' && gameBoard[1][1] == 'X' && gameBoard[2][0] == 'X' && gameBoard[2][1] == 'O' && (gameBoard[0][0] == 'O' || gameBoard[0][1] == 'O' || gameBoard[1][2] == 'O' || gameBoard[2][2] == 'O')) {
		result = 3;
		return result;
	}//win
}

int autoPlayO() {
	int result;

	if (gameBoard[1][1] == ' ') {
		result = 5;
		return result;
	}
	else if (gameBoard[1][1] != ' ' && gameBoard[0][0] == ' ' && gameBoard[0][1] == ' ' && gameBoard[0][2] == ' ' && gameBoard[1][0] == ' ' && gameBoard[1][2] == ' ' && gameBoard[2][0] == ' ' && gameBoard[2][1] == ' ' && gameBoard[2][2] == ' ') {
		result = 1;
		return result;
	}

	if (gameBoard[0][0] == 'O' && gameBoard[0][1] == 'X' && gameBoard[0][2] == ' ' && gameBoard[1][0] == ' ' && gameBoard[1][1] == 'X' && gameBoard[1][2] == ' ' && gameBoard[2][0] == ' ' && gameBoard[2][1] == ' ' && gameBoard[2][2] == ' ') {
		result = 8;
		return result;
	}
	else if (gameBoard[0][0] == 'O' && gameBoard[0][1] == ' ' && gameBoard[0][2] == 'X' && gameBoard[1][0] == ' ' && gameBoard[1][1] == 'X' && gameBoard[1][2] == ' ' && gameBoard[2][0] == ' ' && gameBoard[2][1] == ' ' && gameBoard[2][2] == ' ') {
		result = 7;
		return result;
	}
	else if (gameBoard[0][0] == 'O' && gameBoard[0][1] == ' ' && gameBoard[0][2] == ' ' && gameBoard[1][0] == 'X' && gameBoard[1][1] == 'X' && gameBoard[1][2] == ' ' && gameBoard[2][0] == ' ' && gameBoard[2][1] == ' ' && gameBoard[2][2] == ' ') {
		result = 6;
		return result;
	}
	else if (gameBoard[0][0] == 'O' && gameBoard[0][1] == ' ' && gameBoard[0][2] == ' ' && gameBoard[1][0] == ' ' && gameBoard[1][1] == 'X' && gameBoard[1][2] == 'X' && gameBoard[2][0] == ' ' && gameBoard[2][1] == ' ' && gameBoard[2][2] == ' ') {
		result = 4;
		return result;
	}
	else if (gameBoard[0][0] == 'O' && gameBoard[0][1] == ' ' && gameBoard[0][2] == ' ' && gameBoard[1][0] == ' ' && gameBoard[1][1] == 'X' && gameBoard[1][2] == ' ' && gameBoard[2][0] == 'X' && gameBoard[2][1] == ' ' && gameBoard[2][2] == ' ') {
		result = 3;
		return result;
	}
	else if (gameBoard[0][0] == 'O' && gameBoard[0][1] == ' ' && gameBoard[0][2] == ' ' && gameBoard[1][0] == ' ' && gameBoard[1][1] == 'X' && gameBoard[1][2] == ' ' && gameBoard[2][0] == ' ' && gameBoard[2][1] == 'X' && gameBoard[2][2] == ' ') {
		result = 2;
		return result;
	}
	else if (gameBoard[0][0] == 'O' && gameBoard[0][1] == ' ' && gameBoard[0][2] == ' ' && gameBoard[1][0] == ' ' && gameBoard[1][1] == 'X' && gameBoard[1][2] == ' ' && gameBoard[2][0] == ' ' && gameBoard[2][1] == ' ' && gameBoard[2][2] == 'X') {
		result = 7;
		return result;
	}
	else if (gameBoard[0][0] == 'X' && gameBoard[0][1] == 'X' && gameBoard[0][2] == ' ' && gameBoard[1][0] == ' ' && gameBoard[1][1] == 'O' && gameBoard[1][2] == ' ' && gameBoard[2][0] == ' ' && gameBoard[2][1] == ' ' && gameBoard[2][2] == ' ') {
		result = 3;
		return result;
	}
	else if (gameBoard[0][0] == 'X' && gameBoard[0][1] == ' ' && gameBoard[0][2] == 'X' && gameBoard[1][0] == ' ' && gameBoard[1][1] == 'O' && gameBoard[1][2] == ' ' && gameBoard[2][0] == ' ' && gameBoard[2][1] == ' ' && gameBoard[2][2] == ' ') {
		result = 2;
		return result;
	}
	else if (gameBoard[0][0] == 'X' && gameBoard[0][1] == ' ' && gameBoard[0][2] == ' ' && gameBoard[1][0] == 'X' && gameBoard[1][1] == 'O' && gameBoard[1][2] == ' ' && gameBoard[2][0] == ' ' && gameBoard[2][1] == ' ' && gameBoard[2][2] == ' ') {
		result = 7;
		return result;
	}
	else if (gameBoard[0][0] == 'X' && gameBoard[0][1] == ' ' && gameBoard[0][2] == ' ' && gameBoard[1][0] == ' ' && gameBoard[1][1] == 'O' && gameBoard[1][2] == 'X' && gameBoard[2][0] == ' ' && gameBoard[2][1] == ' ' && gameBoard[2][2] == ' ') {
		result = 3;
		return result;
	}
	else if (gameBoard[0][0] == 'X' && gameBoard[0][1] == ' ' && gameBoard[0][2] == ' ' && gameBoard[1][0] == ' ' && gameBoard[1][1] == 'O' && gameBoard[1][2] == ' ' && gameBoard[2][0] == 'X' && gameBoard[2][1] == ' ' && gameBoard[2][2] == ' ') {
		result = 4;
		return result;
	}
	else if (gameBoard[0][0] == 'X' && gameBoard[0][1] == ' ' && gameBoard[0][2] == ' ' && gameBoard[1][0] == ' ' && gameBoard[1][1] == 'O' && gameBoard[1][2] == ' ' && gameBoard[2][0] == ' ' && gameBoard[2][1] == 'X' && gameBoard[2][2] == ' ') {
		result = 7;
		return result;
	}
	else if (gameBoard[0][0] == 'X' && gameBoard[0][1] == ' ' && gameBoard[0][2] == ' ' && gameBoard[1][0] == ' ' && gameBoard[1][1] == 'O' && gameBoard[1][2] == ' ' && gameBoard[2][0] == ' ' && gameBoard[2][1] == ' ' && gameBoard[2][2] == 'X') {
		result = 2;
		return result;
	}
	else if (gameBoard[0][0] == ' ' && gameBoard[0][1] == 'X' && gameBoard[0][2] == 'X' && gameBoard[1][0] == ' ' && gameBoard[1][1] == 'O' && gameBoard[1][2] == ' ' && gameBoard[2][0] == ' ' && gameBoard[2][1] == ' ' && gameBoard[2][2] == ' ') {
		result = 1;
		return result;
	}
	else if (gameBoard[0][0] == ' ' && gameBoard[0][1] == 'X' && gameBoard[0][2] == ' ' && gameBoard[1][0] == 'X' && gameBoard[1][1] == 'O' && gameBoard[1][2] == ' ' && gameBoard[2][0] == ' ' && gameBoard[2][1] == ' ' && gameBoard[2][2] == ' ') {
		result = 1;
		return result;
	}
	else if (gameBoard[0][0] == ' ' && gameBoard[0][1] == 'X' && gameBoard[0][2] == ' ' && gameBoard[1][0] == ' ' && gameBoard[1][1] == 'O' && gameBoard[1][2] == 'X' && gameBoard[2][0] == ' ' && gameBoard[2][1] == ' ' && gameBoard[2][2] == ' ') {
		result = 3;
		return result;
	}
	else if (gameBoard[0][0] == ' ' && gameBoard[0][1] == 'X' && gameBoard[0][2] == ' ' && gameBoard[1][0] == ' ' && gameBoard[1][1] == 'O' && gameBoard[1][2] == ' ' && gameBoard[2][0] == 'X' && gameBoard[2][1] == ' ' && gameBoard[2][2] == ' ') {
		result = 1;
		return result;
	}
	else if (gameBoard[0][0] == ' ' && gameBoard[0][1] == 'X' && gameBoard[0][2] == ' ' && gameBoard[1][0] == ' ' && gameBoard[1][1] == 'O' && gameBoard[1][2] == ' ' && gameBoard[2][0] == ' ' && gameBoard[2][1] == 'X' && gameBoard[2][2] == ' ') {
		result = 1;
		return result;
	}
	else if (gameBoard[0][0] == ' ' && gameBoard[0][1] == 'X' && gameBoard[0][2] == ' ' && gameBoard[1][0] == ' ' && gameBoard[1][1] == 'O' && gameBoard[1][2] == ' ' && gameBoard[2][0] == ' ' && gameBoard[2][1] == ' ' && gameBoard[2][2] == 'X') {
		result = 3;
		return result;
	}
	else if (gameBoard[0][0] == ' ' && gameBoard[0][1] == ' ' && gameBoard[0][2] == 'X' && gameBoard[1][0] == 'X' && gameBoard[1][1] == 'O' && gameBoard[1][2] == ' ' && gameBoard[2][0] == ' ' && gameBoard[2][1] == ' ' && gameBoard[2][2] == ' ') {
		result = 1;
		return result;
	}
	else if (gameBoard[0][0] == ' ' && gameBoard[0][1] == ' ' && gameBoard[0][2] == 'X' && gameBoard[1][0] == ' ' && gameBoard[1][1] == 'O' && gameBoard[1][2] == 'X' && gameBoard[2][0] == ' ' && gameBoard[2][1] == ' ' && gameBoard[2][2] == ' ') {
		result = 9;
		return result;
	}
	else if (gameBoard[0][0] == ' ' && gameBoard[0][1] == ' ' && gameBoard[0][2] == 'X' && gameBoard[1][0] == ' ' && gameBoard[1][1] == 'O' && gameBoard[1][2] == ' ' && gameBoard[2][0] == 'X' && gameBoard[2][1] == ' ' && gameBoard[2][2] == ' ') {
		result = 6;
		return result;
	}
	else if (gameBoard[0][0] == ' ' && gameBoard[0][1] == ' ' && gameBoard[0][2] == 'X' && gameBoard[1][0] == ' ' && gameBoard[1][1] == 'O' && gameBoard[1][2] == ' ' && gameBoard[2][0] == ' ' && gameBoard[2][1] == 'X' && gameBoard[2][2] == ' ') {
		result = 9;
		return result;
	}
	else if (gameBoard[0][0] == ' ' && gameBoard[0][1] == ' ' && gameBoard[0][2] == 'X' && gameBoard[1][0] == ' ' && gameBoard[1][1] == 'O' && gameBoard[1][2] == ' ' && gameBoard[2][0] == ' ' && gameBoard[2][1] == ' ' && gameBoard[2][2] == 'X') {
		result = 6;
		return result;
	}
	else if (gameBoard[0][0] == ' ' && gameBoard[0][1] == ' ' && gameBoard[0][2] == ' ' && gameBoard[1][0] == 'X' && gameBoard[1][1] == 'O' && gameBoard[1][2] == 'X' && gameBoard[2][0] == ' ' && gameBoard[2][1] == ' ' && gameBoard[2][2] == ' ') {
		result = 3;
		return result;
	}
	else if (gameBoard[0][0] == ' ' && gameBoard[0][1] == ' ' && gameBoard[0][2] == ' ' && gameBoard[1][0] == 'X' && gameBoard[1][1] == 'O' && gameBoard[1][2] == ' ' && gameBoard[2][0] == 'X' && gameBoard[2][1] == ' ' && gameBoard[2][2] == ' ') {
		result = 1;
		return result;
	}
	else if (gameBoard[0][0] == ' ' && gameBoard[0][1] == ' ' && gameBoard[0][2] == ' ' && gameBoard[1][0] == 'X' && gameBoard[1][1] == 'O' && gameBoard[1][2] == ' ' && gameBoard[2][0] == ' ' && gameBoard[2][1] == 'X' && gameBoard[2][2] == ' ') {
		result = 7;
		return result;
	}
	else if (gameBoard[0][0] == ' ' && gameBoard[0][1] == ' ' && gameBoard[0][2] == ' ' && gameBoard[1][0] == 'X' && gameBoard[1][1] == 'O' && gameBoard[1][2] == ' ' && gameBoard[2][0] == ' ' && gameBoard[2][1] == ' ' && gameBoard[2][2] == 'X') {
		result = 7;
		return result;
	}
	else if (gameBoard[0][0] == ' ' && gameBoard[0][1] == ' ' && gameBoard[0][2] == ' ' && gameBoard[1][0] == ' ' && gameBoard[1][1] == 'O' && gameBoard[1][2] == 'X' && gameBoard[2][0] == 'X' && gameBoard[2][1] == ' ' && gameBoard[2][2] == ' ') {
		result = 9;
		return result;
	}
	else if (gameBoard[0][0] == ' ' && gameBoard[0][1] == ' ' && gameBoard[0][2] == ' ' && gameBoard[1][0] == ' ' && gameBoard[1][1] == 'O' && gameBoard[1][2] == 'X' && gameBoard[2][0] == ' ' && gameBoard[2][1] == 'X' && gameBoard[2][2] == ' ') {
		result = 9;
		return result;
	}
	else if (gameBoard[0][0] == ' ' && gameBoard[0][1] == ' ' && gameBoard[0][2] == ' ' && gameBoard[1][0] == ' ' && gameBoard[1][1] == 'O' && gameBoard[1][2] == ' ' && gameBoard[2][0] == 'X' && gameBoard[2][1] == ' ' && gameBoard[2][2] == 'X') {
		result = 3;
		return result;
	}
	else if (gameBoard[0][0] == ' ' && gameBoard[0][1] == ' ' && gameBoard[0][2] == ' ' && gameBoard[1][0] == ' ' && gameBoard[1][1] == 'O' && gameBoard[1][2] == ' ' && gameBoard[2][0] == 'X' && gameBoard[2][1] == 'X' && gameBoard[2][2] == ' ') {
		result = 9;
		return result;
	}
	else if (gameBoard[0][0] == ' ' && gameBoard[0][1] == ' ' && gameBoard[0][2] == ' ' && gameBoard[1][0] == ' ' && gameBoard[1][1] == 'O' && gameBoard[1][2] == ' ' && gameBoard[2][0] == 'X' && gameBoard[2][1] == ' ' && gameBoard[2][2] == 'X') {
		result = 8;
		return result;
	}
	else if (gameBoard[0][0] == ' ' && gameBoard[0][1] == ' ' && gameBoard[0][2] == ' ' && gameBoard[1][0] == ' ' && gameBoard[1][1] == 'O' && gameBoard[1][2] == ' ' && gameBoard[2][0] == ' ' && gameBoard[2][1] == 'X' && gameBoard[2][2] == 'X') {
		result = 7;
		return result;
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
	int i;
	int spot;
	int turn;

	for (i = 1; ; i++) {

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

		while (spot < 1 || spot > 9 || slot == 0) {
			printf("Invalid move, choose another slot!\n");
			printf("Slot:   ");
			scanf("%i", &spot);
		}
		while (1) {
			if ((spot == 1 && turn != 2 && gameBoard[0][0] == 'X') || (spot == 1 && turn != 2 && gameBoard[0][0] == 'O')) {
				printf("Invalid move, choose another slot!\n");
				printf("Slot:   ");
				scanf("%i", &spot);
			}
			else if ((spot == 2 && turn != 2 && gameBoard[0][1] == 'X') || (spot == 2 && turn != 2 && gameBoard[0][1] == 'O')) {
				printf("Invalid move, choose another slot!\n");
				printf("Slot:   ");
				scanf("%i", &spot);
			}
			else if ((spot == 3 && turn != 2 && gameBoard[0][2] == 'X') || (spot == 3 && turn != 2 && gameBoard[0][2] == 'O')) {
				printf("Invalid move, choose another slot!\n");
				printf("Slot:   ");
				scanf("%i", &spot);
			}
			else if ((spot == 4 && turn != 2 && gameBoard[1][0] == 'X') || (spot == 4 && turn != 2 && gameBoard[1][0] == 'O')) {
				printf("Invalid move, choose another slot!\n");
				printf("Slot:   ");
				scanf("%i", &spot);
			}
			else if ((spot == 5 && turn != 2 && gameBoard[1][1] == 'X') || (spot == 5 && turn != 2 && gameBoard[1][1] == 'O')) {
				printf("Invalid move, choose another slot!\n");
				printf("Slot:   ");
				scanf("%i", &spot);
			}
			else if ((spot == 6 && turn != 2 && gameBoard[1][2] == 'X') || (spot == 6 && turn != 2 && gameBoard[1][2] == 'O')) {
				printf("Invalid move, choose another slot!\n");
				printf("Slot:   ");
				scanf("%i", &spot);
			}
			else if ((spot == 7 && turn != 2 && gameBoard[2][0] == 'X') || (spot == 7 && turn != 2 && gameBoard[2][0] == 'O')) {
				printf("Invalid move, choose another slot!\n");
				printf("Slot:   ");
				scanf("%i", &spot);
			}
			else if ((spot == 8 && turn != 2 && gameBoard[2][1] == 'X') || (spot == 8 && turn != 2 && gameBoard[2][1] == 'O')) {
				printf("Invalid move, choose another slot!\n");
				printf("Slot:   ");
				scanf("%i", &spot);
			}
			else if ((spot == 9 && turn != 2 && gameBoard[2][2] == 'X') || (spot == 9 && turn != 2 && gameBoard[2][2] == 'O')) {
				printf("Invalid move, choose another slot!\n");
				printf("Slot:   ");
				scanf("%i", &spot);
			}
			else break;
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
	}

	system("pause");
}