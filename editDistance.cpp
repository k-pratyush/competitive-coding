class Solution {
public:
    int helper(string word1, string word2, int l1, int l2) {
        if(l1  == 0) {
            return l2;
        }
        if(l2 == 0) {
            return l1;
        }
        if(word1[l1-1] == word2[l2-1]) {
            return helper(word1, word2, l1 - 1, l2 - 1);
        }
        int a1 = helper(word1, word2, l1, l2 - 1);
        int a2 = helper(word1, word2, l1 - 1, l2);
        int a3 = helper(word1, word2, l1 - 1, l2 - 1);
        return 1+min(a1, min(a2, a3));
        
    }
    
    int minDistance(string word1, string word2) {
        int l1 = word1.length();
        int l2 = word2.length();
        return helper(word1, word2, l1, l2);
    }
};