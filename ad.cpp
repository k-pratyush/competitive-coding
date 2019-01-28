#include <iostream>

using namespace std;


int main() {
	int t;
	cin >> t;

	while (t--) {
		int m, n, x, y;
		cin >> m >> n >> x >> y;

		if((((m-1) % x == 0 || (m-1) % x == 1)) && ((n-1) % y == 0 || (n-1) % y == 1))
			cout << "YES" << "\n";
		else
			cout << "NO" << "\n";
	}
}