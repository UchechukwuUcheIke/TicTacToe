#include "pch.h"
#include "CppUnitTest.h"
#include "../TicTacToe/Board.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Board* board = new Board();
		}
	};
}
