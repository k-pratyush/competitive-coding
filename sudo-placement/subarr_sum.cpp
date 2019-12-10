#include<iostream>
#include<vector>

using namespace std;

int main() {
	int t;
	cin >> t;

	while(t--) {
		int n, k;
		vector<int> input;
		cin >> n >> k;

		input.resize(n);

		for(int i = 0; i < n; i++) {
			cin >> input[i];
		}

		int i = 0;
		int j = i+1;
		long long sum = input[i] + input[j];

		while(sum != k && j <= n-1) {
			if(sum < k) {
				sum += input[++j];
			}
			else if(sum > k) {
				sum -= input[i];
				i++;
			}
		}
		if(sum == k) {
			cout << i+1 << " " << j+1 << "\n";
		}
		else {
			cout << -1 << "\n";
		}
	}
}