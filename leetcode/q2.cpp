#include<iostream>
#include<vector>

using namespace std;

pair<int, int> twoSumSorted(vector<int> arr, int target) {
	int i = 0;
	int j = arr.size() -1;
	pair<int,int> result = make_pair(-1,-1);
	while(i < j) {
		if(arr[i] + arr[j] == target) {
			result.first = i;
			result.second = j;
			return result;
		} else if(arr[i] + arr[j] > target) {
			j--;
		} else {
			i++;
		}
	}
	return result;
}

int main() {
	vector<int> arr = {1,2,3,4,5};
	int target = 9;
	pair<int, int> res = twoSumSorted(arr, target);
	cout << res.first << " " << res.second << endl;
}