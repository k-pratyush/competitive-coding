#include<iostream>
#include <math.h>

using namespace std;

double solve(int x, int n) {
	double low, high;
	if(x>= 0 && x <= 1) {
		low = x;
		high = 1;
	} else {
		low = 1;
		high = x;
	}
	double guess = (low + high)/2;
	double err = 0.00000000001;
	while(abs(pow(guess,n) - x)  >= err) {
		if(pow(guess, n) > x) {
			high = guess;
		} else {
			low = guess;
		}
		guess = (low + high)/2;
	}
	return guess;
}

int main() {
	int x, n;
	cin >> x >> n;
	cout << solve(x,n) << endl;
}