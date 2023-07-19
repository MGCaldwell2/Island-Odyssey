#ifndef FIOLAR_H
#define FIOLAR_H

#include <iostream>
#include <string>
#include "Island.h"
using namespace std;

class Fiolar : public Island {
  private:
    int plusFood;
    int plusWood;
    int plusCrew;

    int cont;
    int op1;
  public:
    void printDescription();
    void setTreasureAmount();
    int getTreasureFood();
    int getTreasureWood();
    int getTreasureCrew();
    void Encounter();
};
#endif