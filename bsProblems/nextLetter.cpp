#include <iostream>
#include <vector>

using namespace std;

char nextLetter(vector<char> arr, char key) {
	int left = 0;
	int right = arr.size() - 1;
	int mid;
	char res = '#';
	while(left <= right) {
		mid = left + (right - left)/2;
		if(arr[mid] == key) {
			left = mid + 1;
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
	vector<char> arr {'a', 'c', 'f', 'h'};
	cout << nextLetter(arr, 'f') << endl;
}
