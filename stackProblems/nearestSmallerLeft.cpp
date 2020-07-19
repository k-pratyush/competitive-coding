#include <iostream>
#include <vector>
#include <stack>

using namespace std;

vector<int> NSL(vector<int> arr) {
	stack<int> st;
	vector<int> res;
	for(int i = 0; i < arr.size(); i++) {
		if(st.empty()) {
			res.push_back(-1);
		} else if(st.top() < arr[i]) {
			res.push_back(st.top());
		} else if(st.top() >= arr[i]) {
			while(!st.empty() && st.top() >= arr[i]) {
				st.pop();
			}
			if(st.empty()) {
				res.push_back(-1);
			} else {
				res.push_back(st.top());
			}
		}
		st.push(arr[i]);
	}
	return res;
}

int main() {
	vector<int> arr {1, 3, 2, 4, 5, 1};
	vector<int> res = NSL(arr);
	for(int i = 0; i < res.size(); i++) {
		cout << res[i] << " ";
	}
	cout << endl;
}
