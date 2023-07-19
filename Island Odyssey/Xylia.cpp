#include "Xylia.h"
#include "Boat.h"
#include "Island.h"

void Xylia::setTreasureAmount() {
  plusFood = 15;
  plusWood = 15;
  plusCrew = 3;
}


void Xylia::Encounter() {
  cout << "You get to the island and are approached by what seems like natives." << endl; 
  cout << "Native: Hello there adventurer!" << endl;
  cout << "Jello: My name is Jello! I'm guessing you came here on an expedition right?" << endl;
  cout << "If so..." << endl;
  cout << "*He pulls out a short stick and points it at you*" << endl;
  cout << "So what all did you come here for outsider?" << endl;
  cout << endl;
  cout << "Option 1: Lie" << endl;
  cout << "Option 2: Try to fight" << endl;
  cout << "Option 3: Run, cause who wants to mess with someone with a stick?" << endl;
  Boat bt;
  Island Isle;
  cout << "Enter the number for one of the options!" << endl;
  int opt1;
  cin >> opt1;
  system("clear");
  if (opt1 == 1) {
    system("clear");
    cout << "Jello: Why do I not believe you?" << endl;
    cout << "You: We are not like others I swear!" << endl;
    cout << "Jello: Yea right! Boys LET'EM HAVE IT!!!" << endl;
    cout << endl;
    cout << "You lost 70 health before you even realized what happened...";
    cout << "Maybe you shouldn't have messed the dude with a stick." << endl;
    bt.setHealth(-70);
  }
  else if (opt1 == 2) {
    system("clear");
    cout << "You: FIGHT BOYS!!!" << endl;
    cout << "Before you even know what happens a flash happens right in front of your eyes" << endl;
    cout << "You lost 70 health before you even realized what truly happened..." << endl;
    bt.setHealth(-70);
  }
  else if (opt1 == 3) {
    system("clear");
    cout << "You and your crew run back to your ship and head back to your home country" << endl;
    cout << "Messing with someone with a stick simply isn't worth it." << endl;
    cout << "After all of your adventures you are highly praised and given a large piece of land because of it!" << endl;
    cout << "You live the rest of your life feeling like a coward because you backed down from the fight BUT who cares your rich, am i right?!" << endl;
    cout << "GAME OVER!!! YOU WIN!" << endl;
  }
}

void Xylia::printDescription() {
  cout << "Xylia is an island that has been long disconnected from the rest of the world as it chose not to be involved with foreign affairs." << endl;
  cout << "This country has remained a mystery, for what is now 250 years, so there is no precedent for what you could expect." << endl;
  cout << "If you were to die anywhere on your expedition this is where it would be." << endl;
  cout << "There have been rumors that the island is home to cannibals, mermaids, dragons, and even wizards and witches." << endl;
cout << "I know it seems fake, since many of those are only things you would see in a fantasy world, but we have no other information to give you." << endl;
cout << "All I ask is that you DO NOT die there, if you do die consider yourself and any legacy you currently have to be forgotten about." << endl;
cout << "No one would blame you for not venturing there as it would mean dying a meaningless death." << endl;

  
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
  cout << endl;

  int cont;
  cout << "Enter 1 to continue:" << endl;
  cin >> cont;
  if (cont == 1) {
    system("clear");
    Encounter();
  }
}