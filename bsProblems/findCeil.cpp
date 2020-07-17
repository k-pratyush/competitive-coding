#include <iostream>
#include <vector>

using namespace std;

int findCeil(vector<int> arr, int key) {
	int left = 0;
	int right = arr.size() - 1;
	int mid;
	int res = 0;
	while(left <= right) {
		mid = left + (right - left)/2;
		if(arr[mid] == key) {
			return arr[mid];
		} else if(arr[mid] < key) {
			left = mid + 1;
		} else {
			res = arr[mid];
			right = mid - 1;
		}
	}
	return res;
}

int main() {
	vector<int> arr {3, 10, 20, 40, 50, 70, 80};
	cout << findCeil(arr, 20) << endl;
	cout << findCeil(arr, 45) << endl;
}
