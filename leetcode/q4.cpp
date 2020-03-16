#include<iostream>
#include<string.h>

using namespace std;

bool validPalindrome(string s) {
	int i = 0, j = s.length() -1;

	while(i < j) {
		while(i < j && (s[i] < 65 || s[i] > 122))
			i++;
		while(i < j && (s[j] < 65 || s[j] > 122))
			j--;
		if(s[i] != s[j])
			return false;
		i++;
		j--;
	}
	return true;
}

int main() {
	string s = "a man, a plan, a canal: panama";
	cout << validPalindrome(s) << endl;
}
