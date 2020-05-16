#include<iostream>
#include<math.h>

using namespace std;


int main() {
	int t;
	cin >> t;
	while(t--) {
		int n, k;
		cin >> n >> k;
		int num_div = 0;
		int num_prime = 0;
		int i;
		for(i = 1; i < 100; i++) {
			for(int j = 1; j <= i; j++) {
				if(i % j == 0) {
					num_div++;
				}
			}
			if(num_div == n) {
				break;
			} else {
				num_div = 0;
			}
		}
		int temp = i;
		for(int x = 2; x < sqrt(i); x++) {
			while(i % x == 0) {
				i = i/x;
				num_prime++;
			}
			if(i > 1) {
				num_prime++;
			}
		}
		if(num_prime == k)
			cout << temp;
	}
}