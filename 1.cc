class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        int len = nums.size();
        for (int i = 0; i != len; i++) {
            int a = target - nums[i];
            for (int j = i+1; j != len; j++) {
                if (a == nums[j]) {
                    std::vector<int> result{i, j};
                    return result;
                }
            }
        }
    }
};
