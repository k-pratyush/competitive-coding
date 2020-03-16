#include<iostream>
#include<string.h>
#include<vector>

using namespace std;

string revWordsOnePass(string s) {
	int j = s.length();
	string res = "";
	for(int i = s.length() - 1; i >= 0; i--) {
		if(s[i] == ' ') {
			j = i;
		} else if(i == 0 || s[i - 1] == ' ') {
			res += ' ';
			res += s.substr(i, j);
		}
	}
	return res.substr(1, res.length());
}

int main() {
	string s;
	getline(cin, s);
	cout << revWordsOnePass(s) << endl;
}
