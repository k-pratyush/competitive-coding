#include<iostream>
#include<vector>

using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		vector<int> arr(n);
		for(int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		if(arr.size() == 1) {
			cout << 0 << endl;
			break;
		}
		long long sum = 0;
		for(int i = 1; i < n; i++) {
			if(abs(arr[i] - arr[i-1]) != 0) {
				sum += abs(arr[i] - arr[i-1]) - 1;
			}
		}
		cout << sum << endl;
	}
}
