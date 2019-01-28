#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

int main() {
	long long t, n;
	int flag = 0;
	int a;
	cin >> t;
	vector <int> arr(t);

	for(int i =0; i<t; i++) {
		cin >> n;
		a = log(n)/log(2);
		flag = a;
		arr[i] = flag;
	}

	for(int i = 0; i < t; i++)
		cout << arr[i]+1 <<"\n";
}
