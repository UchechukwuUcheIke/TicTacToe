#include "Game.h"
#include <cstdlib> 

Game::Game() {
	this->board = Board();
	Player player1 = Player('x');
	Player player2 = Player('o');
	
	this->player1 = player1;
	this->player2 = player2;
	this->current_player = this->player1;
}

bool Game::takeTurn(size_t row, size_t col) {

	Player current_player = this->current_player;
	char player_token = current_player.getToken();
	//TODO: Check whether the move is valid. The board should report if makeMove was successful
	bool move_successful = this->board.makeMove(row, col, player_token);
	if (!move_successful) {
		return false;
	}
	return true;
}

bool Game::cpuTakeTurn() {
	size_t num_rows = this->board.getNumRows();
	size_t num_cols = this->board.getNumCols();
	std::vector<size_t> free_spaces = std::vector<size_t>();
	for (size_t row = 0; row < num_rows; row++) {
		for (size_t col = 0; col < num_cols; col++) {
			size_t space_idx = (row * num_cols) + col;
			free_spaces.push_back(space_idx);
		}
	}

	size_t num_free_spaces = free_spaces.size();
	if (num_free_spaces == 0) {
		// CPU move was unsuccessful
		return false;
	}

	size_t idx = rand() % num_free_spaces;
	size_t space_idx = free_spaces.at(idx);

	size_t row = space_idx / num_cols;
	size_t col = space_idx % num_cols;

	return this->takeTurn(row, col);
}

bool Game::isStalemate() {
	return this->board.isFull();
}

bool Game::checkWinner() {
	Board board = this->board;

	Player current_player = this->current_player;
	char player_token = current_player.getToken();

	return board.checkWin(player_token);
}

void Game::swapPlayer() {
	Player current_player = this->current_player;
	if (current_player == this->player1) {
		this->current_player = this->player2;
	}
	else {
		this->current_player = this->player1;
	}
}
Player Game::getCurrentPlayer() {
	return this->current_player;
}

Board Game::getBoard() {
	return this->board;
}

Player Game::getPlayer1() {
	return this->player1;
}

Player Game::getPlayer2() {
	return this->player2;
}


void Game::resetGame() {
	this->board.resetBoard();
	this->current_player = this->player1;
}
