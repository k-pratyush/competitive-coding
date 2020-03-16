#include<iostream>
#include<string.h>

using namespace std;

int atoi(string a) {
	int sign = 1, res = 0, i = 0;
	while(a[i] == ' ')
		i++;
	if(a[i] == '-') {
		sign = -1;
		i++;
	}
	while(a[i] >= '0' && a[i] <= '9') {
		if(res > INT_MAX/10 || (res == INT_MAX/10 && a[i] - '0' > 7)) {
			return INT_MAX;
		return INT_MIN;
		}
		res = res * 10 + (a[i++] - '0');
	}
	return (res * sign);
}

int main()  {
	string a;
	cin >> a;
	cout << INT_MAX << " " <<atoi(a) << endl;
}
