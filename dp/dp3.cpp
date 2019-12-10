//longest common subsequence

#include<iostream>
#include<vector>
#include<string.h>

using namespace std;

const int maximum = 1000;
//global variables
//vector<vector<int> > memo(5, vector<int> (5));

int LCS(string a, string b, int p, int q, int memo[p][maximum]) {
	if(p == 0 || q == 0)
		return 0;
	if(memo[p-1][q-1] != -1)
		return memo[p-1][q-1];
	if(a[p-1] == b[q-1]) {
		memo[p-1][q-1] = 1+LCS(a,b,p-1,q-1,memo);
		return memo[p-1][q-1];
	}
	else {
		memo[p-1][q-1] = max(LCS(a,b,p-1,q,memo), LCS(a,b,p,q-1,memo));
		return memo[p-1][q-1];
	}
}

int main() {
	string a = "ple";
	string b = "apte";
	int p = a.length();
	int q = b.length();
	int memo[p][maximum];
	memset(memo, -1, sizeof(memo));
	cout << LCS(a,b,p,q,memo) << endl;
}
