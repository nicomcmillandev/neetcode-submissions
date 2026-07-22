class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> numKey;
        vector<int> answer;
        for(int i = 0; i < nums.size(); i++) {
            numKey[nums[i]] = i;
        }

        for(int i = 0; i < nums.size(); i++) {
            if(numKey.contains(target - nums[i]) && i != numKey[target - nums[i]]) {
                answer.push_back(i);
                answer.push_back(numKey[target - nums[i]]);
                return answer;
            }
        }
    }
};
