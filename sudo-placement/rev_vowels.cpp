#include<iostream>
#include<string.h>
#include<vector>
#include<stack>

using namespace std;

bool isVowel(char a) {
	if(a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u')
		return true;
	return false;
}

int main() {
	int t;
	cin >> t;

	while(t--) {
		string input;
		cin >> input;
		stack<char> vowel;

		for(int i = 0; i < input.length(); i++) {
			if(isVowel(input[i])) {
				vowel.push(input[i]);
			}
		}
		for(int i = 0; i < input.length(); i++) {
			if(isVowel(input[i])) {
				input[i] = vowel.top();
				vowel.pop();
			}
		}
		cout << input << "\n";
	}
}