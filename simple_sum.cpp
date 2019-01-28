#include <iostream>
#include <math.h>

using namespace std;

int main() {
	int t;
	cin >> t;

	while(t--) {
		int n, m, sum = 0;
		cin >> n >> m;

		for(int i = 1; i <= n; i++) {
			sum += pow(i, i);
		}
		cout << sum % m << "\n";
	}
}