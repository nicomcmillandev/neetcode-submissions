class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> numKey;

        for(int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];

            if(numKey.contains(complement)) {
                return {numKey[complement], i};
            }

            numKey[nums[i]] = i;
        }
    }
};
