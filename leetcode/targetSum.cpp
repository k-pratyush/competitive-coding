#include<iostream>
using namespace std;

int dp[1000][2005];
int helper(int i, vector<int> nums, int S, int total) {
    if(dp[i][total + 1001] != -1) {
        return dp[i][total + 1001];
    }
    if(i == nums.size() && S == total) {
        return 1;
    }
    if(i == nums.size()) {
        return 0;
    }
    int plus = helper(i + 1, nums, S, total + nums[i]);
    int minus = helper(i + 1, nums, S, total - nums[i]);
    // return plus + minus;
    dp[i][total + 1001] = plus + minus;
    return dp[i][total + 1001];
}

int findTargetSumWays(vector<int>& nums, int S) {
    // return helper(0, nums, S, 0);
    for(int i = 0; i < 1000; i++) {
        for(int j = 0; j < 2005; j++) {
            dp[i][j] = -1;
        }
    }
    return helper(0, nums, S, 0);
}