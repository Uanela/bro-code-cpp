// 4:50
#include <iostream>

int factorial(int n) { return n > 0 && n - 1 > 0 ? n * factorial(n - 1) : 1; }

int main() {
  int num = 10;

  std::cout << factorial(
      num); // consumes more memory and can get stack overflow

  return 0;
}
