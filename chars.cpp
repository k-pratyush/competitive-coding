#include <iostream>
#include <utility>
#include <stack>

using namespace std;

int main() {
	string s = "abbcccb";
	int k = 3;
	stack<pair<char, int> > st;

	for(auto i: s) {
		if(!st.empty()) {
			if(st.top().first == i && st.top().second < k-1) {
				pair<char, int> p = st.top();
				st.pop();
				p.second += 1;
				st.push(p);
			} else if(st.top().first == i && st.top().second == k - 1)
				st.pop();
			else {
				st.push(make_pair(i, 1));
			}
		} else {
			st.push(make_pair(i, 1));
		}
	}
	string res = "";
	while(!st.empty()) {
		pair<char, int> p = st.top();
		st.pop();
		for(int i = 0; i < p.second; i++) {
			res += p.first;
		}
	}
	reverse(res.begin(), res.end());
	cout << res << endl;
}
