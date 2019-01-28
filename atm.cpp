#include <iostream>
#include <vector>

using namespace std;

int main() {
	int t, n, k;
	vector <int> ind_cash;
	vector <int> response;
	cin >> t;
	while(t--) {
		cin >> n >> k;
		ind_cash.resize(n);
		response.resize(n);
		for(int i = 0; i < n; i++) {
			cin >> ind_cash[i];
		}
		for(int i = 0; i < n; i++) {
			if(k - ind_cash[i] >= 0) {
				k -= ind_cash[i];
				response[i] = 1;
			}
			else {
				response[i] = 0;
			}
		}
	for(int i = 0; i < n; i++) {
		cout << response[i];
	}
	cout <<"\n";
	}
}