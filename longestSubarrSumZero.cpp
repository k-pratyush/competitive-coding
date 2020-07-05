int maxLen(int A[], int n)
{
    unordered_map<int, int> mp;
    int maxlen = 0;
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += A[i];
        if(sum == 0) {
            maxlen = i + 1;
        }
        if(mp.count(sum)) {
            maxlen = max(maxlen, i - mp[sum]);
        } else {
            mp[sum] = i;
        }
    }
    return maxlen;
}