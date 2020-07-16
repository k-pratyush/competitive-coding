#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int longestConsecutive(vector<int>& nums) {
    vector<int> hash(*max_element(nums.begin(), nums.end()) + 1, 0);
    for(int i = 0; i < nums.size(); i++) {
        hash[nums[i]] = 1;
    }
    int highest = 0;
    int start = 0;
    for(int i = 0; i < hash.size(); i++) {
        if(hash[i]) {
            start = i;
            while(i < hash.size() && hash[i]){
                i++;
            }
            highest = max(highest, i - start);
        }
    }
    return highest;
}

int main() {
    vector<int> nums {100, 4, 200, 1, 3, 2};
    cout << longestConsecutive(nums) << endl;
}