#include <iostream>
#include <vector>

using namespace std;

int countElement(vector<int> arr, int key) {
	int left = 0, mid = 0;
	int right = arr.size() - 1;
	int first = mid;

	// for first occurence
	while(left <= right) {
		mid = left + (right - left)/2;
		if(arr[mid] == key) {
			first = mid;
			right = mid - 1;
		} else if(arr[mid] < key) {
			left = mid + 1;
		} else {
			right = mid - 1;
		}
	}

	// for last occurence
	left = 0;
	right = arr.size() - 1;
	int last = mid;
	while(left <= right) {
		mid = left + (right - left)/2;
		if(arr[mid] == key) {
			last = mid;
			left = mid + 1;
		} else if(arr[mid] < key) {
			left = mid + 1;
		} else {
			right = mid - 1;
		}
	}
	if(arr[last] != arr[first]) {
		return 0;
	}
	return last - first + 1;
}

int main() {
	vector<int> arr{ 1, 2,3,3,3, 3, 3, 5, 6, 7, 8, 9, 10 };
	cout << countElement(arr, 3) << endl;
	cout << countElement(arr, 5) << endl;
	cout << countElement(arr, 10) << endl;
	cout << countElement(arr, 11) << endl;
}