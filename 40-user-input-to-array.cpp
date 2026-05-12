// 3:30
#include <iostream>

using namespace std;

int main() {

  string foods[5];
  int size = sizeof(foods) / sizeof(foods[0]);
  string tmp;

  for (int i = 0; i < size; i++) {
    cout << "Enter a food or 'q' to exit #" << i + 1;
    getline(cin, tmp);
    if (tmp == "q")
      break;
    else
      foods[i] = tmp;
  }

  for (int i = 0; !foods[i].empty(); i++) {
    cout << i << " - " << foods[i];
  }

  return 0;
}
