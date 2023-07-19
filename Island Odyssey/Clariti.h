#ifndef CLARITI_H
#define CLARITI_H

#include <iostream>
#include <string>
#include "Island.h"
#include "Xylia.h"
using namespace std;

class Clariti : public Island {
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