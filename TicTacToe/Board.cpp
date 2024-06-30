#include "Board.h"
#include <cassert>

Board::Board() {
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

std::vector<std::vector<char>> Board::getBoard() {
    return this->board;
}

size_t Board::getNumRows() {
    return this->num_rows;
}
size_t Board::getNumCols() {
    return this->num_cols;
}

void Board::display() const {
}

bool Board::isSpaceOpen(int row, int col) {
    return this->board[row][col] == ' ';
}

bool Board::checkMoveWithinBounds(int row, int col) {
    int num_rows = this->num_rows;
    int num_cols = this->num_cols;

    bool row_valid = row >= 0 && row < num_rows;
    bool col_valid = col >= 0 && col < num_cols;
    return row_valid && col_valid;
}
bool Board::makeMove(int row, int col, char token) {
    //TODO: Add a check that ensures the move is within the bounds of the board
    if (!checkMoveWithinBounds(row, col)) {
        return false;
    }

    if (!this->isSpaceOpen(row, col)) {
        return false;
    }

    this->board[row][col] = token;
    return true;
}

bool Board::isFull() const {
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

bool Board::checkWin(char player) const {
    // Check the rows
    size_t num_rows = this->num_rows;
    for (size_t row = 0; row < num_cols; row++) {
        if (this->checkRow(row, player)) {
            return true;
        }
    }

        // Check the columns
    size_t num_cols = this->num_cols;
    for (size_t col = 0; col < num_cols; col++) {
        if (this->checkCol(col, player)) {
            return true;
        }
    }

    if (checkDiagonal(player)) {
        return true;
    }

    if (checkAntiDiagonal(player)) {
        return true;
    }


    return false;
}

bool Board::checkRow(int row, char player) const {
    size_t cols = this->num_cols;
    for (size_t col = 0; col < cols; col++) {
        char space = this->board[row][col];
        if (space != player) {
            return false;
        }
    }

    return true;
}

bool Board::checkCol(int col, char player) const {
    size_t rows = this->num_rows;
    for (size_t row = 0; row < rows; row++) {
        char space = this->board[row][col];
        if (space != player) {
            return false;
        }
    }

    return true;
}

bool Board::checkDiagonal(char player) const {
    // Check the Top Left to Bottom Right

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

    return true;

}
bool Board::checkAntiDiagonal(char player) const {
    // Check the Bottom Left to Top Right
    size_t num_cols = this->num_cols;
    for (size_t row = 0; row < num_rows; row++) {
        size_t col = num_cols - row - 1;
        char space = this->board[row][col];
        if (space != player) {
            return false;
        }
    }

    return true;
}

void Board::resetBoard() {
    this->board =
    {
        {' ',' ',' '},
        {' ',' ',' '},
        {' ',' ',' '}
    };
}

std::ostream& operator<<(std::ostream& os, Board& board) {
    size_t rows = board.getNumRows();
    size_t cols = board.getNumCols();
    std::vector<std::vector<char>> board_vector = board.getBoard();

    for (size_t row = 0; row < rows; row++) {
        for (size_t col = 0; col < cols; col++) {
            os << "|" << board_vector[row][col];
        }
        os << "|\n";
    }

    return os;
}