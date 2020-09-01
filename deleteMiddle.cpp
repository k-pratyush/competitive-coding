#include <iostream>
#include <stack>

using namespace std;

void solve(stack<int> &st, int k) {
	if(k == 1) {
		st.pop();
		return;
	}
	int temp = st.top();
	st.pop();
	solve(st, k-1);
	st.push(temp);
}

void deleteMiddle(stack<int> &st) {
	int k = (int)st.size()/2 + 1;
	solve(st, k);
}

int main() {
	stack<int> st;
	st.push(1);
	st.push(2);
	st.push(3);
	st.push(4);
	st.push(5);
	deleteMiddle(st);
	while(!st.empty()) {
		cout << st.top() << " ";
		st.pop();
	}
}
