/************************
* A#: A01684852
* Course: CS1400
* CS1400 Section: 1
* CS1405 Section: 10
* HW#: 6
***********************/

#include <iostream>
#include <fstream>

using namespace std;

int main() {
  char code;
  int changer;
  ifstream is("secretMessage.txt");
  ofstream os("decodedMessage.txt");

  while(is.get(code)) {
    changer = int(code) + 13;
    if (code >= 65 && code <= 90) {
      if (changer > 90) {
        changer -= 26;
      }
      os << char(changer);
    }
    else if (code >= 97 && code <= 122) {
      if (changer > 122) {
        changer -= 26;
      }
      os << char(changer);
    }
    else{
      os << code;
    }
  }

  is.close();
  os.close();

  return 0;
}