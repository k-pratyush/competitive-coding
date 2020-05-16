#include<iostream>
#include<algorithm>
#include<vector>
#include<string>

using namespace std;


int main() {
	long int t;
	cin >> t;
	while(t--) {
		int n, q;
		long int sum = 0;
		cin >> n >> q;
		vector<pair<int, int> > v(q);
		for(int i = 0; i < q; i++) {
			cin >> v[i].first >> v[i].second;
		}
		for(int i = 0; i < q; i++) {
			sum += abs(v[i].first - v[i].second);
			if(i < q - 1)
			sum += abs(v[i+1].first - v[i].second);
		}
		sum += v[0].first;
		cout << sum << endl;
	}
}