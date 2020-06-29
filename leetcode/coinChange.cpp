#include<iostream>
#include<vector>

using namespace std;

int helper(vector<int> coins, int amount) {
   vector<vector<int> >dp(coins.size() + 1, vector<int>(amount + 1, 0));
    dp[0][0] = 1;
    for(int i = 0; i <= coins.size(); i++) {
        dp[i][0] = 1;
    }
    for(int i = 1; i <= coins.size(); i++) {
        for(int j = 1; j <= amount; j++) {
            dp[i][j] = dp[i-1][j];
            if(j - coins[i - 1] >= 0) {
              dp[i][j] += dp[i][j - coins[i - 1]];
            }
        }
    }
    return dp[coins.size()][amount];
}

int change(int amount, vector<int>& coins) {
    return helper(coins, amount);
}

int main() {
    vector<int> coins = {1, 2, 5};
    cout << change(5, coins) << endl;
}