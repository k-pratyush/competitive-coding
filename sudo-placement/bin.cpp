#include<iostream>
#include<vector>
#include<string.h>

using namespace std;


int main() {
	int t;
	cin >> t;

	while(t--) {
		string input;
		int n;
		int count = 0;
		cin >> n;
		cin >> input;
		for(int i = 0; i < n; i++) {
			if(input[i] == '1')
				count++;
		}
		cout << count * (count - 1)/2 << "\n";
	}
}