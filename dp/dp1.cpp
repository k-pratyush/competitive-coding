//nth fib number

#include<iostream>
#include<vector>
#define NIL -1
#define MAX 100

using namespace std;

int LUT[MAX];

void initialize() {
	for(int i = 0; i < MAX; i++)
		LUT[i] = NIL;
}

//Top Down approach
int fibonacci_td(int n) {
	if(LUT[n] == NIL) {
		if(n <= 1)
			LUT[n] = n;
		else
			LUT[n] = (fibonacci_td(n-1) + fibonacci_td(n-2));	
	}
	return LUT[n];
}

//Bottom Up approach
int fibonacci_bu(int n) {
	int f[n+1];
	f[0] = 0;
	f[1] = 1;

	for(int i = 2; i <= n; i++)
		f[i] = f[i-1] + f[i-2];
	return f[n];
}

int main() {
	initialize();
	cout << fibonacci_bu(5) << endl;
	cout << fibonacci_td(7) << endl;
}
