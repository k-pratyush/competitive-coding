#include<iostream>
#include<vector>

using namespace std;

void moveZeroes(vector<int>& nums) {
    int j = 0;
    for(int i = 0; i < nums.size(); i++) {
        if(nums[i] != 0) {
            nums[j++] = nums[i];
        }
    }
    for(int i = j; i < nums.size(); i++) {
        nums[i] = 0;
    }
    for(int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }
}

int main() {
    vector<int> arr = {0,1,0,3,12};
    moveZeroes(arr);
}
