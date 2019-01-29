#include<iostream>
using std::cout;
using std::cin;


int main(){
	int t;
	cin >> t;

	int bttle;
	while(t--){
		int n, c, cap, m;
		cin >> n >> c >> m;
		while(n >= c){
			bttle++;
			n=n-c;
		}
		cap = bttle;
		while(cap >= m){
			cap=cap-m;
			bttle++;
			cap++;
		}
		cout << bttle;
	}
}
