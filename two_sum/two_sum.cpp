#include <vector>
#include <iostream>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    int sizeOf = nums.size();
    int first = 0;
    int second = 0;
    for(int i = 0; i < sizeOf; i++) {
      for(int j = i + 1; j < sizeOf; j++) {
        if (nums[i] + nums[j] == target) {
          first = i; 
          second = j;
          // break on first Solution
          vector<int> answer = {first, second};
          return answer;
        }
      }
    }
}

int main() {
  vector<int> vect = {2, 3, 4, 6 , 1, 2};
  for (auto const& value : twoSum(vect, 5))
  {
    std::cout << value << std::endl;
  }
}