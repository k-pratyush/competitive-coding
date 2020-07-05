class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if(intervals.size() <= 1) {
            return intervals;
        }
        int idx = 0;
        sort(intervals.begin(), intervals.end());
        for(int i = 1; i < intervals.size(); i++) {
            if(intervals[idx][1] >= intervals[i][0]) {
                intervals[idx][1] = max(intervals[i][1], intervals[idx][1]);
            } else {
                intervals[++idx] = intervals[i];    
            }
        }
        intervals.erase(intervals.begin() + idx + 1, intervals.end());
        return intervals;
    }
};