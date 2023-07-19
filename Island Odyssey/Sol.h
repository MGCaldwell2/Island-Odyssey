#ifndef SOL_H
#define SOL_H

#include <iostream>
#include <string>
#include "Island.h"
using namespace std;

class Sol : public Island {
  private:
    
    int plusFood;
    int plusWood;
    int plusCrew;
    
  public:
    void printDescription();
    void setTreasureAmount();
    int getTreasureFood();
    int getTreasureWood();
    int getTreasureCrew();
    void Encounter();
};
#endif