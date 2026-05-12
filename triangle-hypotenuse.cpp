#include <iostream>
#include <cmath>
// 10

using namespace std;

int main() {
  double a;
  double b;
  
  cout << "Let's calculate a triangle hypotenuse" << "\n";
  cout << "What is a?: ";
  cin >> a;

  cout << "What is b?: ";
  cin >> b;

  cout << "The hypotenuse is: " << sqrt(pow(a, 2) + pow(b, 2));

  return 0;
}
