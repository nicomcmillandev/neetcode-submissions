class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) {
            return false;
        }
        unordered_map<char, int> wordCount;
        for(const char c : s) {
            wordCount[c]++;
        }
        for(const char c : t) {
            wordCount[c]--;
        }
        
        for(const auto& [key, value] : wordCount)
        if(value != 0) {
                return false;
            }
        return true;
    }
};
