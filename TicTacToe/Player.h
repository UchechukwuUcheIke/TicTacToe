#pragma once

class Player {
public:
	Player(char token);
	Player();
	char getToken();
	void setToken(char new_token);
	bool operator==(const Player& other) const;
private:

	char token;

};