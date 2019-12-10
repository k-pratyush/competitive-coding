#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

#define ll long long

int main() {
	
	ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
	int t;
	cin >> t;

	while(t--) {
		ll n, m;
		vector<ll> input;
		cin >> n;
		input.resize(n);
		for(int i = 0; i < n; i++)
			cin >> input[i];
		cin >> m;

		std::sort(input.begin(), input.end());

		int min_diff = 2147483647;
		int high = 0;
		int low = 0;

		for(int i = 0; i+m-1<n; i++) {

		int diff = input[i+m-1] - input[i];

		if(diff < min_diff) {
			min_diff = diff;
			low = i;
			high = i+m-1;
		}
	}

		cout << input[high] - input[low] << "\n";

	}
}