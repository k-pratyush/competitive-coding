#include<iostream>
#include<vector>

using namespace std;

vector<int> subset;

void print_set(vector<int> &subset) {
	for(int i = 0; i < subset.size(); i++) {
		cout << subset[i] << " ";
	}
	cout << "\n";
}


void get_subsets(vector<int> input, int k) {

	if(k == input.size()) {
		print_set(subset);
	}
	else {
		get_subsets(input, k+1);
		subset.push_back(input[k]);
		get_subsets(input, k+1);
		subset.pop_back();
	}
}

int main() {

	vector<int> input;
	vector<int> subset;
	int n;
	cin >> n;
	input.resize(n);
	subset.resize(n);

	for(int i = 0; i < n; i++) {
		cin >> input[i];
	}

	get_subsets(input, 0);
}