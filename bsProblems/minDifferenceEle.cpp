#include <iostream>
#include <vector>

using namespace std;

int minDiff(vector<int> arr, int key) {
	int left = 0;
	int right = arr.size() - 1;
	int mid;
	int floor = INT_MAX, ceil = INT_MAX;

	while(left <= right) {
		mid = left + (right - left)/2;
		if(arr[mid] == key) {
			return arr[mid];
		}
		if(arr[mid] < key) {
			floor = arr[mid];
			left = mid+1;
		} else {
			ceil = arr[mid];
			right = mid - 1;
		}
	}
	if(abs(floor - key) > abs(ceil - key)) {
		return ceil;
	}
	return floor;
}

int main() {
	vector<int> arr {4, 6, 10, 15, 20};
	cout << minDiff(arr, 6) << endl;
}
