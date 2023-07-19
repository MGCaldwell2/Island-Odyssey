#include "Fiolar.h"
#include "Boat.h"
#include "Island.h"


void Fiolar::setTreasureAmount() {
  plusFood = 15;
  plusWood = 15;
  plusCrew = 3;
}

int Fiolar::getTreasureFood() {
  return plusFood;
}

int Fiolar::getTreasureWood() {
  return plusWood;
}

int Fiolar::getTreasureCrew() {
  return plusCrew;
}

void Fiolar::Encounter() {
  Boat bt;
  Island Isle;
  cout << "You and your crew have landed on Fiolar and start trekking through the think forest." << endl;
  cout << "There is an abundance of fruit and water, which eases your mind about your food supply for the upcoming adventures" << endl;
  cout << "After a couple hours of walking, you decide its time for a break and start picking fruits along with your crew in order to eat" << endl;
  cout << "Unknowingly to you, 3 members of your crew start eating before you get back, and you find them passed out, with high fevers at your rendezvous spot." << endl;
  cout << endl;
  cout << "Option 1: Stay with them and risk worsening your own health to help them recover." << endl;
  cout << "Option 2: Abandon your crew members and head back to the ship, leaving the sick ones to die" << endl;
  cin >> op1;
  system("clear");
  if (op1 == 1) {
    bt.setFood(-10);
    bt.setWood(-5);
    bt.setHealth(-10);
    system("clear");
    cout << "You lost 10 food, 5 wood, and 10 health." << endl;
    bt.printStatus();
    cout << endl;
    cout << "As you finish up your adventure through Fiolar, you stumble upon a treasure!" << endl;
    bt.setGold(10);
    cout << "+10 Gold!" << endl;
    cout << "Press 1 when you are ready to set sail for the next island!" << endl;
    int j;
    cin >> j;
    if (j == 1) {
      Isle.setIsland();
    }
  } 
  else if (op1 == 2) {
    bt.setCrew(-3);
    cout << "You lost 3 crew members, and returned to your ship, treasureless...maybe next time!" << endl;
    bt.printStatus();
    cout << "Press 1 when you are ready to set sail for the next island!" << endl;
    int j;
    cin >> j;
    if (j == 1) {
      Isle.setIsland();
    }
    
  }
}

void Fiolar::printDescription() {
  cout << "Fiolar is an island with a large abundance of trees and wildlife. While there is no offical civilization here, many previous explorers have landed here and never reported back! This small island is also referred to as 'The Devil's Garden'!" << endl;

  
  cout << "  ___ __ " << endl;
  cout << " (_  ( . ) )__                  '.    \   :   /    .'" << endl;
  cout << "   '(___(_____)      __           '.   \  :  /   .'" << endl;
  cout << "                   /. _\            '.  \ : /  .'" << endl;
  cout << "              .--.|/_/__      -----____  _   _____-----" << endl;
  cout << "_______________''.--o/___  \_____________(_)___________" << endl;
  cout << "     ~        /.'o|_o  '.|  ~                   ~   ~" << endl;
  cout << "~            |/    |_|  ~'         ~" << endl;
  cout << "             '  ~  |_|        ~       ~     ~     ~" << endl;
  cout << "    ~    ~          |_|O  ~                       ~" << endl;
  cout << "           ~     ___|_||_____     ~       ~    ~" << endl;
  cout << " ~    ~      .'':. .|_|A:. ..::''." << endl;
  cout << "           /:.  .:::|_|.\ .:.  :.:\   ~" << endl;
  cout << "~         :..:. .:. .::..:  .:  ..:.       ~   ~    ~" << endl;
  cout << "           \.: .:  :. .: ..:: .lcf/" << endl;
  cout << "  ~      ~      ~    ~    ~         ~" << endl;
  cout << "             ~           ~    ~   ~             ~" << endl;
  cout << "      ~         ~            ~   ~                 ~" << endl;
  cout << "~                  ~    ~ ~                 ~ " << endl;
  cout << endl;

cout << "Enter 1 to continue:" << endl;
  cin >> cont;
  if (cont == 1) {
    system("clear");
      Encounter();
  }
}