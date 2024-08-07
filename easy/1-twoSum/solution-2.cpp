#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

// Two Pointers solution
// complexity -

class Solution {
public:
  vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> indices;
    int i = 0;
    int j = nums.size() - 1;

    vector<pair<int, int>> numWithIndex;
    for (int i = 0; i < nums.size(); ++i) {
      numWithIndex.push_back({ nums[i], i});
    }

    sort(numWithIndex.begin(), numWithIndex.end());

    while (i < j)
    {
      int sum = numWithIndex[i].first + numWithIndex[j].first;

      if (sum == target) {
        indices = {numWithIndex[i].second, numWithIndex[j].second};
        break;
      }

      if (sum < target) {
        ++i;
      }

      if (sum > target) {
        --j;
      }
    }

    return indices;
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
