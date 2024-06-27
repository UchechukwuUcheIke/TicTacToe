#include "Player.h"

Player::Player(char Token) {
	this->token = token;
}

char Player::getToken() {
	return this->token;
}

void Player::setToken(char new_token) {
	this->token = new_token;
}