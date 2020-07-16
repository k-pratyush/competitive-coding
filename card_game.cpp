#include<iostream>
#include<vector>
using namespace std;

long long sumOfDigits(long long n) {
	long long sum = 0;
	while(n > 0) {
		int digit = n % 10;
		sum += digit;
		n = n/10;
	}
	return sum;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		vector<long long> a1(n);
		vector<long long> a2(n);
		long long p1 = 0;
		long long p2 = 0;
		for(int i = 0; i < n; i++) {
			cin >> a1[i] >> a2[i];
		}
		for(int i = 0; i < n; i++) {
			if(sumOfDigits(a1[i]) > sumOfDigits(a2[i])) {
				p1 += 1;
			} else if(sumOfDigits(a2[i]) > sumOfDigits(a1[i])) {
				p2 += 1;
			} else {
				p1++;
				p2++;
			}
		}
		if(p1 > p2) {
			cout << "0 " << p1 << endl;
		} else if (p2 > p1) {
			cout << "1 "<< p2 << endl;
		} else {
			cout << "2 " << p1 << endl;
		}
	}
}