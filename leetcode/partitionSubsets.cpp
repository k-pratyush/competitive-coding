int knapsack(int i, vector<int> nums, int target) {
    if(i == nums.size()) {
        return 0;
    }
    if(nums[i] > target) {
        return knapsack(i+1, nums, target);
    }
    int a1 = nums[i] + knapsack(i+1, nums, target - nums[i]);
    int a2 = knapsack(i+1, nums, target);
    return max(a1, a2);
}

bool canPartition(vector<int>& nums) {
    int total = 0;
    for(auto i: nums) {
        total += i;
    }
    if(total % 2 != 0) {
        return false;
    }
    int ans = knapsack(0, nums, total / 2);
    if(ans == total / 2) {
        return true;
    }
    return false;
}