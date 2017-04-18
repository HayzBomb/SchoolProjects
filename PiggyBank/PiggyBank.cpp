/************************
* A#: A01684852
* Course: CS1400
* CS1400 Section: 1
* CS1405 Section: 10
* HW#: 10
***********************/

#include "PiggyBank.h"

PiggyBank::PiggyBank(){
  isBroken = false;
  savings = 0.0;
}

PiggyBank::PiggyBank(double initialSavings){
  isBroken = false;
  savings = initialSavings;
}

PiggyBank::~PiggyBank(){
  if(PiggyBank::isBroken) {
    cout << "Poor Broken Pig!" << endl;
  }
}

double PiggyBank::getSavings(){
  return PiggyBank::savings;
}

bool PiggyBank::depositMoney(double deposit){
  if (deposit >= 0.0 && !isBroken){
    PiggyBank::savings = deposit + PiggyBank::savings;
    return true;
  }
  else if (deposit < 0 || isBroken) {
    return false;
  }

}

double PiggyBank::smash(){
  double amount = savings;
  isBroken = true;
  savings = 0.0;
  return amount;

}