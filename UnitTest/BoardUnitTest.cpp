#include "pch.h"
#include "CppUnitTest.h"
#include "../TicTacToe/Board.h"

#include <vector>
#include <cstdlib> 

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace BoardUnitTest
{

	TEST_CLASS(BoardUnitTest)
	{
	public:
		Board* board;
		size_t num_rows;
		size_t num_cols;
		std::vector<std::vector<char>> expected_board;

		// This method runs before each test method.
		TEST_METHOD_INITIALIZE(Setup)
		{
			// Setup code 
			board = new Board();
			num_rows = board->getNumRows();
			num_cols = board->getNumCols();

			expected_board =
			{
				{' ', ' ', ' '},
				{' ', ' ', ' '},
				{' ', ' ', ' '}
			};
		}
		
		TEST_METHOD(Test_Board_Init)
		{
			size_t expected_cols = 3;
			size_t expected_rows = 3;
			
			Assert::AreEqual(num_cols, expected_cols);
			Assert::AreEqual(num_rows, expected_rows);

			Assert::IsTrue(board->getBoard() == expected_board, L"Unexpected value for <subsets>");
		}
		TEST_METHOD(Test_MakeMove_OneMove)
		{
			size_t row = rand() % num_rows;
			size_t col = rand() % num_cols;
			char token = 'x';

			board->makeMove(row, col, token);

			expected_board[row][col] = token;

			Assert::IsTrue(board->getBoard() == expected_board, L"Unexpected value for <subsets>");
		}
		TEST_METHOD(Test_MakeMove_MultipleMoves)
		{
			char first_token = 'x';
			char second_token = 'o';

			size_t num_rows = board->getNumRows();
			size_t num_cols = board->getNumCols();

			size_t first_row = rand() % num_rows;
			size_t first_col = rand() % num_cols;

			board->makeMove(first_row, first_col, first_token);

			size_t second_row = rand() % num_rows;
			size_t second_col = rand() % num_cols;
			
			board->makeMove(second_row, second_col, second_token);

			expected_board[first_row][first_col] = first_token;
			expected_board[second_row][second_col] = second_token;

			Assert::IsTrue(board->getBoard() == expected_board, L"Unexpected value for <subsets>");
		}

		TEST_METHOD(Test_IsSpaceOpen_EmptySpace) {
			size_t row = rand() % num_rows;
			size_t col = rand() % num_cols;

			bool isOpen = board->isSpaceOpen(row, col);
			Assert::IsTrue(isOpen);
		}
		TEST_METHOD(Test_IsSpaceOpen_FullSpace) {
			size_t row = rand() % num_rows;
			size_t col = rand() % num_cols;
			char token = 'x';

			board->makeMove(row, col, token);
			bool isOpen = board->isSpaceOpen(row, col);
			Assert::IsFalse(isOpen);
		}

		TEST_METHOD(Test_IsFull_EmptyBoard) {
			bool isFull = board->isFull();
			Assert::IsFalse(isFull);
		}
		TEST_METHOD(Test_IsFull_PartiallyFullBoard) {
			size_t num_moves = 5;

			for (size_t i = 0; i < num_moves; i++) {
				size_t row = rand() % num_rows;
				size_t col = rand() % num_cols;

				board->makeMove(row, col, 'x');
			}

			bool isFull = board->isFull();
			Assert::IsFalse(isFull);
		}
		TEST_METHOD(Test_IsFull_FullBoard) {
			size_t num_moves = 5;
			

			for (size_t row = 0; row < num_rows; row++) {
				for (size_t col = 0; col < num_cols; col++) {
					board->makeMove(row, col, 'x');
				}
			}

			bool isFull = board->isFull();
			Assert::IsTrue(isFull);
		}

		TEST_METHOD(Test_CheckWin_NoWin_EmptyBoard) {
			char player = 'x';
			bool hasWon = board->checkWin(player);
			Assert::IsFalse(hasWon);
		}
		TEST_METHOD(Test_CheckWin_RowWin) {
			char player = 'x';

			size_t row = rand() % num_rows;
			for (size_t col = 0; col < num_cols; col++) {
				board->makeMove(row, col, player);
			}

			bool hasWon = board->checkWin(player);
			Assert::IsTrue(hasWon);
		}
		TEST_METHOD(Test_CheckWin_ColWin) {
			char player = 'x';

			size_t col = rand() % num_rows;
			for (size_t row = 0; row < num_rows; row++) {
				board->makeMove(row, col, player);
			}

			bool hasWon = board->checkWin(player);
			Assert::IsTrue(hasWon);
		}
		TEST_METHOD(Test_CheckWin_DiagonalWin) {
			char player = 'x';

			for (size_t row = 0; row < num_rows; row++) {
				size_t col = row;
				board->makeMove(row, col, player);
			}

			bool hasWon = board->checkWin(player);
			Assert::IsTrue(hasWon);
		}
		TEST_METHOD(Test_CheckWin_AntiDiagonalWin) {
			char player = 'x';

			for (size_t row = 0; row < num_rows; row++) {
				size_t col = num_cols - row - 1;
				board->makeMove(row, col, player);
			}

			bool hasWon = board->checkWin(player);
			Assert::IsTrue(hasWon);
		}

		TEST_METHOD(Test_CheckWin_NoWin_OpponentWin) {
			char player = 'x';
			char opponent = 'o';

			for (size_t row = 0; row < num_rows; row++) {
				for (size_t col = 0; col < num_cols; col++) {
					board->makeMove(row, col, opponent);
				}
			}

			bool hasWon = board->checkWin(player);
			Assert::IsFalse(hasWon);
		}

		//TODO: Add a test case that checks if a move on the board is valid
	};
}
