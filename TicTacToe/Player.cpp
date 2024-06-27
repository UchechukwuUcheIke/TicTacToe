#include "Player.h"

Player::Player(char new_token) {
	this->token = new_token;
}

char Player::getToken() {
	return this->token;
}

void Player::setToken(char new_token) {
	this->token = new_token;
}