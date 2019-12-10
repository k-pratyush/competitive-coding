// remember edge case: k = 1

#include<iostream>
#include<vector>
using namespace std;

void k_m(vector<int> input, int n, int k) {
	int w = n-k+1;
	vector<int> max_arr(w+1);
	vector<int> LR(n+1);
	vector<int> RL(n+1);

if (k == 1) {
	for(int i = 1; i <= n; i++)
		cout << input[i] << " ";
}

else {
		for(int i = 1; i <= n; i++) {
		if(i % k == 1)
			LR[i] = input[i];
		else
			LR[i] = max(LR[i-1], input[i]);
	}

	for(int i = n; i >= 1; i--) {
		if(i == n) 
			RL[i] = input[i];
		else if(i % k == 0)
			RL[i] = input[i];
		else
			RL[i] = max(RL[i+1], input[i]);
	}

	for(int i = 1; i <= w; i++)
		max_arr[i] = max(LR[i+k-1], RL[i]);

	for(int i = 1; i <= w; i++)
		cout << max_arr[i] << " ";

}

}



int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;

	while(t--) {
		int n, k;
		cin >> n >> k;
		vector<int> input(n+1);

		for(int i = 1; i <= n; i++)
			cin >> input[i];

		k_m(input, n, k);
		cout << "\n";
	}
}
