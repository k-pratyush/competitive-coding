#include <iostream>
#include <vector>
#include <utility>

using namespace std;

pair<int,int> searchMatrix(vector<vector<int> > arr, int key) {
	int i = 0;
	int j = arr[0].size() - 1;

	while(i < arr.size() && j >= 0) {
		if(arr[i][j] == key) {
			return make_pair(i, j);
		} else if(arr[i][j] > key) {
			j--;
		} else {
			i++;
		}
	}
	return make_pair(-1,-1);
}

int main() {
	vector<vector<int> > arr { {10, 20, 30, 40}, {15, 25, 35, 45}, {27, 29, 37, 48}, {32, 33, 39, 50} };
	pair<int, int> res = searchMatrix(arr, 29);
	pair<int, int> res1 = searchMatrix(arr, 40);
	pair<int, int> res2 = searchMatrix(arr, 50);
	pair<int, int> res3 = searchMatrix(arr, 69);
	pair<int, int> res4 = searchMatrix(arr, 33);
	cout << res.first <<  " " << res.second << endl;
	cout << res1.first <<  " " << res1.second << endl;
	cout << res2.first <<  " " << res2.second << endl;
	cout << res3.first <<  " " << res3.second << endl;
	cout << res4.first <<  " " << res4.second << endl;
}
