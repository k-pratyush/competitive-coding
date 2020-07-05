class Solution {
public:
    int dp[1000][1000];
    int helper(int numRows, int j) {
        if(dp[numRows][j] != -1) {
            return dp[numRows][j];
        }
        if(numRows == 1 || j == numRows || j == 1) {
            return 1;
        }
        if(j < 1 || numRows < 1) {
            return 0;
        }
        dp[numRows][j] = helper(numRows - 1, j - 1) + helper(numRows - 1, j);
        return dp[numRows][j];
    }
    vector<vector<int>> generate(int numRows) {
        memset(dp, -1, sizeof(dp));
        vector<vector<int> > results(numRows);
        for(int i = 1; i <= numRows; i++) {
            for(int j = 1; j <= i; j++) {
                results[i-1].push_back(helper(i, j));
            }
        }
        return results;
    }
};