#include <vector>
#include <iostream>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    int sizeOf = nums.size();
    int first = 0;
    int second = 0;
    int cont = 0;
    for(int i = 0; i < sizeOf; i++) {
      if (cont != 0) {
        break;
      }
      for(int j = 0; j < sizeOf; j++) {
        if (cont != 0) {
          break;
        }
        if (nums[i] + nums[j] == target && (i != j)) {
          first = i;
          second = j;
          // break on first Solution
          cont++;
        }
      }
    }
    vector<int> answer = {first, second};
    return answer;
}

int main() {
  vector<int> vect = {2, 3, 4, 6 , 1, 2};
  for (auto const& value : twoSum(vect, 5))
  {
    std::cout << value << std::endl;
  }
}