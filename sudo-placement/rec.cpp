#include<iostream>

using namespace std;


int rec(int a) {

	if(a > 0) {
		cout << a << " ";
		rec(a-5);
	}
	cout << a << " ";
	
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		int a;
		cin >> a;
		rec(a);
		cout << "\n";
	}
}