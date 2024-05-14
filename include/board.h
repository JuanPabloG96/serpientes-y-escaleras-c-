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
  void startBoard();
  void updateBoard(std::vector<int> players_pos);
};
