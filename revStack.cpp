#include <iostream>
#include <stack>

using namespace std;

void solve(stack<int> &st, int ele) {
	if(st.empty()) {
		st.push(ele);
		return;
	}
	int temp = st.top();
	st.pop();
	solve(st, ele);
	st.push(temp);
}

void revStack(stack<int> &st) {
	if(st.empty()) {
		return;
	}
	int temp = st.top();
	st.pop();
	revStack(st);
	solve(st, temp);
}

int main() {
	stack<int> st;
	st.push(1);
	st.push(2);
	st.push(3);
	st.push(4);
	revStack(st);
	while(!st.empty()) {
		cout << st.top() << " ";
		st.pop();
	}
}
