#ifndef  GAMEBOARD_H
#define  GAMEBOARD_H

enum PlayerTurn{FIRST_PLAYER=1,SECOND_PLAYER=2};
enum GameStatus{DRAW,WIN,IN_PROGRESS};

class GameBoard
{
private:
	char data[3][3];
	int ValidMoveCount = 0;
public:
	GameBoard();
	void displayBoard();
	void markBoard(char pos ,char playerSymbol);
	bool isVlidPosition(char pos);
	bool isAlreadyMarked(char pos);
	int getValidMoveTurn();
	bool isWin();
};

#endif