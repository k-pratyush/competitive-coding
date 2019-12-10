#include<iostream>
#include<vector>

using namespace std;

int main() {
	int t;
	cin >> t;

	while(t--) {
		int n;
		vector<int> input;
		cin >> n;

		int lsum = 0;
		int sum = 0;
		input.resize(n);

		for(int i = 0; i < n; i++)
			cin >> input[i];

		for(int i = 0; i <n; i++)
			sum += input[i];

		for(int i = 0; i < n; i++) {
			sum -= input[i];
			if(sum == lsum) {
				cout << i+1 << "\n";
				break;
			}
			lsum += input[i];

		}
		if(lsum != sum)
			cout << -1 << "\n";

	}
}
