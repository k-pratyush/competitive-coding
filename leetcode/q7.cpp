#include<iostream>
#include<string.h>

using namespace std;

void swap(char* x, char* y) {
	char temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

string revString(string s) {
	int l = 0;
	int r = s.length() -1;

	while(l < r) {
		swap(s[l], s[r]);
		l++;
		r--;
	}

	l = 0;
	r = 0;
	int i;

	for(i = 0; i <= s.length(); i++) {
		if(s[i] == ' ' || i == s.length()) {
			r = i - 1;
			while(l < r) {
				swap(s[l], s[r]);
				l++;
				r--;
			}
		l = i+1;
		}
	}
	return s;
}

int main() {
	cout << revString("your mom") << endl;
}
