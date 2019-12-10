#include<iostream>
#include<algorithm>

using namespace std;

int n = 5;
int vect[5][5] = {{3,7,9,2,7},{9,8,3,5,5},{1,7,9,8,5},{3,8,6,4,10},{6,3,9,7,8}};
int pathSum[5][5];

void dpInit() {
	for(int i = 0; i < n; i++)
		for(int j = 0; j < n; j++)
			pathSum[i][j] = 0;
}

int pathDP(int x, int y) {

	pathSum[0][0] = vect[0][0];

	for(int i = 1; i < x; i++) 
		pathSum[0][i] = pathSum[0][i-1] + vect[0][i];
	for(int i = 1; i < x; i++) 
		pathSum[i][0] = pathSum[i-1][0] + vect[i][0];

	for(int i = 1; i < n; i++)
		for(int j = 1; j < n; j++)
			pathSum[i][j] = max(pathSum[i-1][j], pathSum[i][j-1]) + vect[i][j];

	return pathSum[x-1][y-1];
}

 
int main() {

	dpInit();

	cout << pathDP(5, 5);
}