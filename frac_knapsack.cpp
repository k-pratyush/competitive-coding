#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>

using namespace std;

int main() {
	int num, limit;
	cin >> num >> limit;
	vector<float> weights(num);
	vector<float> values(num);
	float result = 0;
	for(int i = 0; i < num; i++) {
		cin >> weights[i] >> values[i];
	}
	vector<pair<float, float> > ratioWV(num);
	for(int i = 0; i < num; i++) {
		ratioWV[i].first = values[i] / weights[i];
		ratioWV[i].second = weights[i];
	}
	sort(ratioWV.begin(), ratioWV.end());

	for(int i = num - 1; i >= 0; --i) {
		if(ratioWV[i].second <= limit) {
			result += ratioWV[i].first * ratioWV[i].second;
			
			limit -= ratioWV[i].second;
		} else if (limit != 0){
			result += ratioWV[i].first * limit;
			limit = 0;
		}
	}
	cout << result << endl;
}
