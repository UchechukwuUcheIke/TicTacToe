#pragma once

#include <vector>
#include <iostream>

class Board {
public:
    Board();

    bool makeMove(int row, int col, char player);
    bool isSpaceOpen(int row, int col);
    bool isFull() const;
    bool checkWin(char player) const;
    void display() const;

    void resetBoard();

    std::vector<std::vector<char>> getBoard();
    char getCell(size_t row, size_t col);
    size_t getNumRows();
    size_t getNumCols();

    friend std::ostream& operator<<(std::ostream& os, Board& b);
private:
    std::vector<std::vector<char>> board;
    size_t num_rows;
    size_t num_cols;

    bool checkMoveWithinBounds(int row, int col);
    bool checkRow(int row, char player) const;
    bool checkCol(int col, char player) const;
    bool checkDiagonal(char player) const;
    bool checkAntiDiagonal(char player) const;
};