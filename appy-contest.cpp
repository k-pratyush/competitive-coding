#include <iostream>
#include <math.h>

using namespace std;

int main() {

	long long int t, n, a, b, k;
	long long int appy, chef;
	cin >> t;

	while(t--) {

		appy = 0;
		chef = 0;
		cin >> n;
		cin >> a;
		cin >> b;
		cin >> k;

		for(size_t i = 1; i <= sqrt(n); i++) {
			if(i % a == 0 && i % b != 0)
				appy++;

			if(i % b == 0 && i % a != 0)
				chef++;
		}

		appy = appy * n;
		chef = chef * n;
		if(chef+appy < k)
			cout << "Lose\n";
		else
			cout << "Win\n";
	}
}