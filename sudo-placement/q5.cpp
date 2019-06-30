#include<iostream>

using namespace std;

int main() {

	int t;
	cin >> t;

	while(t--) {
		int n;
		cin >> n;
		int input[n];

		for(int i = 0; i < n; i++) {
			cin >> input[i];
		}

		while(n--) {
			cout << input[n] << " ";
		}
		cout << "\n";

	}
}