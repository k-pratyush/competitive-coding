#include <iostream>
#include <vector>

using namespace std;

int nearlySorted(vector<int> arr, int key) {
	int left = 0;
	int right = arr.size() - 1;
	int mid;
	while(left <= right) {
		mid = left + (right - left)/2;
		if(arr[mid] == key) {
			return mid;
		}
		if(mid - 1 >= left && arr[mid-1] == key) {
			return mid - 1;
		}
		if(mid + 1 <= right && arr[mid+1] == key) {
			return mid + 1;
		}
		if(arr[mid] < key) {
			left = mid + 2;
		} else {
			right = mid - 2;
		}
	}
	return -1;
}

int main() {
	vector<int> arr {5, 10, 30, 20, 40};
	vector<int> arr1 {10, 3, 40, 20, 50, 80, 70};
	cout << nearlySorted(arr, 20) << endl;
	cout << nearlySorted(arr1, 40) << endl;
	cout << nearlySorted(arr1, 30) << endl;
}
