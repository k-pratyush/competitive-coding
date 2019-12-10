#include<iostream>
#include<vector>
#include<algorithm>
#include<set>

using namespace std;

#define ll long long

void countDistinct(int a[],int k,int n) {
	for(int i =0; i <= n-k; i++) {
		set<int> s(A+i, A+k+i);
		cout << s.size() << " ";
	}
	
}


int main() {
	
	ios_base::sync_with_stdio(false); 
	cin.tie(NULL);

	int t;
	cin >> t;

	while(t--) {
		ll n, k;
		cin >> n >> k;
		int input[n];
		for(int i = 0; i < n; i++)
			cin >> input[i];

		countDistinct(input, k, n);
		cout << "\n";
	}
}