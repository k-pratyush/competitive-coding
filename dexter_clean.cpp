//Created by Pratyush Kerhalkar
//Dexter_Problem
//CodeChef Code Of War contest
//21/09/2018


#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Male {
	int low;
	int high;
};

struct Female {
	int low;
	int high;
};

int main() {
	vector<Male> m(5000);
	vector<Female> f(5000);

	int male1, male2, female1, female2;
	int num_male[367];
	int num_female[367];
	int j = 0, k = 0, n, days_ = 1;
	int num_couples = 0;
	char type;

	for(int i = 1; i < 367; i++) {
		num_male[i] = 0;
		num_female[i] = 0;
	}
	cin >> n;
	for(int i = 0; i < n; i++) {
		cin >> type;
		if(type == 'M') {
			cin >> male1 >> male2;
			m[j].low = male1;
			m[j].high = male2;
			j++;
		}
		if(type == 'F') {
			cin >> female1 >> female2;
			f[k].low = female1;
			f[k].high = female2;
			k++;
		}
	}
	m.resize(j);
	f.resize(k);
	while (days_ <= 366) {

		for(int i = 0; i < j; i++) {
			if(m[i].low <= days_ && m[i].high >= days_) {
				num_male[days_]++;
			}
		}

		for(int i = 0; i < k; i++) {
			if(f[i].low <= days_ && f[i].high >= days_) {
				num_female[days_]++;
			}
		}

		days_++;
	}
	int couples_[367];
	for(int i = 0; i < 367; i++) {
		couples_[i] = 0;
	}
	for(int i = 1; i <= 366; i++) {
		if(num_male[i] != 0 && num_female[i] != 0) {
			couples_[i] = min(num_male[i], num_female[i]);
		}
	}
	for(int i = 1; i <= 366; i++) {
		if(couples_[i] > num_couples) {
			num_couples = couples_[i];
		}
	}
	cout << num_couples << "\n";

	return 0;
}