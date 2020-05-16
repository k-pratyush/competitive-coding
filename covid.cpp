#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	int t;
	cin >> t;

	while(t--) {
		int n;
		cin >> n;
		vector<int> ppl(n);
		vector<int> d;
		int loc = 1;
		for(int i = 0; i < n; i++) {
			cin >> ppl[i];
		}
		for(int i = 0; i < n - 1; i++) {
			if(ppl[i+1] - ppl[i] <= 2) {
				loc++;
			}
			else {
				d.push_back(loc);
				loc = 1;
			}
		}
		d.push_back(loc);
		int min = *min_element(d.begin(), d.end());
		int max = *max_element(d.begin(), d.end());
		cout << min << " " << max << endl;
	}
}
