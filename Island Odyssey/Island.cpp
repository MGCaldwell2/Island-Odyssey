#include "Island.h"
#include "Fiolar.h"
#include "Sol.h"
#include "Clariti.h"
#include "Xylia.h"
#include <fstream>

void Island::selectStarterIsland(string CN) {
  charName = CN;
  cout << "------------------------------------------" << endl;
  cout << "Choose an island to sail to: " << endl;
  cout << "1 - Sol: A desert island" << endl;
  cout << "2 - Fiolar: An island covered with trees" << endl;
  cout << "------------------------------------------" << endl;
  cin >> ans;

  Sol Sol_;
  Fiolar Fio;
  
  if (ans == 1) {
    system("clear");
    cout << "You have selected Sol!" << endl;
    Sol_.printDescription();
  }
  else if (ans == 2) {
    system("clear");
    cout << "You have selected Fiolar!" << endl;
    Fio.printDescription();
  }
}

void Island::setIsland() {
  Sol Sol_;
  Fiolar Fio;
  Clariti Clar;
  cout << "Please choose your next Island (type out the full island name):" << endl;
  cout << "*Clariti is suggested to be chosen last*" << endl;
  for (int i = 0; i < 3; i++) {
    cout << choices[i] << endl;
  }
  cin >> islandName;
  if (islandName == "Sol") {
    system("clear");
    cout << "You have selected Sol!" << endl;
    Sol_.printDescription();
  } else if (islandName == "Fiolar") {
    system("clear");
    cout << "You have selected Fiolar!" << endl;
    Fio.printDescription();
  } else if (islandName == "Clariti") {
    system("clear");
    cout << "You have selected Clariti!" << endl;
    Clar.printDescription();
  }
}
  
void Island::arrayChange() {
  
}
  
void Island::saveFile(int* boat, string CN, string CurrI, string* CompI){
//charName
//currIsland
//currData (boat* boats)
  ofstream os;
  os.open("saveFile.txt");
  os.clear();
  os << CN; // ASSIGN AGAIN THROUGH GET/SET METHOD
  for (int i =0; i < CompI->length(); i++){
    os << CompI[i]; // private string array as you complete islands itll add Iname to it and print it out here
  }
  os << CompI->length(); // how i know how many islands are completed
  
  os << CurrI; // from current island reassign status values
  for (int i =0; i < 5; i++){
    os << boat[i]; //iterates through resources and prints their resource value numbers.
  }
  

  
}
void Island::loadFile(int* boat, string CN, string CI){
//charName
//currIsland
//currData (boat* boats)

  
}