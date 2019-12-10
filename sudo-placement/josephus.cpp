#include<iostream>

using namespace std;

int josephus(int n, int k) {
	
	if(n == 1) 
		return 1;

	
	return (k-1 + josephus(n - 1, k) )% n + 1;

}


int main() {
	int t;
	cin >> t;

	while(t--) {
		int n, k;
		cin >> n >> k;
		cout <<josephus(n, k) << "\n";

	}
}