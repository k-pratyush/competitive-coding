#include<iostream>
#include<string.h>
#include<algorithm>

using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		string input;
		string temp="";
		cin >> input;

		reverse(input.begin(), input.end());

		for(int i =0; i < input.length(); i++) {
			if(input[i] != '.') {
				temp += input[i];
			}
			else {
				reverse(temp.begin(), temp.end());
				cout << temp << ".";
				temp = "";
			}

		}
		reverse(temp.begin(), temp.end());
		cout << temp;
		cout << "\n";
	}
}