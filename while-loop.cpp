#include <iostream>
#include <cmath>
using namespace std;
// 18

int main() {
  string name;

  while (name.empty()) {
    cout << "Enter your name: ";
    cin >> name;

    cout << "Hello " << name;
  }


  return 0;
}
