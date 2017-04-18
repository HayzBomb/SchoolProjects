#include <iostream>
using namespace std;

int printMenu();
string printInsult();
string printCompliment();
string printExtreme();

int main() {
  int choice;
  int random;
  string answer;

  random = rand() % 3 + 1;

   choice = printMenu();

  if(choice == 0){
    std::cout << "Goodbye!" << std::endl;
  }
  else if(choice == 1){
    answer = printCompliment();

  }
  else if(choice == 2){
    answer = printInsult();
  }
  else if(choice == 3){
    answer = printExtreme();
  }
  else{
    cout << "What did you mean?" << endl;
  }
  cout << answer << endl;

  return 0;
}

int printMenu(){

  int playerChoice;

  std::cout << "0: Quit" << std::endl;
  std::cout << "1: Compliment - not a very good insult" << std::endl;
  std::cout << "2: Mild Insult" << std::endl;
  std::cout << "3: Extreme Insult" << std::endl;

  cin >> playerChoice;

  return playerChoice;
}
string printInsult(int random, string answer){

  if(random == 1){
    answer = "I am sick when I do look on thee";
  }
  else if(random == 2){
    answer = "I scorn you, scurvy companion";
  }
  else if(random == 3){
    answer = "Peace, ye fat guts!";
  }
  return answer;
}
string printCompliment(int random, string answer){

  if(random == 1){
    answer = "Though she be but little, she is fierce";
  }
  else if(random == 2){
    answer = "Sweet to the sweet";
  }
  else if(random == 3){
    answer = "O, what a noble mind is here!";
  }
  return answer;
}
string printExtreme(int random, string answer){

  if(random == 1){
    answer = "More of your conversation would infect my brain.";
  }
  else if(random == 2){
    answer = "I'll beat thee, but I would infect my hands.";
  }
  else if(random == 3){
    answer = "Thou art a boil, a plague sore";
  }
  return answer;
}


