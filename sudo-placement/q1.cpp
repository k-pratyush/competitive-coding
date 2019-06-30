#include<iostream>
#include<vector>
using namespace std;

#define ll long long

int main() {
	int T;
	cin >> T;
	while(T--) {
		ll N;
		vector<ll>input;
		vector<ll>output;
		cin >> N;
		input.resize(N);
		for(ll i = 0; i < N; i++) {
			cin >> input[i];
		}
		for(ll i = 0; i < N; i++) {
			if(i+1 != N) {
				if(input[i] - input[i+1] > 0) {
					output.push_back(input[i+1]);
				}
				else
					output.push_back(-1);
			}
			else
				output.push_back(-1);

		}
		for(ll i = 0; i < N; i++) {
			cout << output[i] << " ";
		}
		cout << "\n";
	}
}