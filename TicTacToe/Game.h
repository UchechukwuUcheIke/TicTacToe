#pragma once
#include "Board.h"
#include "Player.h"
#include <queue>

class Game
{
public:
	Game();
	void takeTurn();
	void resetGame();


private:
	Board board;
	std::queue<Player> players;
	Player current_player;
};
