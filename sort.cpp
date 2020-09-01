#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void insert(vector<int>& v, int ele) {
	if(!v.size() || v[v.size() - 1] <= ele) {
		v.push_back(ele);
		return;
	}
	int temp = v[v.size() - 1];
	v.pop_back();
	insert(v, ele);
	v.push_back(temp);

}

void srt(vector<int>& v) {
	if(v.size() == 1)
		return;
	int temp = v[v.size() - 1];
	v.pop_back();
	srt(v);
	insert(v, temp);
}

int main() {
	vector<int> v {5, 4, 1, 6};
	srt(v);
	for(auto i: v) {
		cout << i << " ";
	}
}