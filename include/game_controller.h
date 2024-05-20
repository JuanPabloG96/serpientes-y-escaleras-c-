#include "include/player.h"
#include "include/board.h"

class gameController
{
private:
  int num_players;
  bool gameover;
  std::vector<player> players;

public:
  gameController();
  gameController(int np);
  ~gameController();
  void start();
  void menu();
  void setNumberPlayers(int np);
  int getNumberPlayers();
};
