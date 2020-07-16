int removeDuplicates(vector<int>& nums) {
    if(nums.size() == 0) {
        return 0;
    }
    int i = 0, j = 0;
    while(j < nums.size()) {
        if(nums[i] == nums[j]) {
            j++;
        } else {
            nums[++i] = nums[j++];
        }
    }
    return ++i;
}
