// 4
#include <iostream>
using namespace std;

namespace first {
int x = 1;
}

int main() {
  cout << 2 + first::x;
  return 0;
}
