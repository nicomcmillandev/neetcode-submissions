class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int, int> numCount;
        for(const int num : nums) {
            numCount[num]++;
            if(numCount[num] > 1) {
                return true;
            }
        }
        return false;
    }
};