#include "Player.h"

Player::Player(char new_token) {
	this->token = new_token;
}

Player::Player() {
	this->token = 'x';
}

char Player::getToken() {
	return this->token;
}

void Player::setToken(char new_token) {
	this->token = new_token;
}

bool Player::operator== (const Player& other) const{
	return this->token == other.token;
}