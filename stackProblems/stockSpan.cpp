#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
	    int n;
	    cin >> n;
	    vector<int> arr(n);
	    for(int i = 0; i < n; i++) {
	        cin >> arr[i];
	    }
	    stack<int> st;
	    vector<int> res;
	    for(int i = 0; i < n; i++) {
	        if(st.empty()) {
	            res.push_back(1);
	        } else if(arr[st.top()] > arr[i]) {
	            res.push_back(i - st.top());
	        } else if(arr[st.top()] <= arr[i]) {
	            while(!st.empty() && arr[st.top()] <= arr[i]) {
	                st.pop();
	            }
	            if(st.empty()) {
	                res.push_back(i+1);
	            } else {
	                res.push_back(i - st.top());
	            }
	        }
	        st.push(i);
	    }
	    for(int i = 0; i < res.size(); i++) {
	        cout << res[i] << " ";
	    }
	    cout << endl;
	}
	return 0;
}
