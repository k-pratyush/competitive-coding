#include<iostream>
#include<vector>

using namespace std;

int getLower(int k,int ip1,int ip2) {
	if(abs(k - ip1) >= abs(ip2 - k))
		return ip2;
	else return ip1;
}


int closest(vector<int> input, int n, int k) {

	if(k<=input[0]) 
		return input[0];
	if(k>=input[n-1])
			return input[n-1];
	
	int l = 0;
	int r = n;
	int m = 0;

	while(l < r) {
		
		m = (l + r)/2;

		if(input[m] == k)
			return input[m];

		if(k < input[m]) {
			if (m > 0 && k > input[m-1])
				return getLower(k, input[m-1], input[m]);
			r = m;
		}
		else {
			if(m < n-1 && k < input[m+1])
				return getLower(k, input[m], input[m+1]);
			l = m+1;
		}
	}
	return input[m];
}


int main() {
	int t;
	cin >> t;

	while(t--) {
		int n, k;
		vector<int> input;
		cin >> n >> k;
		input.resize(n);

		for(int i = 0; i < n; i++) {
			cin >> input[i];
		}
		cout << closest(input, n, k) << "\n";
	}
}