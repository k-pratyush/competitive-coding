#include <iostream>
#include <numeric>
#include <algorithm>
#include <vector>

using namespace std;

bool isValid(vector<int> books, int maxPages, int numStudents) {
	int student = 1;
	int sum = 0;
	for(int i = 0; i < books.size(); i++) {
		sum += books[i];
		if(sum > maxPages) {
			student++;
			sum = books[i];
		}
	}
	if(student > numStudents) {
		return 0;
	}
	return 1;
}

int minPages(vector<int> books, int numStudents) {
	if(books.size() < numStudents) {
		return -1;
	}

	int left = *max_element(books.begin(), books.end());
	int sum = 0;
	int right = accumulate(books.begin(), books.end(), sum);
	int mid;
	int res = -1;
	while(left <= right) {
		mid = left + (right - left)/2;
		if(isValid(books, mid, numStudents)) {
			res = mid;
			right = mid - 1;
		} else {
			left = mid + 1;
		}
	}
	return res;
}

int main() {
	vector<int> arr {10, 20, 30, 40};
	cout << minPages(arr, 2) << endl;
}
