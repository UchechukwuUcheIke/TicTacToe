#include "Board.h"
#include <cassert>

class Board {
public:
    Board() {
        size_t board_width = 3;
        size_t board_height = 3;

        this->num_rows = board_width;
        this->num_cols = board_height;

        assert(this->num_rows == this->num_cols);
        this->board =
        {
            {' ',' ',' '},
            {' ',' ',' '},
            {' ',' ',' '}
        };
    }
    void display() const {

    }

    bool isSpaceOpen(int row, int col, char player) {
        return this->board[row][col] == ' ';
    }

    void makeMove(int row, int col, char token) {
        this->board[row][col] = token;
    }

    bool isFull() const {
        //Check each index in the 
        size_t num_rows = this->num_rows;
        size_t num_cols = this->num_cols;
        for (size_t row = 0; row < num_rows; row++) {
            for (size_t col = 0; col < num_cols; col++) {
                char space = this->board[row][col];
                if (space == ' ') {
                    return false;
                }
            }
        }

        return true;
    }

    bool checkWin(char player) const {
        // Check the rows
        size_t num_rows = this->num_rows;
        for (size_t row; row < num_cols; row++) {
            if (this->checkRow(row, player)) {
                return true;
            }
        }

        // Check the columns
        size_t num_cols = this->num_cols;
        for (size_t col; col < num_cols; col++) {
            if (this->checkCol(col, player)) {
                return true;
            }
        }

        if (checkDiagonals(player)) {
            return true;
        }

        return false;
    }

private:
    std::vector<std::vector<char>> board;
    size_t num_rows;
    size_t num_cols;

    bool checkRow(int row, char player) const {
        size_t cols = this->num_cols;
        for (size_t col = 0; col < cols; col++) {
            char space = this->board[row][col];
            if (space != player) {
                return false;
            }
        }

        return true;
    }
    bool checkCol(int col, char player) const {
        size_t rows = this->num_rows;
        for (size_t row = 0; row < rows; row++) {
            char space = this->board[row][col];
            if (space != player) {
                return false;
            }
        }

        return true;
    }
    bool checkDiagonals(char player) const {
        // Check the Diagonal (Top Left to Bottom Right)

        // Assuming the number of rows and columns in the board are the same
        size_t num_rows = this->num_rows;
        for (size_t idx = 0; idx < num_rows; idx++) {
            size_t row = idx;
            size_t col = idx;
            char space = this->board[row][col];
            if (space != player) {
                return false;
            }
        }

        // Check the AntiDiagonal (Bottom Left to Top Right)
        size_t num_cols = this->num_cols;
        for (size_t row = 0; row < num_rows; row++) {
            size_t col = num_cols - row;
            char space = this->board[row][col];
            if (space != player) {
                return false;
            }
        }

        return true;
    }
};