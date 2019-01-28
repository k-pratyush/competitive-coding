#include <iostream>
#include <stack>
using namespace std;

int rev(char input[], int sz) {

	stack<string> s;
 	char word[sz];
	int j = 0;

	for(int i = 0; i <= sz; i++ ) { 
  		if(input[i] != ' ' && input[i] != '\0') {
   			word[j++] = input[i];
  		}
  	else {
  		word[j++] = '\0';   
   		s.push(word);
   		j = 0;
  	}
 }

 while (!s.empty()) {
  string w = s.top();
  s.pop();
  cout << w << " ";
 }
}

int main() {

	char input[] = "XYZ";
	int sz = sizeof(input) / sizeof(char) - 1;
	rev(input, sz);
}