#include "Board.h"

class Board {
public:
    Board() {
        size_t board_width = 3;
        size_t board_height = 3;

        this->num_rows = board_width;
        this->num_cols = board_height;

        this->board =
        {
            {' ',' ',' '},
            {' ',' ',' '},
            {' ',' ',' '}
        };
    }
    void display() const {

    }
    bool makeMove(int row, int col, char token) {
        this->board[row][col] = token;
    }
    bool isFull() const {
        //Check each index in the 
        size_t num_rows = this->num_rows;
        size_t num_cols = this->num_cols;
        for (size_t row = 0; row < num_rows; row++) {
            for (size_t col = 0; col < num_cols; col++) {
                char slot = this->board[row][col];
                if (slot == ' ') {
                    return false;
                }
            }
        }

        return true;
    }
    bool checkWin(char player) const {
        //Check the rows
    }

private:
    std::vector<std::vector<char>> board;
    size_t num_rows;
    size_t num_cols;

    bool checkRow(int row, char player) const {

    }
    bool checkCol(int col, char player) const {

    }
    bool checkDiagonals(char player) const {

    }
};