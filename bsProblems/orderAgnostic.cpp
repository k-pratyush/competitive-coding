#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int orderAgnosticSearch(vector<int> arr, int key) {
	if(arr.size() == 1 && arr[0] == key) {
		return 0;
	}
	int asc = arr[0] < arr[arr.size() - 1]? 1: 0;
	int left = 0;
	int right = arr.size() - 1;
	int mid = left + (right - left)/2;
	while(left <= right) {
		if(arr[mid] == key) {
			return mid;
		} else if(arr[mid] < key) {
			if(asc) {
				left = mid + 1;
			} else {
				right = mid - 1;
			}
		} else {
			if(asc) {
				right = mid - 1;
			} else {
				left = mid + 1;
			}
		}
		mid = left + (right - left)/2;
	}
	return -1;
}

int main() {
	vector<int> arr{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	cout << orderAgnosticSearch(arr, 5) << endl;
	reverse(arr.begin(), arr.end());
	cout << orderAgnosticSearch(arr, 5) << endl;
}