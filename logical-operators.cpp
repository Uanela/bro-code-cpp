#include <iostream>
#include <cmath>
using namespace std;
// 15

int main() {
  bool a = 1 && false;
  bool b = false && "Hello world";
  bool c = "First side" && 'C';
  bool d = !true;

  cout << a << endl;
  cout << b << endl;
  cout << c << endl;
  cout << d << endl;
  cout << true << endl;

  return 0;
}
