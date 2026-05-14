// 4:18
#include <iostream>
#include <string>

using namespace std;

int main() {
  // pointers = var that stores a memomry address of another var
  // sometimes is easier to work with addresses
  //
  // & address-of operator
  // * dereference operator
  // the type of the pointer must be the same as the value

  string name = "Sheuzia";
  string *p_name = &name;

  return 0;
}
