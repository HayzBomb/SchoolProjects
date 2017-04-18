/************************
* A#: A01684852
* Course: CS1400
* CS1400 Section: 1
* CS1405 Section: 10
* HW#: 7
***********************/

#include <cstdlib>
#include <ctime>
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

using namespace std;

// Function prototypes
void playGame(void);
int roll(bool isPlayerTurn);
char getActionFromUser(void);
void printDisplay(int playerScore, int playerTurnPoints, int devilScore);
int devilTurn(int playerScore, int devilScore);
void updateWinHistory(bool playerWon);

/**
 * Main entry point for the Devil's Dice game
 * @return 0 on successful execution
 */
int main()
{
#ifdef JARVIS
  srand(0);
#else
  srand(time(NULL));
#endif
  playGame();

  return 0;
}

/**
 * Plays a game of Devil's Dice
 */
void playGame(void)
{
  int devilTotalScore = 0;
  int playerTotalScore = 0;
  int playerCurrentTurnPoints = 0;
  int playerRoll;
  bool devilGetsATurn = false;
  bool didPlayerWin = false;
  bool isGameOver = false;
  bool isPlayerTurn = true;

  cout << "---- Welcome to Devil's Dice! ----" << endl;

  while (!isGameOver)
  {
    char action = getActionFromUser();

    // TODO - Handle player actions here, updating provided variables when needed I think DONE
    switch(action){
      case 'h':
        cout << "You banked " << playerCurrentTurnPoints << " points" << endl;
        playerTotalScore =+ playerCurrentTurnPoints;
        //playerCurrentTurnPoints = 0;
        devilGetsATurn = true;
        isPlayerTurn = false;
        break;
      case 'r':
        playerRoll = roll(isPlayerTurn);
        if(playerRoll == 1){
          playerCurrentTurnPoints = 0;
          devilGetsATurn = true;
          isPlayerTurn = false;
        }
        playerCurrentTurnPoints += playerRoll;
        break;
      case 'f':
        cout << "Game Over!" << endl;
        isGameOver = true;
        break;
    }

    if (devilGetsATurn)
    {
      devilTotalScore += devilTurn(playerTotalScore, devilTotalScore);
      devilGetsATurn = false;
      isPlayerTurn = true;
    }

    if (!isGameOver)
    {
      printDisplay(playerTotalScore, playerCurrentTurnPoints, devilTotalScore);
    }

    if (devilTotalScore >= 100)
    {
      cout << "Devil Wins!" << endl;
      isGameOver = true;
    }
  }

  updateWinHistory(didPlayerWin);
}

/**
 * Rolls a dice, returning a random value between 1 and 6
 * @param isPlayerTurn True if it is the player rolling, false otherwise
 * @return Random dice roll
 */
int roll(bool isPlayerTurn)
{
  int roll = 0;

  // TODO - needs 1 roll that ends turn
  roll = rand() % 6 + 1;
  if(isPlayerTurn){
    cout << "You rolled a " << roll << endl;
  }
  else{
    cout << "Devil rolled a " << roll << endl;
  }
  return roll;
}

/**
 * Prompts for and gets an action from the user
 * @return The action selected by the user
 */
char getActionFromUser(void)
{
  char input;

  // TODO - Prompt for and get user input DONE
  cout << "Hold[h], roll[r], or forfeit[f]: ";
  cin >> input;

  return input;
}

/**
 * Prints out the Devil's Dice display
 * @param playerScore Current total player score
 * @param playerTurnPoints Points player has accumulated so far this turn
 * @param devilScore Current total devil's score
 */
void printDisplay(int playerScore, int playerTurnPoints, int devilScore)
{
  // TODO - Print out the nicely formatted display
  cout << "     Player               Devil     \n";
  cout << "     ------               -----     \n";
  for(int i = 100; i >= 0; i -= 10){
    if(playerScore >= i && playerScore < i + 10){
      if(i < 100) cout << " ";
      if(i < 10) cout << " ";
      cout << playerScore << " >";
    }else{
      cout << "     ";
    }
    cout << "-- " << i;
    if(playerTurnPoints >= i && playerTurnPoints < i + 10){
      if(i < 100) cout << " ";
      if(i < 10) cout << " ";
      cout << "< " << playerTurnPoints;
      if(playerTurnPoints < 100) cout << "  ";
      if(playerTurnPoints < 10) cout << "  ";
      cout << " ";
    }else{
      if(i < 100) cout << "  ";
      if(i < 10) cout << "  ";
      cout << "      ";
    }
    cout << "        " << i << " --";
    if(devilScore >= i && devilScore < i + 10) {
      cout << "< " << devilScore;
      if(devilScore < 100) cout << " ";
      if(devilScore < 10) cout << " ";
    }else {
      cout << "     ";
    }
    cout << endl;

  }
  cout << endl;
}

/**
 * Updates the win/loss history stored in a file
 * @param playerWon True if the player won the game, false otherwise
 */
void updateWinHistory(bool playerWon)
{
  // TODO - Read out win history from file (if exists), update values, and write back to file/*
  ifstream grab("game.txt");
  string wins, losses;
  int iWins, iLosses;
  grab >> wins >> losses;
  grab.close();
  iWins = atoi(wins.c_str());
  iLosses = atoi(losses.c_str());
  if(playerWon){
    iWins++;
  }
  else{
    iLosses++;
  }
  ofstream push("game.txt");
  push << iWins << " " << iLosses;
  push.close();
  cout << "Total Wins: " << iWins << endl;
  cout << "Total Losses: " << iLosses << endl;

}

/**
 * The devil take's his turn
 * @param playerScore Current total player score
 * @param devilScore Current total devil score
 * @return The devil's new total score after his turn has completed
 */
int devilTurn(int playerScore, int devilScore)
{
  int devilTurnScore = 0;
  bool devilTurnOver = false;
  int devilGoal = 21;

  if (playerScore > devilScore)
  {
    devilGoal = 30;
  }

  cout << endl;

  while (!devilTurnOver)
  {
    if ((devilTurnScore < devilGoal) && (devilScore + devilTurnScore < 100))
    {
      int devilRoll = roll(false);

      if (devilRoll == 1)
      {
        devilTurnScore = 0;
        devilTurnOver = true;
      }
      else
      {
        devilTurnScore += devilRoll;
      }
    }
    else
    {
      devilTurnOver = true;
    }
  }

  cout << "Devil got " << devilTurnScore << " points" << endl << endl;
  return devilTurnScore;
}