#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		vector<int> arr(n);
		for(int i = 0; i < n; i++)
			cin >> arr[i];
		std::sort(arr.begin(), arr.end(), greater<int>());
		long long int result = 0;

		for(int i = 0; i < n; i++)
			if(arr[i] > i)
				result += arr[i] - i;
		cout << result % 1000000007 << endl;
	}
}