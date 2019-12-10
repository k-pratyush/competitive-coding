#include<iostream>
#include<vector>
#include<queue>

using namespace std;

int main() {
	int T;
	cin >> T;

	while(T--) {
		int N;
		vector<int> input;
		queue<int> result;
		int d;
		cin >> N >> d;
		input.resize(N);

		for(int i = 0; i < N; i++) {
			cin >> input[i];
		}

		for(int i = d; i < N; i++) {
			result.push(input[i]);
		}
		for(int i = 0; i < d; i++) {
			result.push(input[i]);
		}
		for(int i = 0; i < N; i++) {
			cout << result.front() << " ";
			result.pop();
		}
		cout << "\n";
	}
}