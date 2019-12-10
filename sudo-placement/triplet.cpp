#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool isTriplet(vector<int> input, int n) {
	for(int i = n-1; i>=2; i--) {
		int r = i - 1;
		int l = 0;
		while(l < r) {
			if(input[l] + input[r] == input[i]) {
				return true;
			}
			else if(input[l] + input[r] < input[i])
				l++;
			else if(input[l] + input[r] > input[i])
				r--;
		}
	}
	return false;
}

int main() {
	int t;
	cin >> t;

	while(t--) {
		int n;
		vector<int> input;
		cin >> n;
		input.resize(n);

		for(int i = 0; i < n; i++) {
			cin >> input[i];
		}
		for(int i = 0; i < n; i++) {
			input[i] = input[i] * input[i];	
		}
		std::sort(input.begin(), input.end());
		if(isTriplet(input, n))
			cout << "Yes" << "\n";
		else
			cout << "No" << "\n";
	}
}