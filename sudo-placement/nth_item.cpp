//Find N’th item in a set formed by sum of two arrays

#include<iostream>
#include<set>
#include<vector>

using namespace std;

int main() {
	int t;
	cin >> t;

	while(t--) {
		int q1, q2;
		int n;
		vector<int> arr1;
		vector<int> arr2;
		set<int> se;

		cin >> n;

		cin >> q1;
		arr1.resize(q1);

		for(int i = 0; i < q1; i++)
			cin >> arr1[i];

		cin >> q2;
		arr2.resize(q2);

		for(int i = 0; i < q2; i++)
			cin >> arr2[i];

		for(int i = 0; i < q1; i++)
			for(int j = 0; j < q2; j++) 
				se.insert(arr1[i] + arr2[j]);

		set<int>::iterator it = se.begin();

		if(se.size() < n) {
			cout << -1;
			break;
		}

		for(int i = 1; i < n; i++)
			it++;

		cout << *it << "\n";
	}
}