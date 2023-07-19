#ifndef GAME_H
#define GAME_H

#include <iostream>
#include <string>
using namespace std;

class Game {
private:
  string ship;
  string island;
  string fname;
  string CharacterName;
  int slct;
  string startNewGame;
  int answer;

public:
  void Ship();
  void PrintMenu();
  void SaveGame();
  void NewGame();

};
#endif