#pragma once

#include <vector>

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
    size_t getNumRows();
    size_t getNumCols();


private:
    std::vector<std::vector<char>> board;
    size_t num_rows;
    size_t num_cols;

    bool checkRow(int row, char player) const;
    bool checkCol(int col, char player) const;
    bool checkDiagonal(char player) const;
    bool checkAntiDiagonal(char player) const;
};