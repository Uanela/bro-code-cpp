// 3:20
#include <iostream>

void sort(int arr[], int size) {
  for (int i = 0; i < size - 1; i++) {
    for (int j = 0; j < size - i - 1; j++) {
      if (arr[j] > arr[j+1]) {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
}

int main() {
  int numbers[] = {10, 1, 9, 2, 8, 3, 7, 4, 6, 5};

  std::cout << sizeof(numbers)/sizeof(numbers[0]) << "\n";

  sort(numbers, sizeof(numbers)/sizeof(numbers[0]));
  for (int el : numbers) {
    std::cout << el << " ";
  }

  return 0;
}

