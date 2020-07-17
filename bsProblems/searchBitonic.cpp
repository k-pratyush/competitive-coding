#include <iostream>
#include <vector>

using namespace std;

int getPeak(vector<int> arr) {
	int left = 0;
	int right = arr.size() - 1;
	int n = arr.size();
	int mid;

	if(arr.size() == 1) {
		return 0;
	}

	while(left <= right) {
		mid = left + (right - left)/2;
		if(mid > 0 && mid < n-1) {
			if(arr[mid] > arr[mid - 1] && arr[mid] > arr[mid +1]) {
				return mid;
			} else if(arr[mid] > arr[mid - 1]) {
				left = mid + 1;
			} else {
				right = mid - 1;
			}
		} else if(mid == 0) {
			if(arr[mid] > arr[1]) {
				return mid;
			} else {
				return 1;
			}
		} else if(mid == n-1) {
			if(arr[n-1] > arr[n-2]) {
				return n-1;
			} else {
				return n-2;
			}
		}
	}
	return -1;
}

int agnosticBinarySearch(vector<int> arr, int key, int i, int j) {
	bool asc = arr[i] < arr[j]? 1: 0;
	int mid;
	while(i <= j) {
		mid = i + (j - i)/2;
		if(arr[mid] == key) {
			return mid;
		} else if(arr[mid] > key) {
			if(asc) {
				j = mid - 1;
			} else {
				i = mid + 1;
			}
		} else {
			if(asc) {
				i = mid +1;
			} else {
				j = mid - 1;
			}
		}
	}
	return -1;
}

int searchBitonic(vector<int> arr, int key) {
	int maxElIndex = getPeak(arr);
	if(maxElIndex == -1) {
		return -1;
	}
	int lower = agnosticBinarySearch(arr, key, 0, maxElIndex);
	int higher = agnosticBinarySearch(arr, key, maxElIndex + 1, arr.size() -1);
	if(arr[lower] == key) {
		return lower;
	} else if(arr[higher] == key) {
		return higher;
	}
	return -1;
}

int main() {
	vector<int> arr {10, 20, 30, 5, 4, 3};
	cout << searchBitonic(arr, 10) << endl;
	cout << searchBitonic(arr, 30) << endl;
	cout << searchBitonic(arr, 50) << endl;
}