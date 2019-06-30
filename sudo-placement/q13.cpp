#include<iostream>
#include<vector>

using namespace std;

bool isEven(int date) {
	if (date % 2 == 0)
		return true;
	return false;
}


int main() {
	int t;
	cin >> t;

	while(t--) {
		int n, date;
		int result = 0;
		vector<int>input;
		vector<int>rates;
		cin >> n >> date;
		input.resize(n);
		rates.resize(n);

		for(int i = 0; i < n; i++) {
			cin >> input[i];
		}

		for(int i = 0; i < n; i++) {
			cin >> rates[i];
		}
		if(isEven(date)) {
			for(int i =0; i < n; i++) {
				if(!isEven(input[i]))
					result += rates[i];
			}
		}
		else {
			for(int i =0; i < n; i++) {
				if(isEven(input[i]))
					result += rates[i];
			}
		}
		cout << result << "\n";
	}
}