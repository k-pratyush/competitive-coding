//longest increasing subsequence

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int LIS(vector<int> arr) {

	int n = arr.size();
	vector<int> lis(n);
	lis[0] = 1;

	for(int i = 1; i < n; i++) {
		lis[i] = 1;

		for(int j = 0; j < i; j++) {
			if(arr[i] > arr[j] && lis[i] < lis[j] + 1) {
				lis[i] = lis[j] + 1;
			}
		}
	}
	return *max_element(lis.begin(), lis.end());
}

int main() {
	vector<int> arr = { 10, 22, 9, 33, 21, 50, 41, 60 };
	cout << LIS(arr);
}