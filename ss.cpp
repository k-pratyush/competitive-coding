#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>

using namespace std;

vector<string> generateSubstrings(string s) {
	int l = s.length();
	vector<string> res;

	for(int i = 0; i < l; i++) {
		for(int j = i+1; j <= l; j++) {
			res.push_back(s.substr(i, j-i));
		}
	}
	return res;
}

bool containsAllChars(string s, unordered_set<char> st) {
	for(auto i: s) {
		if(!st.count(i)) {
			return false;
		} else {
			st.erase(i);
		}
	}
	return !st.size();
}

int main() {
	string s = "aabcbcdbca";
	vector<string> v = generateSubstrings(s);
	unordered_set<char> st;
	for(auto i: s) {
		st.insert(i);
	}
	int minLen = INT_MAX;
	string res = "";
	for(auto str: v) {
		if(containsAllChars(str, st)) {
			int len = str.length();
			if(len < minLen) {
				minLen = len;
				res = str;	
			}
		}
	}
	cout << res << endl;
}
