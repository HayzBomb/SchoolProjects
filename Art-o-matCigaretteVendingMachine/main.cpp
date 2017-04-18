/************************
* A#: A01684852
* Course: CS1400
* CS1400 Section: 1
* CS1405 Section: 10
* HW#: 5
***********************/

#include <iostream>
#include <iomanip>
using namespace std;

int PrintMenu() {
  char choice;

  cout << "s - report the machine status" << endl;
  cout << "d - drop in a quarter" << endl;
  cout << "1 - pull the 1st knob" << endl;
  cout << "2 - pull the 2nd knob" << endl;
  cout << "3 - pull the 3rd knob" << endl;
  cout << "4 - pull the 4th knob" << endl;
  cout << "r - restock the machine" << endl;
  cout << "q - quit" << endl;
  cin >> choice;
  return choice;
}
void PrintStatus(int luckyStrikes, int camels,int gauloises, int pallMalls, int quarters, float bank) {
  cout << "1: " << luckyStrikes << " packs of Lucky Strikes" << endl;
  cout << "2: " << camels << " packs of Camels" << endl;
  cout << "3: " << gauloises << " packs of Gauloises" << endl;
  cout << "4: " << pallMalls << " packs of Pall Malls" << endl;
  cout << "You have " << quarters << " quarters to spend" << endl;
  cout << "There is $" << fixed << setprecision (2) << bank << " in the machine" << endl;
}
int PutQuarter(int quarters){
  quarters++;
  cout << "ching" << endl;
  return quarters;
}

void GetStrikes(int quarters, int luckyStrikes) {
  if(quarters >= 3 && luckyStrikes == 0){
    cout << "You hear mechanical clanking, but no cigarettes appear." << endl;
  }
  else if(quarters >= 3){
    cout << "A pack of Lucky Strikes slides into view. It's your lucky day!" << endl;
  }
  else{
    cout << "(nothing happens)" << endl;
  }
}
void GetCamels(int quarters, int camels){
  if(quarters >= 3 && camels == 0){
    cout << "You hear mechanical clanking, but no cigarettes appear." << endl;
  }
  else if(quarters >= 3){
    cout << "A pack of Camels slides into view. Watch out, they spit!" << endl;
  }
  else{
    cout << "(nothing happens)" << endl;
  }
}
void GetGauloises(int quarters, int gauloises){
  if(quarters >= 3 && gauloises == 0){
    cout << "You hear mechanical clanking, but no cigarettes appear." << endl;
  }
  else if(quarters >= 3){
    cout << "A pack of Gauloises slides into view. Gauloises? Really?" << endl;
  }
  else{
    cout << "(nothing happens)" << endl;
  }
}
void GetPalls(int quarters, int pallMalls){
  if(quarters >= 3 && pallMalls == 0){
    cout << "You hear mechanical clanking, but no cigarettes appear." << endl;
  }
  else if(quarters >= 3){
    cout << "A pack of Pall Malls slides into view. They rhyme!" << endl;
  }
  else{
    cout << "(nothing happens)" << endl;
  }
}

int main() {
  char choice;
  int luckyStrikes = 5;
  int camels = 7;
  int gauloises = 1;
  int pallMalls = 6;
  int quarters = 0;
  float bank = 24.50;

  choice = PrintMenu();

  while (choice != 'q') {

    if(choice == 's') {
      PrintStatus(luckyStrikes, camels, gauloises, pallMalls, quarters, bank);
    }
    else if(choice == 'r'){
      cout << "A grouchy-looking attendant shows up and restocks the machine." << endl;
      luckyStrikes = 10;
      camels = 10;
      gauloises = 10;
      pallMalls = 10;
      bank = 0;
    }
    else if(choice == 'd'){
      quarters = PutQuarter(quarters);
    }
    else if(choice == '1'){
      GetStrikes(quarters, luckyStrikes);
      if(quarters >= 3){
        bank += quarters * .25;
        quarters = 0;
        if(luckyStrikes > 0){
          luckyStrikes--;
        }
      }
    }
    else if(choice == '2'){
      GetCamels(quarters, camels);
      if(quarters >= 3){
        bank += quarters * .25;
        quarters = 0;
        if(camels > 0){
          camels--;
        }
      }
    }
    else if(choice == '3'){
      GetGauloises(quarters, gauloises);
      if(quarters >= 3){
        bank += quarters * .25;
        quarters = 0;
        if(gauloises > 0){
          gauloises--;
        }
      }
    }
    else if(choice == '4'){
      GetPalls(quarters, pallMalls);
      if(quarters >= 3){
        bank += quarters * .25;
        quarters = 0;
        if(pallMalls > 0){
          pallMalls--;
        }
      }
    }
    else{
      cout << "I do not understand." << endl;
    }
    cin >> choice;
  }
  cout << "So long!" << endl;

  return 0;
}
