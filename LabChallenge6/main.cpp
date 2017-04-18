#include <iostream>
using namespace std;

int main() {


  int counter = 4;
  int combOne;
  int combTwo;
  int combThree;
  ///int randomOne;
  ///int randomTwo;
  ///int randomThree;

  ///srand(time(0));

  ///randomOne = rand() % 3 + 1;
  ///randomTwo = rand() % 3 + 1;
  ///randomThree = rand() % 3 + 1;


  while(counter >= 0){

    cout << "Please enter the first digit ";
    cin >> combOne;
    cout << "\n";

    cout << "Please enter the second digit ";
    cin >> combTwo;
    cout << "\n";

    cout << "Please enter the third digit ";
    cin >> combThree;
    cout << "\n";

    if(combOne == 3  && combTwo == 3 && combThree == 3){
      cout << "you escaped Darkseid's wrath" << endl;
      break;

    }
    else{
      cout << "You still try to fight. Can't you see that it's hopeless?" << endl;
      cout << "You have " << counter << " tries left" << endl;
    }


    counter--;
  }
  if(counter == 0){
    cout << "People of Earth, I am Darkseid! Lord of Apokolips!" << endl;
  }
  else{
    cout << "We will meet again!" << endl;
  }



  return 0;
}