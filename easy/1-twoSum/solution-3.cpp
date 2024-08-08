#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

// Hash map solution
// complexity - O(n)

class Solution
{
public:
  vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> hashMap;

    for (int i = 0; i < nums.size(); ++i) {
      int complement = target - nums[i];

      if (hashMap.find(complement) != hashMap.end()) {
        return {hashMap[complement], i};
      }

      hashMap[nums[i]] = i;
    }

    return {};
  }
};

int main()
{
  Solution solution;

  vector<int> nums = {3,2,4};
  int target = 6;

  vector<int> result = solution.twoSum(nums, target);

  std::cout << "Indices: [" << result[0] << ", " << result[1] << "]" << std::endl;

  return 0;
}
