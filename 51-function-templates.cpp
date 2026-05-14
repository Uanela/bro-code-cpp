// 5:00
#include <iostream>

// basically generic functions in TS
template <typename T, typename U> auto max(T x, U y) { return x > y ? x : y; }

int main() {
  std::cout << max(1, 2.2);

  return 0;
}
