#include <iostream>
#include <vector>

using namespace std;

int bitonicMax(vector<int> arr) {
	int left = 0;
	int right = arr.size() - 1;
	int n = arr.size();
	int mid;
	if(arr.size() == 1) {
		return arr[0];
	}

	while(left <= right) {
		mid = left + (right - left)/2;
		if(mid > 0 && mid < n - 1) {
			if(arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1]) {
				return arr[mid];
			} else if(arr[mid] < arr[mid - 1]) {
				right = mid - 1;
			} else {
				left = mid + 1;
			}
		} else if(mid == 0) {
			if(arr[mid] > arr[1]) {
				return arr[mid];
			} else {
				return arr[1];
			}
		} else if(mid == n - 1) {
			if(arr[n - 1] > arr[n - 2]) {
				return arr[n - 1];
			} else {
				return arr[n - 2];
			}
		}
	}
	return -1;
}

int main() {
	vector<int> arr {5, 14, 8};
	cout << bitonicMax(arr) << endl;
}
