// 3:09
#include <iostream>

int main() {
  std::string students[] = { "Uanela", "Sheuzia" };

  for(std::string student : students) {
    std::cout << student << "\n";
  }

  return 0;
}
