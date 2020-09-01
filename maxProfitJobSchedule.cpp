#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Job {
    int startTime;
    int endTime;
    int profit;
};

static bool cmp(Job &a, Job &b) {
    return a.startTime < b.startTime;
}

int getNext(int i, vector<Job> jobs) {
    int left = i + 1;
    int right = jobs.size() - 1;
    int mid;
    int potential = -1;
    while(left <= right) {
        mid = left + (right - left)/2;
        if(jobs[mid].startTime >= jobs[i].endTime) {
            potential = mid;
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }
    return potential;
}

int dp[5000];
int solve(int i, vector<Job> jobs) {
    if(i == jobs.size()) {
        return 0;
    }
    if(dp[i] != -1) {
        return dp[i];
    }
    //dont select
    int a1 = solve(i+1, jobs);
    //select
    int j = getNext(i, jobs);
    int a2 = jobs[i].profit + (j == -1? 0: solve(j, jobs));
    return dp[i] = max(a1, a2);
}

int jobScheduling(vector<int>& startTime, vector<int>& endTime, vector<int>& profit) {
    memset(dp, -1, sizeof(dp));
    vector<Job> jobs(startTime.size());
    for(int i = 0; i < startTime.size(); i++) {
        jobs[i].startTime = startTime[i];
        jobs[i].endTime = endTime[i];
        jobs[i].profit = profit[i];
    }
    sort(jobs.begin(), jobs.end(), cmp);
    return solve(0, jobs);
}

int main() {
    vector<int> startTime {1, 4, 2};
    vector<int> endTime {2, 5, 5};
    vector<int> profit {1, 2, 3};
    cout << jobScheduling(startTime, endTime, profit) << endl;
}
