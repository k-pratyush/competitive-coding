#include<iostream>
#include<vector>

using namespace std;

int path(int row, int col) {
	if(row == 1 || col == 1)
		return 1;

	return path(row-1, col) + path(row, col-1);

}

int pathDP(int row, int col) {
	int num_path[row][col];

	for(int i = 0; i < row; i++) {
		num_path[i][0] = 1;
	}

	for(int i = 0; i < col; i++) {
		num_path[0][i] = 1;
	}

	for(int i = 1; i < row; i++) {
		for(int j = 1; j < col; j++) {
			num_path[i][j] = num_path[i-1][j] + num_path[i][j-1];
		}
	}
	return num_path[row-1][col-1];
}


int main() {
	int t;
	cin >> t;

	while(t--) {

		int row, col, src, dest;
		cin >> row >> col;
		cout << pathDP(row, col) <<"\n";

	}
}