#include "../include/board.h";

board::board()
{
  rows = 10;
  columns = 10;
  pos = 1;
}

board::board(int rows, int columns)
    : rows(rows), columns(columns)
{
  pos = 1;
}

board::~board()
{
}
void board::printBoard(std::vector<int> player_pos)
{
  int spacing = 0;
  int start_x;
  int start_y;

  for (int y = 0; y < rows; y++)
  {
    for (int x = 0; x < columns; x++)
    {
      std::cout << pos;
      pos++;
    }
  }
}