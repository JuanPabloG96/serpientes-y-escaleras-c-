#include <vector>

class board
{
private:
  int rows;
  int columns;
  int total_positions;

public:
  board();
  board(int rows, int columns);
  ~board();
  void printBoard(std::vector<int> players_pos);
};
