
#include "Boat.h"

#include <iostream>
#include <string>
using namespace std;

Boat::Boat() {
  foodLeft = 25;
  woodLeft = 25;
  healthLeft = 50;
  crewLeft = 5;
  goldLeft = 15;
}

void Boat::printStatus() {
  cout << "Your current status:" << endl;
  cout << "Health: " << getHealth() << endl;
  cout << "Food: " << getFood() << endl;
  cout << "Wood: " << getWood() << endl;
  cout << "Crew Members: " << getCrew() << endl;
  cout << "Gold: " << getGold() <<  endl;
}

void Boat::setFood(int _food) {
  foodLeft += _food;
  if (foodLeft <= 0) {
    cout << "You and your crew ran out of food! Because of this you all died of starvation. Better luck next time!" << endl;
  }
}

void Boat::setHealth(int _health) {
  healthLeft += _health;
  if (healthLeft <= 0) {
    cout << "Your health hit 0 meaning you somehow died. Maybe try making a better decision next time!" << endl;
  }
}

void Boat::setWood(int _wood) {
  woodLeft += _wood;
  if (woodLeft <= 0) {
    cout << "Your wood supply ran out and you weren't able to keep up with your ship's repairs! Your ship sank and you and your crew did along with it!" << endl;
  }
}

void Boat::setCrew(int _crew) {
crewLeft += _crew;
  if (crewLeft <= 0) {
    cout << "Your entire crew died, and you had to return to your home country as a failure! Try again next time!" << endl;
  }
}

void Boat::setGold(int _gold) {
goldLeft += _gold;
}

int Boat::getFood() {
  return foodLeft;
}

int Boat::getHealth() {
  return healthLeft;
}

int Boat::getWood() {
  return woodLeft;
}

int Boat::getCrew() {
  return crewLeft;
}

int Boat::getGold() {
  return goldLeft;
}