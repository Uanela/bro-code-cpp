// 2:38
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <iostream>

using namespace std;

char get_player_choice() {
  char choice;

  do {
    cout << "\n";
    cout << "Choose one of the following:\n";
    cout << "'r' for rock\n";
    cout << "'p' for paper\n";
    cout << "'s' for scissor\n";
  } while (choice != 'r' && choice != 'p' && choice != 's');

  return choice;
}

char get_cpu_choise() {
  srand(time(0));
  int num = rand() % 3 + 1;

  switch (num) {
    case 1: return 'r';
    case 2: return 'p';
    case 3: return 's';
  }

  return 'r';
}

int main() {
  char player;
  char cpu;

  player = get_player_choice();
  cpu = get_cpu_choise();

  return 0;
}
