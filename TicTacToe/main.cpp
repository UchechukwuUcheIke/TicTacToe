// main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Game.h"

int main()
{   /*
        // Very simple CLI demo of game
        Game game = Game();
        while (true) {
            Board board = game.getBoard();

            std::cout << board;
            Player current_player = game.getCurrentPlayer();
            char player_token = current_player.getToken();

            std::cout << "It's " << player_token << "'s turn!\n";
            std::cout << "Enter a row:\n";
            int row{ };
            std::cin >> row;
            std::cout << "Enter a col:\n";
            int col{ };
            std::cin >> col;
            
            bool move_successful = game.takeTurn(row, col);
            if (!move_successful) {
                std::cout << "Invalid move\n";
                continue;
            }

            bool won_game = game.checkWinner();
            if (won_game) {
                std::cout << player_token << " has won the game!\n";
                game.resetGame();
                continue;
            }

            game.swapPlayer();
        }
        */
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
