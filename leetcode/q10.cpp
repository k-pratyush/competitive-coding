#include<iostream>
#include<string.h>
#include<vector>
#include<map>

using namespace std;

int longestSubstrWithoutRepeatingChar(string s) {
	if(s.length() == 0)
		return 0;
	vector<int> H(256, -1);
	int maxL = 1, n = s.length(), start = 0;

	for(int i = 0; i < n; i++) {
		if(H[s[i]] >= start) {
			maxL = max(i - start, maxL);
			start = H[s[i]] + 1;
		}
		H[s[i]] = i;
	}
	maxL = max(n - start, maxL);
	return maxL;

}

int main() {
	string s = "dvdf";
	cout << longestSubstrWithoutRepeatingChar(s);
}
