#include <string>

class player
{
private:
  std::string name;
  bool winner;
  int actual_position;

public:
  player();
  player(std::string n);
  void setName(std::string n);
  std::string getName();
  void setPosition(int pos);
  int getPosition();
};