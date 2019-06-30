#include<iostream>
#include<vector>


using namespace std;

#define ll long long

int main() {
	
	int t;
	cin >> t;

	while(t--) {
		ll n, k;
		ll left, right;
		vector<ll>input;
		cin >> n >> k;
		input.resize(n);

		for(int i = 0; i < n; i++) {
			cin >> input[i];
		}

		for(int i = 0; i <n; i+=k) {

			left = i;
			right = min(i+k-1, n-1);

			while(left < right) {
				swap(input[left++], input[right--]);
			}
		}

		for(int i = 0; i < n; i++) {
			cout << input[i] << " ";
		}
		cout << "\n";
		
	}
}