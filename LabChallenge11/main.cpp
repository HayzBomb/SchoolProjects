#include <iostream>
using namespace std;

bool GetCode(bool granted,int userAttempts);

const int keyCode = 4444;

int main() {
  int userAttempts;
  int attempts = 3;
  bool granted = false;


  while(attempts > 0 && !granted ){
    cout << "Please enter the combination" << endl;
    cin >> userAttempts;
    GetCode(granted,userAttempts);
    attempts--;
  }
  return 0;
}
bool GetCode(bool granted,int userAttempts){
  if(userAttempts == keyCode){
    granted = true;
    cout << "Congrats and enjoy your brownie" << endl;
    return granted;
  }

}