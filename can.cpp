#include <iostream>
#include <vector>

using namespace std;

int dp[1005][1005];
int solve(int i, vector<int> arr, int s1, int s2, int sum, int target) {
	if(i == arr.size() && s1 == target && s2 == target && (sum - s1 - s2) == target) {
		return 1;
	}
	if(i == arr.size())
		return 0;
	if(dp[s1][s2] != -1)
		return dp[s1][s2];

	int a1 = solve(i+1, arr, s1 + arr[i], s2, sum, target);
	int a2 = solve(i+1, arr, s1, s2 + arr[i], sum, target);
	int a3 = solve(i+1, arr, s1, s2, sum, target);

	return dp[s1][s2] = a1 || a2 || a3;
}

int canPartition(vector<int> arr) {
	memset(dp, -1, sizeof(dp));
	int sum = 0;
	for(int i = 0; i < arr.size(); i++) {
		sum += arr[i];
	}
	if(sum % 3) {
		return 0;
	}
	int target = sum / 3;
	return solve(0, arr, 0, 0, sum, target);
}

int main() {
	vector<int> arr {1, 1, 1};
	cout << canPartition(arr) << endl;
}