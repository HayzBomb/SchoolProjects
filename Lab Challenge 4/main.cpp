#include <iostream>
using namespace std;


int main() {

  string firstName;
  string lastName;
  int a;
  int b;

  cout << "What is your first name?" << endl;
  cin >> firstName;

  cout << "What is your last name?" << endl;
  cin >> lastName;

  cout << "Hello " << firstName << lastName << " my name is computer" << endl;






  cout << "Hello please help me define the variable a" << endl;
  cin >> a;
  cout << "Hello please help me define the variable b" << endl;
  cin >> b;

  cout << a + b << std::endl;
  cout << a - b << std::endl;
  cout << a * b << std::endl;
  static_cast<float>(a / b);
  cout << a % b << std::endl;


  return 0;
}