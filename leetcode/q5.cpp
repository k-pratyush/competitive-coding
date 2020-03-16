#include<iostream>
#include<string.h>

using namespace std;


int strStr(string haystack, string needle) {
	int m = haystack.length();
	int n = needle.length();
	int j;

	for(int i = 0; i < m; i++) {
		for(j = 0; j < n && i + j < m; j++) {
			if(haystack[i+j] != needle[j])
				break;
		}
		if(j == n)
			return j;
	}
	return -1;
}

int main() {
	string haystack = "aaba";
	string needle = "ba";
	cout << strStr(haystack, needle) << endl;
}
