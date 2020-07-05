#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int nextGap(int gap) {
    if(gap <= 1) {
        return 0;
    } else {
        return (gap / 2) + (gap % 2);
    }
}

void helper(vector<int> arr1, vector<int> arr2, int x, int y) {
    int gap = x + y;
    int i, j;
    for(gap = nextGap(gap); gap > 0; gap = nextGap(gap)) {
        //1st arr
        for(i = 0; i + gap < x; i++) {
            if(arr1[i+gap] < arr1[i]) {
                swap(arr1[i+gap], arr1[i]);
            }
        }
        for(j = gap > x? gap - x: 0; j < y && i < x; i++, j++) {
            if(arr2[j] < arr1[i]) {
                swap(arr2[j], arr1[i]);
            }
        }
        //2nd arr
        if(j < y) {
            for(j = 0; j + gap < y; j++) {
                if(arr2[j + gap] < arr2[j]) {
                    swap(arr2[j + gap], arr2[j]);
                }
            }
        }
    }

    for(int i = 0; i < x; i++) {
        cout << arr1[i] << " ";
    }
    for(int i = 0; i < y; i++) {
        cout << arr2[i] << " ";
    }
}

int main() {
	int t;
	cin >> t;
	while(t--) {
	    int x, y;
	    cin >> x >> y;
	    vector<int> arr1(x);
	    vector<int> arr2(y);
	    for(int i = 0; i < x; i++) {
	        cin >> arr1[i];
	    }
	    for(int i = 0; i < y; i++) {
	        cin >> arr2[i];
	    }
	    helper(arr1, arr2, x, y);
	    cout << endl;
	}
	return 0;
}