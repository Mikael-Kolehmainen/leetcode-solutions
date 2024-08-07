#include <iostream>
#include <vector>

using namespace std;

// Basic solution
// complexity - O(n²)

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> indices;
        int numsLength = nums.size();
        for (int i = 0; i < numsLength; ++i) {
            for (int j = i + 1; j < numsLength; ++j) {
                if (nums[i] + nums[j] == target) {
                    indices = {i, j};
                    break;
                }
            }
        }
        return indices;
    }
};

int main()
{
  Solution solution;

  vector<int> nums = {2,7,11,15};
  int target = 9;

  vector<int> result = solution.twoSum(nums, target);

  std::cout << "Indices: [" << result[0] << ", " << result[1] << "]" << std::endl;

  return 0;
}
