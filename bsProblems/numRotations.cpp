#include <iostream>
#include <vector>

using namespace std;

int numRotations(vector<int> arr) {
	int left = 0;
	int right = arr.size() - 1;
	int mid;
	int n = arr.size();
	while(left <= right) {
		mid = left + (right - left)/2;
		int next = (mid + 1)%arr.size();
		int prev = (mid - 1 + n)%arr.size();
		if(arr[mid] <= arr[prev] && arr[mid] <= arr[next]) {
			return mid;
		} else if(arr[mid] <= arr[right]) {
			right = mid-1;
		} else if(arr[mid] >= arr[left]) {
			left = mid+1;
		}
	}
	return 0;
}

int main() {
	vector<int> arr {11, 12, 15, 18, 2, 5, 6, 8};
	vector<int> arr1 {1,2,3,4,5,6,7,8};
	cout << numRotations(arr) << endl;
}
