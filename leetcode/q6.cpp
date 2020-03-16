#include<iostream>
#include<string.h>
#include<vector>
#include<stack>

using namespace std;

string revWords(vector<string> v) {
	stack<string> st;
	string res = "";
	for(int i = 0; i < v.size(); i++) {
		st.push(v[i]);
	}
	while(!st.empty()) {
		res += st.top();
		res += " ";
		st.pop();
	}
	return res.substr(0, res.size() - 1);
}

vector<string> stringToArray(string s) {
	vector<string> res;
	string word = "";
	int j = 0;
	for(int i = 0; i < s.length(); i++) {
		if(s[i] == ' ') {
			j = i;
			res.push_back(word);
			word = "";
		} else {
			word += s[i];
		}
	}
	res.push_back(s.substr(j+1, s.length() - 1));
	return res;
}

int main() {
	string s, result;
	getline(cin, s);
	vector<string> v = stringToArray(s);
	result = revWords(v);
	cout << result << endl;
}
