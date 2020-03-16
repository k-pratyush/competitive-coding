#include<iostream>
#include<string.h>

using namespace std;

bool isValidNumber(string s) {
	int i = 0;
	bool isNumeric = false;

	while(s[i] == ' ' && s[i] != '\0')
		i++;
	if(s[i] != '\0' && (s[i] == '+' || s[i] == '-')) {
		i++;
		isNumeric = false;
	}

	while(s[i] != '\0'  && (s[i] - '0' >= 0 && s[i] - '0' <= 9)) {
		i++;
		isNumeric = true;
	}

	if(s[i] != '\0' && s[i] == '.') {
		i++;
		while(s[i] != '\0' && (s[i] - '0' >= 0 && s[i] - '0' <= 9)) {
			i++;
			isNumeric = true;
		}
	}

	if(isNumeric && s[i] == 'e') {
		i++;
		isNumeric = false;
		if(s[i] != '\0' && (s[i] == '+' || s[i] == '-'))
			i++;
		while(s[i] != '\0' && (s[i] - '0' >= 0 && s[i] - '0' <= 9)) {
			i++;
			isNumeric = true;
		}
	}

	while(s[i] != '\0' && s[i] == ' ')
		i++;
	return isNumeric && s[i] == '\0';
}

int main() {
	cout << isValidNumber(" -.") << endl;
}