// 4:00
#include <iostream>

void swap(std::string &x, std::string &y) { // receives param by reference
  std::string tmp;
  tmp = x;
  x = y;
  y = tmp;
}

int main() {
  std::string x = "Hello";
  std::string y = "World";

  swap(x, y);

  std::cout << "X: " << x << '\n';
  std::cout << "Y: " << y << '\n';

  return 0;
}
