#include "Game.h"

Game::Game() {
	this->board = Board();
	Player player1 = Player('x');
	Player player2 = Player('o');
	
	this->player1 = player1;
	this->player1 = player1;
	this->current_player = this->player1;
}

void Game::takeTurn(size_t row, size_t col) {
	Board board = this->board;

	Player current_player = this->current_player;
	char player_token = current_player.getToken();
	board.makeMove(row, col, player_token);
	this->swapPlayer();
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
void Game::resetGame() {
	this->board.resetBoard();
	this->current_player = this->player1;
}