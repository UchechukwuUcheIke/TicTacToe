#include "pch.h"
#include "CppUnitTest.h"
#include "../TicTacToe/Game.h"

#include <vector>
#include <cstdlib> 
#include <iostream>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace GameUnitTest
{
	TEST_CLASS(GameUnitTest)
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
			Board game_board = game->getBoard();
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

			size_t num_rows = game_board.getNumRows();
			size_t num_cols = game_board.getNumCols();
			size_t row = rand() % num_rows;
			size_t col = rand() % num_cols;
			bool move_successful = game->takeTurn(row, col);

			expected_board[row][col] = 'x';

			Assert::IsTrue(move_successful);
			std::vector<std::vector<char>> actual_board = game_board.getBoard();
			game_board = game->getBoard();
			Assert::IsTrue(game_board.getBoard() == expected_board, L"Unexpected value for <subsets>");
			
		}

		TEST_METHOD(Test_Game_TakeTurn_TwoTurns_OneInvalidMove)
		{
			Board game_board = game->getBoard();

			size_t num_rows = game_board.getNumRows();
			size_t num_cols = game_board.getNumCols();
			size_t row = rand() % num_rows;
			size_t col = rand() % num_cols;

			// Player 1 choses the same spot
			game->takeTurn(row, col);
			bool move_successful = game->takeTurn(row, col);

			expected_board[row][col] = 'x';

			Assert::IsFalse(move_successful);
			std::vector<std::vector<char>> actual_board = game_board.getBoard();
			game_board = game->getBoard();
			Assert::IsTrue(game_board.getBoard() == expected_board, L"Unexpected value for <subsets>");

		}

		TEST_METHOD(Test_Game_SwapPlayer_ModOneSwap)
		{
			int num_swaps = 3 + (2 * rand()) % 10;
			for (int i = 0; i < num_swaps; i++) {
				game->swapPlayer();
			}
			

			Player current_player = game->getCurrentPlayer();
			Player player2 = game->getPlayer2();
			Assert::IsTrue(player2 == current_player, L"Players are not equal");
		}

		TEST_METHOD(Test_Game_SwapPlayer_Mod2Swaps)
		{
			int num_swaps = 2 + (2 * rand()) % 10;
			for (int i = 0; i < num_swaps; i++) {
				game->swapPlayer();
			}


			Player current_player = game->getCurrentPlayer();
			Player player1 = game->getPlayer1();
			Assert::IsTrue(player1 == current_player, L"Players are not equal");
		}

		//TODO: Finish test cases for check winner
		TEST_METHOD(Test_Game_CheckWinner_NoMoves)
		{
			Board game_board = game->getBoard();
			Assert::IsFalse(game->checkWinner());

		}

		TEST_METHOD(Test_Game_CheckWinner_NoWin)
		{
			game->takeTurn(0, 1);
			game->takeTurn(0, 0);
			/* Board State
				|O|X| |
				| | | |
				| | | |
			*/
			Assert::IsFalse(game->checkWinner());

		}

		TEST_METHOD(Test_Game_CheckWinner_RowWin)
		{
			game->takeTurn(0, 0);
			game->takeTurn(0, 1);
			game->takeTurn(0, 2);
			/* Board State
				|X|X|X|
				| |O| |
				| | |O|
			*/
			Assert::IsTrue(game->checkWinner());

		}
		TEST_METHOD(Test_Game_CheckWinner_ColWin)
		{
			game->takeTurn(0, 0);
			game->takeTurn(1, 0);
			game->takeTurn(2, 0);
			/* Board State
				|X| | |
				|X| | |
				|X| | |
			*/
			Assert::IsTrue(game->checkWinner());

		}

		TEST_METHOD(Test_Game_CheckWinner_DiagonalWin)
		{
			game->takeTurn(0, 0);
			game->takeTurn(1, 1);
			game->takeTurn(2, 2);
			/* Board State
				|X| | |
				| |X| |
				| | |X|
			*/
			Assert::IsTrue(game->checkWinner());
		}

		TEST_METHOD(Test_Game_CheckWinner_AntiDiagonalWin)
		{
			game->takeTurn(2, 0);
			game->takeTurn(1, 1);
			game->takeTurn(0, 2);
			/* Board State
				| | |X|
				| |X| |
				|X| | |
			*/
			Assert::IsTrue(game->checkWinner());
		}

	};
}