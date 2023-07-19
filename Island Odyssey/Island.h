#ifndef ISLAND_H
#define ISLAND_H

#include <iostream> 
using namespace std;

class Island {
  private:
    string* completedIslands;
    string charName;
    string islandName;
    int ans;
  string *choices { new string[3] {"Sol", "Fiolar", "Clariti"}};

  public:
    void selectStarterIsland(string CN);
    void setIsland();
    void arrayChange();
    void printDescription();
    int getNumEncounters();
    void saveFile(int* boat, string CN, string CurrI, string* CompI);
    void loadFile(int* boat, string CN, string CI);
    void setCompletedIslands(string CI) {
      completedIslands->append(CI);
    }
};
#endif