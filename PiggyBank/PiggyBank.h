/************************
* A#: A01684852
* Course: CS1400
* CS1400 Section: 1
* CS1405 Section: 10
* HW#: 10
***********************/

#ifndef PIGGYBANK_PIGGYBANK_H
#define PIGGYBANK_PIGGYBANK_H

#include <iostream>
#include <string>

using namespace std;

class PiggyBank {
private:
  bool isBroken;
  double savings;

public:
  PiggyBank();
  PiggyBank(double initialSavings);
  ~PiggyBank();
  double getSavings();
  bool depositMoney(double deposit);
  double smash();

};

#endif //PIGGYBANK_PIGGYBANK_H
