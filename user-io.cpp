#include <iostream>
using namespace std;
// 8

int main() {
  string name;
  string full_name;
  int age;

  cout << "What's your first name?: ";
  cin >> name;

  cout << "What's your full name now?: ";
  getline(cin >> ws, full_name); // Allow getting input with spaces
                           
  cout << "What's your age bro?: ";
  cin >> age;

  cout << "Your first is " << name << ", but your full name is " << full_name << ", yeah that's sick, but I've more, your age is " << age;


  return 0;
}
