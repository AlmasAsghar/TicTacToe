#include<iostream>
#include<iomanip>
using namespace std;

#include "GameBoard.h"

GameBoard::GameBoard()
{
	data[0][0] = '1';
	data[0][1] = '2';
	data[0][2] = '3';
	data[1][0] = '4';
	data[1][1] = '5';
	data[1][2] = '6';
	data[2][0] = '7';
	data[2][1] = '8';
	data[2][2] = '9';
}
void GameBoard::displayBoard()
{
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<setw(4)<<data[i][j];
		}
		cout<<"\n";
	}
}
bool GameBoard::isAlreadyMarked(char pos)
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (data[i][j] == pos)
			{
				return true;
			}
		}
	}
		return false;
}
bool GameBoard::isVlidPosition(char pos)
{
	if (pos >= '1' && pos <= '9')
	{
		return true;
	}
	else
		return false;
}
int GameBoard::getValidMoveTurn()
{
	return ValidMoveCount;
}
void GameBoard::markBoard(char pos, char playerSymbol)
{

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (data[i][j] == pos)
			{
				data[i][j] = playerSymbol;
				ValidMoveCount++;
			}
		}
	}
}
bool GameBoard::isWin()
{
	
	if (data[0][0] == data[0][1] && data[0][1] == data[0][2])
		return true;
	else if (data[1][0] == data[1][1] && data[1][1] == data[1][2])
		return true;
	else if (data[2][0] == data[2][1] && data[2][1] == data[2][2])
		return true;
	else if (data[0][0] == data[1][0] && data[1][0] == data[2][0])
		return true;
	else if (data[0][1] == data[1][1] && data[1][1] == data[2][1])
		return true;
	else if (data[0][2] == data[1][2] && data[1][2] == data[2][2])
		return true;
	else if (data[0][0] == data[1][1] && data[1][1] == data[2][2])
		return true;
	else if (data[0][2] == data[1][1] && data[1][1] == data[2][0])
		return true;
	else
		return false;
}










