// Valan Adan

#include "tictactoe.h"
#include <iostream>

using namespace std;

tictactoe::tictactoe()
{
	// ************* TO DO*******************
	xturn = true;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++){
			moves[i][j] = ' ';
			}
	}
}


bool tictactoe::PlaceMove(int x, int y)
{
	// ************* TO DO*******************
	char w = ' ';
	if (xturn)
		w = 'X';
	else
		w = 'O';

	if ( (x < 0 || x > 2) || (y < 0 || y > 2))
		return false;

	if(moves[x][y] == ' ') {
		moves[x][y] = w;
		if (w == 'X')
			xturn = false;
		else
			xturn = true;
		return true;
	}
	return false;
}

void tictactoe::DrawBoard()
{
	// ************* TO DO*******************
	cout << "\n   0   1   2 ";
	cout << "\n 0";
	for (int row = 0; row < 1; row++) {
		for (int col = 0; col <= 2; col++) {
			cout << ' ' << moves[row][col] << " |";
		}
	}
	cout << "\n--------------";
	cout << "\n 1";
	for (int row = 1; row < 2; row++) {
		for (int col = 0; col <= 2; col++) {
			cout << ' ' << moves[row][col] << " |";
		}
	}
	cout << "\n--------------";
	cout << "\n 2";
	for (int row = 2; row <= 2; row++) {
		for (int col = 0; col <= 2; col++) {
			cout << ' ' << moves[row][col] << " |";
		}
	}
	if (xturn)
		cout << "\nX turn";
	else
		cout << "\nO turn";
}

bool tictactoe::GameOver()
{
	// ************* TO DO*******************
	int remSpc = 9;

	for (int row = 0; row <= 2; row++) {
		for (int col = 0; col <= 2; col++) {
			if (moves[row][col] != ' ')
				remSpc--;
			if (remSpc == 0)
				return true;
		}
	}

	if (remSpc <= 4) {
		if (moves[0][2] != ' ' || moves[1][1] != ' ' || moves[2][0] != ' ') {
			//Row 0
			if ((moves[0][0] == moves[0][1]) && (moves[0][0] == moves[0][2]))
				return true;
			//Row 1
			if ((moves[1][0] == moves[1][1]) && (moves[1][0] == moves[1][2]))
				return true;
			//Row 2
			if ((moves[2][0] == moves[2][1]) && (moves[2][0] == moves[2][2]))
				return true;
			//Column 0
			if ((moves[0][0] == moves[1][0]) && (moves[0][0] == moves[2][0]))
				return true;
			//Column 1
			if ((moves[0][1] == moves[1][1]) && (moves[0][1] == moves[2][1]))
				return true;
			//Column 2
			if ((moves[0][2] == moves[1][2]) && (moves[0][2] == moves[2][2]))
				return true;
			//Right Diagonal
			if ((moves[0][2] == moves[1][1]) && (moves[0][2] == moves[2][0]))
				return true;
			//Left Diagonal
			if ((moves[0][0] == moves[1][1]) && (moves[0][0] == moves[2][2]))
				return true;
		}
	}

	remSpc = 9;
	return false;
}

char tictactoe::Winner()
{
	// ************* TO DO*******************
	if (xturn)
		return 'X';
	return 'O';
}