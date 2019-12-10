#include<iostream>
#include<vector>
#include<algorithm>


using namespace std;

int main() {
	int t;
	cin >> t;

	while(t--) {

		int n, left, right;
		cin >> n;
		vector<int> input, result;
		input.resize(n);
		result.resize(n);

		for(int i = 0; i < n; i++) {
			cin >> input[i];
		}

		std::sort(input.begin(), input.end());

		result[(n-1)/2] = input[0];
		left = (n-1)/2 - 1;
		right = (n-1)/2 + 1;

		for(int i = 1; i < n; i++) {
			if(i%2 != 0) 
				result[right++] = input[i];
			else 
				result[left--] = input[i];
		}

		for(int i = 0; i < n; i++) {
			cout << result[i] << " ";
		}
		cout << "\n";

	}
}
