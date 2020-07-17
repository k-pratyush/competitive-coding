#include <iostream>
#include <vector>

using namespace std;

int bsRev(int key, vector<int> arr) {
	int left = 0;
	int right = arr.size() - 1;
	int mid = left + (right - left)/2;
	while(left <= right) {
		if(arr[mid] == key) {
			return mid;
		} else if(arr[mid] > key) {
			left = mid + 1;
		} else {
			right = mid - 1;
		}
		mid = left + (right - left)/2;
	}
	return -1;
}

int main() {
	vector<int> arr{10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
	cout << bsRev(1, arr) << endl;
	cout << bsRev(10, arr) << endl;
	cout << bsRev(11, arr) << endl;
}