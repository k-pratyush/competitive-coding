#include<iostream>
#include<vector>

using namespace std;

vector<int> dp(1000, -1);

long long int coinsDP(int target, vector<int> coins) {
	if(target < 0)
		return INT_MAX;
	if(target == 0)
		return 0;
	if(dp[target] != -1)
		return dp[target];

	long long int best = INT_MAX;

	for(auto c: coins)
		best = min(best, coinsDP(target - c, coins) + 1);
	dp[target] = best;
	return best;
}

int main() {
	int target, n;
	vector<int> coins;
	cin >> n >> target;
	coins.resize(n);

	for(int i = 0; i < n; i++) {
		cin >> coins[i];
	}

	cout << coinsDP(target, coins);
}