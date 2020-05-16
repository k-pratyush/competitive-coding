#include<iostream>
#include<string>

using namespace std;

string ques(string s) {
    string res = "";
    for(int i = 0; i < s.length(); i++) {
        if(s[i] != '0') {
            if(i == 0)
                res += "(";
            for(int x = 0; x < (int(s[i]) - '0' - 1); x++) {
                res += "(";
            }
            res += char(s[i]);
            for(int x = 0; x < (int(s[i]) - '0' - 1); x++) {
                res += ")";
            }
        } else {
            res += s[i];
        }
    }
    if(s[0] != '0') {
        res += ")";
    }
    return res;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        cout << ques(s) << "\n"; 
    }
}