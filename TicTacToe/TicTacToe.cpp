#include<iostream>
using namespace std;

#include "TicTacToe.h"
#include "GameBoard.h"

void TicTacToe::playGame()
{
	cout<< "Game start with two players\n";

	GameBoard gb;
	cout << "___Gameboard___\n";
	gb.displayBoard();
	char player1;
	char player2;
	cout << "Enter Player one symbol:\t";
	cin >> player1;
	cout << "Enter Player two symbol:\t";
	cin >> player2;
	char playerSymbol;
	int position;
	PlayerTurn pt;


	while (gb.getValidMoveTurn() < 9)
	{
		if (gb.getValidMoveTurn() % 2 == 0)
		{
			pt = FIRST_PLAYER;
			playerSymbol = player1;
			cout << "Player  " << pt << " turn" << "\n";
		}
		else
		{
			pt = SECOND_PLAYER;
			playerSymbol = player2;
			cout << "Player  " << pt << " turn" << "\n";
		}
		cout << "\nEnter your position\n";
		cin >> position;
		if (position <= 1 && position >= 9)
		{
			cout << "\nInvalid position! Enter again\n";
		}
		else 
		{
			char pos = position+49;
			gb.isVlidPosition(pos);

			if (!gb.isVlidPosition(pos))
			{
				cout << "\nInvalid position! Enter again\n";
			}
			else
			{
				if (gb.isAlreadyMarked(pos))
				{
					gb.markBoard(pos, playerSymbol);
					gb.displayBoard();
				}
				else
					cout << "\nAlreday mark! Enter again\n";
			}
		}
		if (gb.isWin())
		{
			cout << "Player  " << pt<<" wins\n";
			return;
		}
		if (gb.getValidMoveTurn() == 9)
			cout << "\nDraw ! NO BODY wins\n";
	}

}
