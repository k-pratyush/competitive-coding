#include <iostream>
#include <algorithm>
#include <vector>

using std::cin;
using std::cout;

int main() {
	long int t, n;
	cin >> t;
	while(t--) {
		cin >> n;
		long int a[n];
		for(long int i = 0; i < n; i++) {
			cin >> a[i];
		}
		std::sort(a, a+n);

		long int low = a[1] - a[0];

		for(long int i = 0; i < n-1; i++) {
			if(a[i+1] - a[i] <= low) {
				low = a[i+1] - a[i];
			}
		}
		cout << low <<"\n";
	}
	return 0;
}