#include "pch.h"
#include "CppUnitTest.h"
#include "../TicTacToe/Board.h"

#include <vector>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace BoardUnitTest
{
	TEST_CLASS(BoardUnitTest)
	{
	public:
		TEST_METHOD(Test_Board_Init)
		{
			size_t expected_cols = 3;
			size_t expected_rows = 3;
			
			Board* board = new Board();
			
			Assert::AreEqual(board -> getNumCols(), expected_cols);
			/*
			Assert::AreEqual(board->getNumRows(), expected_rows);

			std::vector<std::vector<char>> expected_board =
			{
				{' ', ' ', ' '},
				{' ', ' ', ' '},
				{' ', ' ', ' '}
			};

			//Assert::AreEqual(board->getBoard(), expected_board);
			Assert::IsTrue(board->getBoard() == expected_board, L"Unexpected value for <subsets>");
			**/
		}
	};
}
