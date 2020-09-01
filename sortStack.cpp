#include <iostream>
#include <stack>

using namespace std;

void insert(stack<int> &st, int ele) {
	if(!st.size() || st.top() <= ele) {
		st.push(ele);
		return;
	}
	int temp = st.top();
	st.pop();
	insert(st, ele);
	st.push(temp);
}

void sort(stack<int> &st) {
	if(st.size() == 1) {
		return;
	}
	int temp = st.top();
	st.pop();
	sort(st);
	insert(st, temp);
}

int main() {
	stack<int> st;
	st.push(4);
	st.push(3);
	st.push(5);
	st.push(1);

	sort(st);

	while(!st.empty()) {
		cout << st.top() << " ";
		st.pop();
	}
}
