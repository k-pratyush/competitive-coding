#include<iostream>
#include<vector>
#include<algorithm>

#define ll long long

using namespace std;

int main() {
	int t;
	cin >> t;

	while(t--) {
		ll n;
		vector<ll> input;
		cin >> n;
		input.resize(n);

		for(int i =0; i < n; i++) {
			cin >> input[i];
			if(input[i] %2 != 0)
				input[i] *= -1;
		}

		std::sort(input.begin(), input.end());


		for(int i = 0; i < n; i++) {
			if(input[i] <= 0)
				input[i] *= -1;
			cout << input[i] << " ";
		}
		cout << "\n";

	}
}