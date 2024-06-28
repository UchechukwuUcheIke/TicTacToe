#include "pch.h"
#include "CppUnitTest.h"
#include "../TicTacToe/Game.h"

#include <vector>
#include <cstdlib> 
#include <iostream>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace GameUnitTest
{
	TEST_CLASS(BoardUnitTest)
	{
	public:
		Game* game;
		std::vector<std::vector<char>> expected_board;
		// This method runs before each test method.
		TEST_METHOD_INITIALIZE(Setup)
		{
			// Setup code 
			expected_board =
			{
				{' ', ' ', ' '},
				{' ', ' ', ' '},
				{' ', ' ', ' '}
			};
			game = new Game();
			size_t num_rows = game_board.getNumRows();
			size_t num_cols = game_board.getNumCols();
		}

		TEST_METHOD(Test_Game_Init)
		{

			Board game_board = game->getBoard();
			Assert::IsTrue(game_board.getBoard() == expected_board, L"Unexpected value for <subsets>");

			// Ensure the game starts off with Player one moving first
			Player player1 = game->getPlayer1();
			Player player2 = game->getPlayer2();
			Player current_player = game->getCurrentPlayer();
			Assert::IsTrue(player1 == current_player, L"Players are not equal");

			Assert::AreEqual('x', player1.getToken());
			Assert::AreEqual('o', player2.getToken());
		}

		TEST_METHOD(Test_Game_TakeTurn_OneTurn)
		{
			Board game_board = game->getBoard();
			
			size_t row = rand() % num_rows;
			size_t col = rand() % num_cols;
			game->takeTurn(row, col);

			expected_board[row][col] = 'x';


			Player current_player = game->getCurrentPlayer();
			Player player2 = game->getPlayer2();
			Assert::IsTrue(player2 == current_player, L"Players are not equal");
			std::vector<std::vector<char>> actual_board = game_board.getBoard();
			game_board = game->getBoard();
			Assert::IsTrue(game_board.getBoard() == expected_board, L"Unexpected value for <subsets>");
			
		}

		TEST_METHOD(Test_Game_TakeTurn_MultipleTurns)
		{
			Board game_board = game->getBoard();
			size_t num_rows = game_board.getNumRows();
			size_t num_cols = game_board.getNumCols();

			size_t first_row = rand() % num_rows;
			size_t first_col = rand() % num_cols;
			size_t second_row = rand() % num_rows;
			size_t second_col = rand() % num_cols;
			game->takeTurn(first_row, first_col);
			game->takeTurn(second_row, second_col);

			expected_board[first_row][first_col] = 'x';
			expected_board[second_row][second_col] = 'o';

			Player current_player = game->getCurrentPlayer();
			Player player1 = game->getPlayer1();
			Assert::IsTrue(player1 == current_player, L"Players are not equal");
			//std::vector<std::vector<char>> actual_board = game_board.getBoard();
			game_board = game->getBoard();
			Assert::IsTrue(game_board.getBoard() == expected_board, L"Unexpected value for <subsets>");

		}
		//TODO: Finish test cases for check winner
		TEST_METHOD(Test_Game_CheckWinner_NoWin)
		{
			Board game_board = game->getBoard();

		}

	};
}