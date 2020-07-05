class Solution {
public:
    int dp[1000][1000];
    int helper(int i, int j, int m, int n) {
        if(dp[i][j] != -1) {
            return dp[i][j];
        }
        if(i == m || j == n) {
            return 1;
        }
        // else if(i == m) {
        //     dp[i][j] = helper(i, j +1, m, n);
        //     return dp[i][j];
        // } else if(j == n) {
        //     dp[i][j] = helper(i+1, j, m,n);
        //     return dp[i][j];
        // }
        dp[i][j] = helper(i+1,j,m,n) + helper(i, j+1, m, n);
        return dp[i][j];
    }
    int uniquePaths(int m, int n) {
        memset(dp, -1, sizeof(dp));
        return helper(1, 1, m,n);
        // return count;
    }
};