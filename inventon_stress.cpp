#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

long long inventon_correct(long long n) {

    long long k,m;
    int t = 1000;
	while(t--) {
		k=0;
		m=1;
		while(m<=n) {
			k+=1;
			m*=2;
		}
		//cout<<k<<"\n";
		//cout << k << "\n";
		return k;
	}
}

long long inventon_old(long long n) {

	int flag = 0;
	int a;
	int t = 1000;
	vector <int> arr(t);
	for(int i =0; i<t; i++) {
		a = log(n)/log(2);
		flag = a;
		arr[i] = flag;
	}

	for(int i = 0; i < t; i++) {
		cout << arr[i] + 1 << "\n";
		return arr[i]+1;		
	}

}

int main() {
	//long long t;
	//cin >> t;
	//inventon_old(t);

	srand((unsigned)time(0));
	int random_integer_n;
	while(true){
		random_integer_n = (rand()%1000000000000000000)+1;
		cout << random_integer_n << "     ";
		long long x = inventon_old(random_integer_n);
		if(x != inventon_correct(random_integer_n)) {
			cout << "Solution incorrect for n = " << random_integer_n << "\n";
			break;
		}
	}
}