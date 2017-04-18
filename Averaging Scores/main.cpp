/************************
* A#: A01684852
* Course: CS1400
* CS1400 Section: 1
* CS1405 Section: 10
* HW#: 2
***********************/

#include <iostream>
using namespace std;

int main() {

  int inputOne;
  int inputTwo;
  int inputThree;
  int inputFour;
  float sum;
  float average;

  cout << "Score 1: \n";
  cin >> inputOne;
  cout << "Score 2: \n";
  cin >> inputTwo;
  cout << "Score 3: \n";
  cin >> inputThree;
  cout << "Score 4: \n";
  cin >> inputFour;

  sum = inputOne + inputTwo + inputThree + inputFour;

  average = sum / 4;

  cout << "Average: " << average << endl;

  return 0;
}