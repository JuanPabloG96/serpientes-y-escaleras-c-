#include <vector>
#include <iostream>

class board
{
private:
  int rows;
  int columns;
  int pos;

public:
  board();
  board(int rows, int columns);
  ~board();
  void printBoard(std::vector<int> players_pos);
};
