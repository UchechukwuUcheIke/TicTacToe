#pragma once
#include "Board.h"
#include "Player.h"
#include <queue>

class Game
{
public:
	Game();
	bool takeTurn(size_t row, size_t col);
	bool cpuTakeTurn();
	bool checkWinner();
	bool isStalemate();
	void resetGame();
	void swapPlayer();

	Player getCurrentPlayer();
	Player getPlayer1();
	Player getPlayer2();
	Board getBoard();

private:
	Board board;
	Player player1;
	Player player2;
	Player current_player;

	
};
