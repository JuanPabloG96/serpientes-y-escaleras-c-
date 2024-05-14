#include "../include/board.h";

board::board()
{
  rows = 10;
  columns = 10;
  total_positions = rows * columns;
}

board::board(int rows, int columns)
    : rows(rows), columns(columns)
{
  total_positions = rows * columns;
}

board::~board()
{
}
void board::printBoard(std::vector<int> player_pos)
{
}