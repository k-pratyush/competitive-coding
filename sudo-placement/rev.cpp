#include<iostream>

using namespace std;

void rev(long long int a) {
	if(a<=0)
		return;
	cout << a%10;
	rev(a/10);
}


int main() {
	int t;
	cin >> t;
	while(t--) {
		long long int n;
		cin >> n;
		while(n%10 == 0)
			n/=10;
		rev(n);
		cout << "\n";
	}
}