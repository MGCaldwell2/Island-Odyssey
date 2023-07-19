#include "Clariti.h"
#include "Boat.h"
#include "Island.h"
#include "Xylia.h"

void Clariti::setTreasureAmount() {
  plusFood = 15;
  plusWood = 15;
  plusCrew = 3;
}

void Clariti::Encounter() {
  Boat bt;
  Island Isle;
  Xylia Xyl;
  cout << "As you approach Clariti, you can see a bustling city, with docks that are full of ships unloading cargo." << endl;
  cout << "You dock your ship and head into the city where you are approached by a merchant!" << endl;
  cout << "Merchant: Hey! Do you need any food, wood, or Health? You can even hire mercenaries (crew members) through me!" << endl;
  cout << "1: 15 food - cost: 3 gold" << endl;
  cout << "2: 15 wood - cost 3 gold" << endl;
  cout << "3: 30 health - cost 15 gold" << endl;
  cout << "4: 3 Crew members - cost 7 gold" << endl;
  cout << "5: No, thanks I am a brokey :(" << endl;
  cout << "Enter the number of which option you want!" << endl;
  cout << endl;
  int op3;
  cin >> op3;
  system("clear");

  if (op3 == 1) {
    bt.setGold(-3);
    bt.setFood(15);
  } 
  else if (op3 == 2) {
    bt.setGold(-3);
    bt.setWood(15);
  }
  else if (op3 == 3) {
    bt.setGold(15);
    bt.setHealth(30);
  }
  else if (op3 == 4) {
    bt.setGold(-7);
    bt.setCrew(3);
  }
  else if (op3 == 5) {
    cout << "Merchant: Bye Brokey!" << endl;
  }
  cout << endl;
  bt.printStatus();
  cout << endl;
  cout << "Press 1 when you are ready to set sail for the final island, Xylia!" << endl;
  int j;
  cin >> j;
  if (j == 1) {
    system("clear");
    Xyl.printDescription();
  }
}

void Clariti::printDescription() {
  cout << "Clariti is thought to be a relatively peaceful island compared to the others on your list to explore. Many merchants have recently stopped here and set up shop! If you have any extra gold laying around, now would be a great time to stock up on supplies or sell any extra you have! Just try not to get scammed, as money back is never guaranteed!" << endl;
  
  cout << "                ______________" << endl;
  cout << "    __,.,---'''''              '''''---..._" << endl;
  cout << " ,-'             .....:::''::.:            '`-." << endl;
  cout << "'           ...:::.....       '" << endl;
  cout << "            ''':::'''''       .               ," << endl;
  cout << "|'-.._           ''''':::..::':          __,,-" << endl;
  cout << "'-.._''`---.....______________.....---''__,,-" << endl;
  cout << "      ''`---.....______________.....---''" << endl;
  cout << endl;

  cout << "Enter 1 to continue:" << endl;
  int cont;
  cin >> cont;
  if (cont == 1) {
    system("clear");
    Encounter();
  }
}