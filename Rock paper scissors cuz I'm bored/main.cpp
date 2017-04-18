#include <iostream>
using namespace std;


int main() {

  string playAgain;
  string playerInput;
  int playerChoice;
  int randomNum;
  int keepPlaying = 0;
  int playerWins = 0;
  int playerLoses = 0;
  float totalGames = 0;
  float average = 0;


  cout << "Hello would you like to play a game? Say yes or no" << endl;

  cin >> playAgain;
  if(playAgain == "no"){
    cout << "then why the fuck are you here?" << endl;
  }
  else if(playAgain == "yes") {
    keepPlaying += 1;

    cout << "Let's play Rock Paper Scissors" << endl;


    ///Rock is 1 Paper is 2 Scissors is 3

     do{ cout << "Please enter rock, paper, or scissors Ready? set, GO!" << endl;

       randomNum = rand() % 3 + 1;

       cin >> playerInput;

       if(playerInput == "rock"){
         playerChoice = 1;
       }

       else if(playerInput == "paper"){
         playerChoice = 2;
       }

       else if(playerInput == "scissors"){
         playerChoice = 3;
       }
       else{
         cout << "What the hell was that?" << endl;
         break;
       }

       if(randomNum == 1){

         cout << "I choose Rock" << endl;

         if(playerChoice == 3){
           cout << "I win!" << endl;
           playerLoses += 1;
         }

         if(playerChoice == 2){
           cout << "I lose!" << endl;
           playerWins += 1;
         }

         if(playerChoice == 1){
           cout << "It's a tie!" << endl;
         }

       }

       if(randomNum == 2){

         cout << "I choose Paper" << endl;

         if(playerChoice == 1){
           cout << "I win!" << endl;
           playerLoses += 1;
         }

         if(playerChoice == 3){
           cout << "I lose!" << endl;
           playerWins += 1;
         }

         if(playerChoice == 2){
           cout << "It's a tie!" << endl;
         }

       }

       if(randomNum == 3){

         cout << "I choose Scissors" << endl;

         if(playerChoice == 2){
           cout << "I win!" << endl;
           playerLoses += 1;
         }

         if(playerChoice == 1){
           cout << "I lose!" << endl;
           playerWins += 1;
         }

         if(playerChoice == 3){
           cout << "It's a tie!" << endl;
         }



       }

       cout << "You have won " << playerWins << " times" << endl;

       cout << "You have lost " << playerLoses << " times" << endl;

       totalGames = playerWins + playerLoses;

       average = playerWins / totalGames;

       average = average * 100;

       cout << "Your win percentage is " << average << " %" << endl;


       cout << "Would you like to play again?" << endl;

       cin >> playAgain;

       if(playAgain == "no"){
         cout << "fuck you" << endl;
         keepPlaying -= 1;
       }
     }while(keepPlaying == 1);

      }
  else{cout << "What do you mean?" << endl;}
///End of Rock Paper Scissors game

/***
  if(playerWins == 5){

    cout << "THAT'S IT OFF TO THE DUNGEON WITH YOU PEASANT!" << endl;
  }
***/



  cout << "Goodbye!" << endl;

  return 0;
}
