#include <iostream>
using namespace std;

float getGroceries();

float getDiscount();


int main() {

  float amountDue;

  cout << "Welcome to the self checkout lane." << endl;
  cout << "Please start ringing up your items." << endl;

  amountDue = getGroceries();
  getDiscount();

  cout << amountDue << endl;

  return 0;
}

float getGroceries(){
  float total;
  float price;
  int amount;
  string answer;

  do{
    cout << "Please enter the price of the item: ";
    cin >> price;
    cout << "How many items of that type do you have? ";
    cin >> amount;
    cout << "Do you have any more items to checkout? ";
    cin >> answer;

    total += amount * price;

  }while(answer == "yes");

  return total;
}

float getDiscount(){

  string answer;
  float discount;


  cout << "Do you have a Rewards Card?" << endl;
  cin >> answer;

  if(answer == "yes"){

    cout << "Welcome valued customer!" << endl;
    discount =  * 0.10;
  }


  cout << "Your discount today was " << discount << endl;
}
