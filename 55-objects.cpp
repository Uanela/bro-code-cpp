// A collection of attributes and methods
// instanc of an class
// 5:20
#include <iostream>

class Human {
public:
  std::string name;
  std::string occupation;
  int age;

  void eat() { std::cout << name << " is eating"; }
};

class Person : Human {
public:
  void eat() { std::cout << this->name << " eating from person"; }
};

int main() {
  Person person;

  person.eat();

  return 0;
}
