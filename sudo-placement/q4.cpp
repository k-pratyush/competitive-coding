#include<iostream>
#include<vector>

using namespace std;

#define ll long long

int main() {
	int t;
	cin >> t;

	while(t--) {
		ll n, max;
		vector<ll>input;
		vector<ll>result;
		cin >> n;
		input.resize(n);
		for(int i = 0; i < n; i++) {
			cin >> input[i];
		}
		max = input[n-1];
		result.push_back(max);

		for(int i = n-2; i >= 0; i--) {
			if(max <= input[i]) {
				max = input[i];
				result.push_back(max);
			}
		}
		
		int index = result.size();
		while(index--) {
			cout << result[index] << " ";
		}
		cout << "\n";

	}
}