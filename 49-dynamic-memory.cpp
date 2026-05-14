// 4:45
#include <iostream>

int main() {
  int *p_num = NULL;
  p_num = new int; // creates a new mem in heap
  *p_num = 40;

  std::cout << "address: " << p_num << std::endl;
  std::cout << "value: " << *p_num << std::endl;

  delete p_num; // you must free the mem
  // delete[] p_num; if it was an array

  return 0;
}
