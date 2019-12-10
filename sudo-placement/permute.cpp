#include<iostream>
#include<string.h>
#include<algorithm>

using namespace std;

int main() {
	int t;
	cin >> t;

	while(t--) {
		string input;
		cin >> input;

		do {
			cout << input << " ";
		}
		while (std::next_permutation(input.begin(), input.end()));
	}
}