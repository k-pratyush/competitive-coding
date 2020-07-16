bool canPartition(vector<int>& nums) {
    int s = 0;
    for(auto i: nums) {
        s += i;
    }
    if(s%2) {
        return false;
    }
    int k = s/2;
    int dp[nums.size()+1][k+1];
    for(int i = 0; i < nums.size();i++) {
        dp[i][0] = 1;
    }
    for(int j = 1; j < k+1; j++) {
        dp[0][j] = 0;
    }
    for(int i = 1; i <= nums.size(); i++) {
        for(int j = 1; j <= k; j++) {
            if(nums[i-1] <= j)
                dp[i][j] = dp[i-1][j-nums[i-1]] || dp[i-1][j];
            else
                dp[i][j] = dp[i-1][j];
        }
    }

    return dp[nums.size()][k];
}
