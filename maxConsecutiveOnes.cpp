int findMaxConsecutiveOnes(vector<int>& nums) {
    int highest = 0;
    int currSum = 0;
    for(int i = 0; i < nums.size(); i++) {
        if(nums[i] == 1) {
            currSum++;
        } else {
            highest = max(currSum, highest);
            currSum = 0;
        }
    }
    highest = max(currSum, highest);
    return highest;
}
