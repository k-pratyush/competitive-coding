#include<iostream>

int dp[10000] = {0};
int climbStairs(int n) {
    if(n == 0) {
        return 1;
    }
    if(n < 0) {
        return 0;
    }
    if(dp[n] != 0) {
        return dp[n];
    }
    dp[n] = climbStairs(n - 1) + climbStairs(n - 2);
    return dp[n];
}

int main() {
    int n = 5;
    climbStairs(n);
}