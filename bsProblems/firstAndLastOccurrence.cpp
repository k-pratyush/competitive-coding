#include <iostream>
#include <vector>
#include <utility>
using namespace std;

pair<int, int> firstAndLast(vector<int> arr, int key) {
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

	return make_pair(first, last);
}

int main() {
	vector<int> arr{ 1, 2,3,3,3, 3, 3, 5, 6, 7, 8, 9, 10 };
	pair<int, int> res = firstAndLast(arr, 3);
	cout << res.first << " " << res.second << endl;
}