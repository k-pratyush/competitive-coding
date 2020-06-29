#include<iostream>
#include<vector>

using namespace std;

int helper(int i, vector<int> nums) {
    if(i >= nums.size()) {
        return 0;
    }
    int a1 = helper(i + 1, nums);
    int a2 = nums[i] + helper(i+2, nums);
    return max(a1, a2);
}

int rob(vector<int>& nums) {
    return helper(0, nums);
}

int main() {
    vector<int> nums = {1,2, 3}
    cout << rob(nums) << endl;
}
