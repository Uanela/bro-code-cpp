// 5:05
#include <iostream>

struct Student {
  std::string name;
  int gpa;
  bool enrolled; // members
};

int main() {
  Student student;
  student.name = "Francisco"; // Using the Class Member Access Operator

  return 0;
}
