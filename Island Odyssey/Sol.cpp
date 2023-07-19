#include "Sol.h"
#include "Boat.h"
#include "Island.h"

void Sol::setTreasureAmount() {
  plusFood = 15;
  plusWood = 0;
  plusCrew = 3;
}

int Sol::getTreasureFood() {
  return plusFood;
}

int Sol::getTreasureWood() {
  return plusWood;
}

int Sol::getTreasureCrew() {
  return plusCrew;
}

void Sol::Encounter() {
  Boat bt;
  Island Isle;
  cout << "After landing on Sol, you and your crew head to the nearest town, Buggy's Paradise!" << endl;
  cout << "As you approach the town you see that the entrance is a singular path between two plateaus." << endl;
  cout << "As you walk through them you feel eyes on you, then...it happens." << endl;
  cout << "Arrows land in directly front you stopping you in your tracks and bandits with swords come out from behind rocks." << endl;
  cout << "Bandit Leader: Drop all your valuables and leave it with us or face the consequences!" << endl;
  cout << endl;
  cout << "1: Drop all valuables" << endl;
  cout << "2: Fight the Bandits" << endl;
  int op2;
  cin >> op2;
  system("clear");
  if (op2 == 1) {
    cout << "You drop *most* of your valuables, but the Bandits attack you, thus a fight breaks out." << endl;
    bt.setFood(-7);
    bt.setWood(-5);
    bt.setHealth(-25);
    bt.setGold(-15);
    bt.printStatus();
    
    cout << "Press 1 when you are ready to set sail for the next island!" << endl;
  }
  else if (op2 == 2) {
    cout << "You refuse to drop any of your possesions and start fighting." << endl;
    cout << "The fight was extreme diff and you ended up losing some crew members..." << endl;
    cout << "And sustaining some injuries, but no valuables lost!" << endl;
    cout << "In fact, you robbed them!" << endl;
    bt.setCrew(-2);
    bt.setHealth(-25);
    bt.setGold(20);
    bt.setFood(5);
    bt.printStatus();
    
    cout << "Press 1 when you are ready to set sail for the next island!" << endl;
  }
int j;
cin >> j;
  if (j == 1) {
  Isle.setIsland();
  }
}

void Sol::printDescription() {
  cout << "Sol is an island with a very harsh desert climate. Many die of dehydration and heat stroke when exploring this island, however the potential for minerals and jewels is high. This island is the definition of high-risk high reward. Although even if you do get the reward you may find out who in your crew is loyal and who is purely money-driven. Bandits are also a known problem here, but you didn't hear that from us!" << endl;

  
  cout << "       w" << endl;
  cout << "      /'\\ "<< endl;
  cout << "      |`|" << endl;
  cout << "   _  |'|  _" << endl;
  cout << "  /.\\ |`| /,\\ " << endl;
  cout << "  |'(_|.|_).|" << endl;
  cout << "  \.'`.'`.`'/ " << endl;
  cout << "   `--.'.--'" << endl;
  cout << "      |.|" << endl;
  cout << "      |`|" << endl;
  cout << "      |.|" << endl;
  cout << " `'`'`'`'`'`'`'" << endl;
  cout << endl;

  cout << "Enter 1 to continue:" << endl;
  int cont;
  cin >> cont;
  if (cont == 1) {
    system("clear");
    Encounter();
  }
}