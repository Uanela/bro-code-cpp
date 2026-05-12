#include <iostream>
#include <cmath>
using namespace std;
// 19

int main() {
  string name;

  do {
    cout << "Enter your name: ";
    cin >> name;
    cout << "Hello " << name;
  } while (name.empty());


  return 0;
}
