#include "board.h"
#include <iostream>
using namespace std;
void Board::printBoard()
{
	for (int row = 0; row < 8; row++) {
		for (int col = 0;col < 8; col++) {
			cout << board[8 * row + col] << ' ';
		}
		cout << endl;
	}
}

void Board::moveLeftUP(Board &Board , int pos)
{
	int row, col;
	row = pos / 8;
	col = pos % 8;
	Board.board[pos] = ' ';
	Board.board[8 * (row - 1) + (col-1)] = 'a';
}
void Board::moveRightUP(Board &Board, int pos)
{
	int row, col;
	row = pos / 8;
	col = pos % 8;
	Board.board[pos] = ' ';
	Board.board[8 * (row - 1) + (col + 1)] = 'a';
}
void Board::moveStraight(Board &Board, int pos)
{
	int row, col;
	row = pos / 8;
	col = pos % 8;
	Board.board[pos] = ' ';
	Board.board[pos-8] = 'a';
}
