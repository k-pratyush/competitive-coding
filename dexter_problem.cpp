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
//input for number of friends
	cin >> n;

//input for lower and upper range of M/F
	for(int i = 0; i < n; i++) {
		cin >> type;
		if(type == 'M') {
			//cin >> m[j].low;
			//cin >> m[j].high;
			cin >> male1 >> male2;
			m[j].low = male1;
			m[j].high = male2;
			//cout << m[j].low << " ";
			//cout << m[j].high << " ";
			j++;
		}
		if(type == 'F') {
			//cin >> f[k].low;
			//cin >> f[k].high;
			cin >> female1 >> female2;
			f[k].low = female1;
			f[k].high = female2;
			k++;
		}
	}

//resizing of unused objects
	m.resize(j);
	f.resize(k);

//initial days_ = 1
	while (days_ <= 366) {

		for(int i = 0; i < j; i++) {
			if(m[i].low <= days_ && m[i].high >= days_) {
				num_male[days_]++;
				//cout << num_male[days_] << "\n";
			}
		}

		for(int i = 0; i < k; i++) {
			if(f[i].low <= days_ && f[i].high >= days_) {
				num_female[days_]++;
				//cout << num_female[days_] << "  ";
			}
		}

		days_++;
	}

	//final array to store number of couples per day
	int couples_[367];

	//initialize array with every element to zero
	for(int i = 0; i < 367; i++) {
		couples_[i] = 0;
	}
	for(int i = 1; i <= 366; i++) {
		if(num_male[i] != 0 && num_female[i] != 0) {
			couples_[i] = min(num_male[i], num_female[i]);
			//cout << i << "\n";
			//cout << couples_[i] << "\n";
		}
	}
	//num_couples = couples_[1];
	//cout << num_couples << "\n";

	//searching for max value
	for(int i = 1; i <= 366; i++) {
		if(couples_[i] > num_couples) {
			num_couples = couples_[i];
		}
	}
	//num_couples = max_element(couples_, couples_ + 366);
	cout << num_couples << "\n";

	return 0;
}