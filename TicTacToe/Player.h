#pragma once

class Player {
public:
	Player(char token);
	char getToken();
	void setToken(char new_token);

private:

	char token;

};