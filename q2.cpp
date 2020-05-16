#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<math.h>

using namespace std;



int main() {
	long int t;
	cin >> t;
	while(t--) {
		long long int n, a, count = 1, edge = 1, result = 0;
		cin >> n >> a;
		if(a == 0)
			cout << 0 << endl;
		else {
			for(long int i = 0; i < n; i++) {
				result += pow(a, edge);
				a *= pow(a, edge);
				edge = 2 * sqrt(count) + 1;
				count += edge;
			}
			cout << result % (1000000000 + 7) << endl;	
		}
	}
}