#include <iostream>
#include <vector>

using namespace std;

int main() {
	int t, n, counteri = 0;
	cin >> t;
	int i = 0;
	while(t--) {
		vector<int> v;
		cin >> n;
		vector < vector<int> > binaryNum(n);
		int i = 0;
		int j = 0;
		for(int x = 0; x < binaryNum.size(); x++) {
		while (n > 0) {
			binaryNum[x][i] = n % 2; 
			n = n / 2;
			i++;
		}
	}
		for(size_t i = 0; i < binaryNum.size(); i++) {
			if(binaryNum[i][j] == 1) {
				counteri++;
			}
		}
		if(counter == 1)

		//cout << counter << "\n";
	}
	for(int i = 0 ; i < v.size(); i++)
		cout << v[i] << "\n";
}
