#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>

using namespace std;

pair<int, int> twoSum(vector<int> arr, int target) {
	unordered_map<int, int> mp;
	pair<int, int> result;
	int rem;

	for(int i = 0; i < arr.size(); i++) {
		rem = target - arr[i];
		if(mp.find(rem) != mp.end() && mp.find(rem) -> second != i) {
			result.first = mp.find(rem) -> second;
			result.second = i;
			return result;
		}
		mp.insert(pair<int, int>(arr[i], i));
	}
	return result;
}

pair<int, int> twoSumNumbers(vector<int> arr, int target) {
	vector<int> HashTable(target + 1, 0);
	pair<int, int> result;
	for(int i = 0; i < arr.size(); i++) {
		if(HashTable[target - arr[i]] != 0 && arr[i] < target) {
			result.first = arr[i];
			result.second = target - arr[i];
			return result;
		} else if(arr[i] < target)
			HashTable[arr[i]] = 1;
	}
	result.first = -1;
	result.second = -1;
	return result;
}

int main() {
	vector<int> arr = {1, 2, 3, 4, 5};
	int target = 20;
	pair<int, int> res = twoSumNumbers(arr, target);
	cout << res.first << " " << res.second << endl;
}
