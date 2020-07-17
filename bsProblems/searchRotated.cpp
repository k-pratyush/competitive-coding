#include <iostream>
#include <vector>

using namespace std;

int getMinIndex(vector<int> arr) {
	int n = arr.size();
	int left = 0;
	int right = n - 1;
	int mid, prev, next;

	while(left <= right) {
		mid = left + (right - left)/2;
		next = (mid + 1)%n;
		prev = (mid + n - 1)%n;
		if(arr[mid] <= arr[prev] && arr[mid] <= arr[next]) {
			return mid;
		} else if(arr[mid] <= arr[right]) {
			right = mid - 1;
		} else if(arr[mid] >= arr[left]) {
			left = mid + 1;
		}
	}
}

int searchRotated(vector<int> arr, int key) {
	int pivot = getMinIndex(arr);
	int left = pivot;
	int right = arr.size() - 1;
	int mid;
	while(left <= right) {
		mid = left + (right - left)/2;
		if(arr[mid] == key) {
			return mid;
		} else if(arr[mid] < key) {
			left = mid + 1;
		} else {
			right = mid - 1;
		}
	}
	left = 0;
	right = pivot - 1;
	while(left <= right) {
		mid = left + (right - left)/2;
		if(arr[mid] == key) {
			return mid;
		} else if(arr[mid] < key) {
			left = mid + 1;
		} else {
			right = mid - 1;
		}
	}
	return -1;
}

int main() {
	vector<int> arr {11, 12, 15, 18, 2, 5, 6, 8};
	// cout << getMinIndex(arr);
	cout << searchRotated(arr, 5) << endl;
	cout << searchRotated(arr, 2) << endl;
	cout << searchRotated(arr, 212) << endl;
	cout << searchRotated(arr, 0) << endl;
}