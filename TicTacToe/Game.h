#pragma once
#include "Board.h"
#include "Player.h"
#include <queue>

class Game
{
public:
	Game();
	void takeTurn(size_t row, size_t col);
	bool checkWinner();
	Player getCurrentPlayer();
	void resetGame();

private:
	Board board;
	Player player1;
	Player player2;
	Player current_player;

	void swapPlayer();
};
