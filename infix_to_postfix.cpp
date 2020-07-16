#include<iostream>
#include<string>
#include<stack>

using namespace std;

bool isOperand(char x) {
	if(x == '+' || x == '-' || x == '*' || x == '/')
		return false;
	return true;
}

int precedence(char x) {
	if(x == '+' || x == '-')
		return 1;
	else if(x == '*' || x == '/')
		return 2;
	return 0;
}

void convert(string s) {
	stack<char> st;
	st.push('e');
	string result = "";
	for(auto c: s) {
		if(isOperand(c)) {
			result += c;
		} else {
			if(precedence(c) > precedence(st.top())) {
				st.push(c);
			} else {
				while(precedence(c) <= precedence(st.top())) {
					char p = st.top();
					result += p;
					st.pop();
				}
				st.push(c);
			}
		}
	}
	while(st.top() != 'e') {
		result += st.top();
		st.pop();
	}
	cout << result << endl;
}

int main() {
	string s = "a*b+c";
	convert(s);
}
