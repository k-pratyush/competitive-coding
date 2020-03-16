#include<iostream>
#include<vector>
using namespace std;


string getRange(int from, int to) {
	return (from == to) ? to_string(from) : to_string(from) + "->" + to_string(to);
}


vector<string> missingRanges(vector<int> n, int start, int end) {
	vector<string> result;
	int prev = start - 1;

	for(int i = 0; i <= n.size(); i++) {
		int curr = (i == n.size()) ? end + 1 : n[i];
		if(curr - prev >= 2) {
			string res = getRange(prev + 1, curr -1);
			result.push_back(res);
		}
		prev = curr;
	}
	return result;
}

int main() {
	vector<int> n = {0, 1, 3, 50, 75};
	vector<string> result = missingRanges(n, 0, 99);

	cout << n.size() << endl;

	for(int i = 0; i < result.size(); i++) {
		cout << result[i] << " ";
	}
}
