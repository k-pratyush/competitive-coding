#include<iostream>
#include<vector>
#include<string>
using namespace std;


int helper(string text1, string text2, int n, int m) {
    if(n == -1 || m == -1) {
        return 0;
    }
    if(text1[n] == text2[m]) {
        return 1 + helper(text1, text2, n - 1, m - 1);
    }
    return max(helper(text1, text2, n -1, m), helper(text1, text2, n, m-1));
}

int longestCommonSubsequence(string text1, string text2) {
    int n = text1.length();
    int m = text2.length();
    return helper(text1, text2, n - 1, m - 1);
}

int main() {
	cout << longestCommonSubsequence("ylqpejqbalahwr", "zavgdmdgtqpg") << endl;
}