#include "Game.h"
#include "Island.h"

using namespace std;

void Game::PrintMenu() {
  cout << "------------------------------------" << endl;
  cout << "Welcome to Island Odyssey!" << endl;
  cout << "1 - New game" << endl;
  cout << "2 - Load previous game" << endl;
  cout << "3 - Quit" << endl;
  cout << "------------------------------------" << endl;
  cin >> slct;

  if (slct == 1) {
    NewGame();
  }
  else if (slct == 2) {
    cout << "Loading previous game!" << endl;
  }
  else if (slct == 3) {
    cout << "You have quit the Game!" << endl;
  }
  else {
    cout << "Invalid please choose one of the options displayed above!" << endl;
  }
}

void Game::NewGame() {
  cout << "Welcome! Before we begin please enter a name for your Character!\n";
  cout << "Your character's name will also be the name of the save file, so make sure you remember it!\n";
  cin >> fname;
  CharacterName = fname;
  system("clear");

  cout << "Hello " << CharacterName << " you have been appointed as the new captain of this ship!\n";
  cout << "It is your job to head west and lead your crew to the islands that are said to have many large gold deposits and claim the riches for yourselves!\n";
  cout << endl;
  cout << "When you are ready to begin type 'Start' and press Enter!" << endl;
  cin >> startNewGame;

  if (startNewGame == "Start") {
    system("clear");
    Ship();
  }
  else {
    cout << "Please enter 'Start' when you are ready to play!";
  }
}

void Game::Ship() {
  Island Isle;
  cout << "To start off you will be given some supplies, but this is all that will be given to you! (for free that is)\n";
  cout << endl;
  cout << "You have been given:\n";
  cout << "25 Wood\n";
  cout << "25 Food\n";
  cout << "5 Crew Members\n";
  cout << "And 15 Gold!\n";
  cout << "When you are ready to set sail press 1!\n";

  cin >> answer;

  if (answer == 1) {
    Isle.selectStarterIsland(CharacterName);
  }
  
}