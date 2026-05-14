// 4:24
#include <iostream>
#include <string>

using namespace std;

int main() {
  // nullptr = to mean the pointer is pointing to nothing
  // is not safe to dereference a null pointer
  //

  int *ptr = nullptr;
  int x = 123;

  // ptr = &x;
  if (ptr != nullptr)
    cout << "Pointer assigned to " << *ptr;
  else
    cout << "Pointer unassigned" << *ptr;

  return 0;
}
