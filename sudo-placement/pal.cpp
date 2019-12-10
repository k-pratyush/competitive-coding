#include<iostream>
#include<string.h>

using namespace std;


int main() {
	int t;
	cin >> t;

	while(t--) {
		int n;
		bool flag = true;
		cin >> n;
		string input;
		cin >> input; 
		int i = 0;
		int j = n-1;

		while(i != j && i < n/2) {
			if(input[i++] != input[j--])
				flag = false;
		}
		if(flag)
			cout << "Yes" << "\n";
		else
			cout << "No" << "\n";
	}
}