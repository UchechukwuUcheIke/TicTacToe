#include "pch.h"
#include "CppUnitTest.h"
#include "../TicTacToe/Player.h"

#include <vector>
#include <cstdlib> 

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace PlayerUnitTest
{
	TEST_CLASS(BoardUnitTest)
	{
	public:
		Player* player;
		char token = 'x';
		// This method runs before each test method.
		TEST_METHOD_INITIALIZE(Setup)
		{
			// Setup code 
			player = new Player(token);
		}

		TEST_METHOD(Test_Player_Init)
		{
			char get_token = player->getToken();
			Assert::AreEqual(get_token, token);
		}

		TEST_METHOD(Test_SetToken)
		{
			char new_token = 'o';
			player->setToken(new_token);
			char get_token = player->getToken();
			Assert::AreEqual(get_token, new_token);
		}
	};
}