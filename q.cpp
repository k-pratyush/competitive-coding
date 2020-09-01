#include<iostream>
#include<bitset>

using namespace std;

bool solve(int n) {
	string bin = bitset<8>(n).to_string();

	int i = 0;
	while(bin[i] == '0') {
		i++;
	}
	bin = bin.substr(i);

	for(int i = 0; i < bin.size() - 1; i++) {
		if(bin[i] == bin[i+1])
			return false;
	}
	return true;
}

int main() {
	int n;
	cin >> n;
	cout << solve(n) << endl;	
}
