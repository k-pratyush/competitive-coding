#include<iostream>
#include<string.h>
#include<algorithm>


using namespace std;


int edit_dist(int al, int bl, string a, string b) {
	
	if(al == 0)
		return bl;
	if(bl == 0)
		return al;

	if(a[al-1] == b[bl-1]) {
		return edit_dist(al-1, bl-1, a, b);
	}

	return 1 + min( min(edit_dist(al-1,bl, a, b),
			        edit_dist(al,bl-1, a, b)),
			        edit_dist(al-1,bl-1, a, b)
			       );

}


int editDP(int al, int bl, string a, string b) {

int dp[al+1][bl+1];

	for(int i = 0; i <= al; i++) {
		for(int j = 0; j <= bl; j++) {
			if(i == 0)
				dp[i][j] = j;
			else if(j == 0)
				dp[i][j] = i;
			else if(a[i-1] == b[j-1])
				dp[i][j] = dp[i-1][j-1];

			else
				dp[i][j] = 1 + min(min(dp[i-1][j],dp[i][j-1]), dp[i-1][j-1]);

		}
	}
	return dp[al][bl];
}



int main() {


string a = "LOVE";
string b = "MOVIE";

int al = a.length();
int bl = b.length();

	cout << editDP(al,bl, a, b) << "\n";
	cout << edit_dist(al,bl, a, b);
}