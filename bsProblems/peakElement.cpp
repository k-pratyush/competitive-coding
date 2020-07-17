#include <iostream>
#include <vector>

using namespace std;

int peakElement(vector<int> arr) {
	int left = 0;
	int right = arr.size() - 1;
	int mid;
	int n = arr.size();
	while(left <= right) {
		mid = left + (right - left)/2;
		if(mid > 0 && mid < n - 1) {
			if(arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1]) {
				return mid;
			} else if(arr[mid] > arr[mid - 1]) {
				left = mid+1;
			} else {
				right = mid-1;
			}	
		} else if(mid == 0) {
			if(arr[mid] > arr[1]) {
				return mid;
			} else {
				return 1;
			}
		} else if(mid == n - 1) {
			if(arr[n-1] > arr[n-2]) {
				return n-1;
			} else {
				return n - 2;
			}
		}
		
	}
	return -1;
}

int main() {
	vector<int> arr {70, 20, 10, 5, 4, 3};
	cout << peakElement(arr) << endl;
}