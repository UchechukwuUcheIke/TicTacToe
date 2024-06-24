#pragma once

#include <vector>

class Board {
public:
    Board();

    void display() const;
    bool isSpaceOpen(int row, int col, char player);
    bool makeMove(int row, int col, char player);
    bool isFull() const;
    bool checkWin(char player) const;

private:
    std::vector<std::vector<char>> board;
    size_t num_rows;
    size_t num_cols;

    bool checkRow(int row, char player) const;
    bool checkCol(int col, char player) const;
    bool checkDiagonals(char player) const;
};