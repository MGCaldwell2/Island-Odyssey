#ifndef XYLIA_H
#define XYLIA_H

#include <iostream>
#include <string>
#include "Island.h"
#include "Clariti.h"
using namespace std;

class Xylia : public Island {
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