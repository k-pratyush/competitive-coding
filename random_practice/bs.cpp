#include<iostream>
#include<vector>

using namespace std;

void bin_s(vector<int> a, int key) {
	
	int r = a.size() - 1;
	int l = 0;

	while(l <= r) {

		int k = (l + r)/2;
		if(a[k] == key) {
			cout << "Found key\n";
			break;
		}
		else if(a[k] > key) {
			r = k-1;
		}
		else {
			l = k+1;
		}
	}
	cout << "key not found\n";
}

int main() {
	vector<int> a;
	a.push_back(1);
	a.push_back(2);
	a.push_back(3);
	a.push_back(4);
	a.push_back(5);
	bin_s(a, 3);
	bin_s(a, 6);
	bin_s(a, -1);
}