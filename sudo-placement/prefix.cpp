#include<iostream>
#include<vector>
#include<string.h>
#include<algorithm>

using namespace std;


int main() {
	int t;
	cin >> t;

	while(t--) {
		int n;
		int i = 0;
		vector<string> input;

		cin >> n;
		input.resize(n);

		for(int i = 0; i < n; i++) {
			cin >> input[i];
		}

		std::sort(input.begin(), input.end());

		if(n == 1)
			cout << input[0];

		if(input[0][0] != input[n-1][0]) {
			cout << "-1";
		}

		while(input[0][i] == input[n-1][i] && n != 1) {
			cout << input[0][i];
			i++;
		}
		cout << "\n";
	}
}
