#ifndef BOAT_H
#define BOAT_H

#include <iostream>
#include <string>
using namespace std;

class Boat {
private:
  int crewLeft;
  int woodLeft;
  int healthLeft;
  int foodLeft;
  int goldLeft;

public:
  Boat();
  void printStatus();
  void setFood(int _food);
  void setHealth(int _health);
  void setWood(int _wood);
  void setCrew(int _crew);
  int getFood();
  int getHealth();
  int getWood();
  int getCrew();
  int getGold();
  void setGold(int _gold);
};
#endif