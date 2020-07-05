class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.length() == 0) {
            return 0;
        }
        vector<int> hash(256, -1);
        int start = 0;
        int longest = 1;
        int n = s.length();
        for(int i = 0; i < s.length(); i++) {
            if(hash[s[i]] >= start) {
                longest = max(longest, i - start);
                start = hash[s[i]] + 1;
            }
            hash[s[i]] = i;
        }
        longest = max(longest, n - start);
        return longest;
    }
};