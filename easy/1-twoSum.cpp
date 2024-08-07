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
