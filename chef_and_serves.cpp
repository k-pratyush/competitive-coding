#include <iostream>
#include <vector>

using namespace std;

int main() {
	long long t;
	cin >> t;
	while (t--) {
		long long p1, p2, k;
		cin >> p1 >> p2 >> k;
		if((p1+p2) % k == 0) {
			cout << "CHEF";
		}
		else cout << "COOK";
	}
}