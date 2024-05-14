#include "../include/player.h";

player::player()
{
  name = "player";
  winner = false;
  actual_position = 0;
}
player::player(std::string n)
{
  name = n;
  winner = false;
  actual_position = 0;
}
void player::setName(std::string n)
{
  name = n;
}
std::string player::getName()
{
  return name;
}
void player::setPosition(int pos)
{
  actual_position = pos;
}
int player::getPosition()
{
  return actual_position;
}