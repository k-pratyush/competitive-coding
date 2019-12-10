#include<iostream>
#include<vector>

using namespace std;

void sub_sum(vector<int> a, int sum) {

	int l = a.size();

	int p1 = 0;
	int csum = a[0];

	for(int i = 1; i < l; i++) {
		csum += a[i];
		if(csum == sum) {
			cout << p1 << " " << i << "\n";
		}
		else if(csum > sum) {
			csum -= a[p1];
			p1++;
		}
	}
}


int main() {
	vector<int> a = {1,3,2,5,1,1,2,3};
	int sum = 11;
	sub_sum(a, sum);
	cout << "\n";
}