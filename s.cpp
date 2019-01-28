#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool check_upper(char s[]) {
	for(int i = 65; i <= 89; i++) {
		if(char(i) == s[0]){
			return true;
			break;
		}
		//return false;
	}
	return false;
}

bool check_lower(char s[]) {
	for(int i = 97; i <= 122; i++) {
		if(char(i) == s[0]){
			return true;
			break;
		}
		//return false;
	}
	return false;
}

int main() {
	int t,n, i = 0;
	cin >> t;
	cin >> n;
	char s[n];
	vector<int> v(n);
	for(int i = 0; i < n; i++)
		v[i] = 1;
	//for(int j = 0; j < t; j++)

	while(t != 0) {

		for(int i = 0; i < n; i++)
			cin >> s[i];

		for(i=0; i<n; i++){
			if(check_lower(s[i]) != 0) {
				v.push_back(1);
			}
			else if(check_upper(s[i]) != 0) {
				v.push_back(0);
			}
			else {
				v.push_back(2);
			}
		}
		for(int x = 0; x < n; x++)
			cout << v[x];
		t--;
	}
}
