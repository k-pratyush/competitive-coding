#include<iostream>
#include<string.h>

using namespace std;

int chars[256] = {0};
int k = 2;

bool isValid() {
    int val = 0;
    for(int i = 0; i < 256; i++) {
        if(chars[i] > 0)
            val++;
    }
    return (val <= k);
}

int longestSubstrWithKChar(string s) {
    int i = 0, j = 0, maxLen = 0;

    while(i < s.length()) {
        if(isValid()) {
            chars[s[i]]++;
            maxLen = max(i - j, maxLen);
            i++;
        }
        if(!isValid() && j < i) {
            chars[s[j++]]--;
        }
    }
    maxLen = max(i - j, maxLen);
    return maxLen;
}

int main() {
    string s = "eceeeba";
    cout << longestSubstrWithKChar(s);
}
