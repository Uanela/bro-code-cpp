// 4:07
#include <iostream>
#include <string>

using namespace std;

int to_int(char c) {
  return c - '0';
}

void validate(long num) {
  string num_str = to_string(num);
  vector<int> doubled_nums = {};

  int odd_sum = 0;

  for(int i = num_str.size() - 2; i >= -1; i -= 2) {
    if (i + 1 == num_str.size() - 1) 
    {

      odd_sum += to_int(num_str[i+1]);
    }
    else 
    {

      odd_sum += to_int(num_str[i+1]);
    }
    if (i<0) break;
    int result = to_int(num_str[i]) * 2;
    
    if (result <= 9) doubled_nums.push_back(result);
    else {
      string result_str = to_string(result);
      doubled_nums.push_back(to_int(result_str[0]));
      doubled_nums.push_back(to_int(result_str[1]));
    }

  }
  
  int summed = 0;
  for (int i = 0; i < doubled_nums.size(); i++) {
    summed += doubled_nums[i];
  }

cout << num << "\n";
  cout << "summed: " << summed << "\n";
  cout << "odd_sum: " << odd_sum << "\n";
  cout << "sum: " << summed + odd_sum << "\n";
  cout << "\n";
}

int main() {
long nums[] = {
    378282246310005,
    371449635398431,
    378734493671000,
    5610591081018250,
    30569309025904,
    38520000023237,
    6011111111111117,
    6011000990139424,
    3530111333300000,
    3566002020360505,
    5555555555554444,
    5105105105105100,
    4111111111111111,
    4012888888881881
};

for (long num : nums) {
  validate(num);
}


  return 0;
}
