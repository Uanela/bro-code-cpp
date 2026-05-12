// 3:26
// fill
#include <iostream>

int main() {
  std::string foods[100];

  fill(foods, foods + 100, "pizza");
  fill(foods, foods + (100 / 2), "pizza");       // fills half
  fill(foods + (100 / 2), foods + 100, "pizza"); // fills from half to end

  for (std::string food : foods) {
    std::cout << food << '\n';
  }
  return 0;
}
