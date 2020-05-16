#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		string s;
		int len;
		int q;
		cin >> len;
		cin >> q;
		cin >> s;
		vector<int> queries(q);
		for(int i = 0; i < q; i++)
			cin >> queries[i];
		vector<int> hash(26, 0);
		for(int i = 0; i < s.length(); i++)
			hash[s[i] - 'a']++;
		for(int i: queries) {
			int res = 0;
			for(int j = 0; j < hash.size(); j++) {
				if(hash[j] > i) {
					res += hash[j] - i;
				}
			}
			cout << res << endl;
		}
	}
}