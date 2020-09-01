#include <iostream>
#include <math.h>

int fact(int n) {
	if(n <= 1)
		return n;
	return n * fact(n-1);
}

bool isPrime(int n) {
	for(int i = 2; i < sqrt(n) + 1; i++) {
		if(n % i == 0 && n != i)
			return false;
	}
	return true;
}

int countPrime(int n) {
	int cnt = 0;
	for(int i = 2; i <= n; i++) {
		if(isPrime(i))
			cnt++;
	}
	return cnt;
}

int main() {
	int n = 5;
	int k = countPrime(n);
	std::cout << fact(k) * fact(n - k) << std::endl;
}
