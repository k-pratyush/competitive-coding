void solver(int i, vector<int>& candidates, vector<int> potential, int target, set<vector<int>> &results) {
    if(target == 0) {
        if(!potential.empty())
            results.insert(potential);
        return;
    }
    if(i >= candidates.size()) {
        return;
    }
    if(candidates[i] > target) {
        return;
    }
    potential.push_back(candidates[i]);
    solver(i+1, candidates, potential, target - candidates[i], results);
    potential.pop_back();
    solver(i+1, candidates, potential, target, results);
}

vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
    set<vector<int>> results;
    vector<vector<int>> finalResults;
    vector<int> potential;
    sort(candidates.begin(), candidates.end());
    solver(0, candidates, potential, target, results);
    for(auto i: results) {
        finalResults.push_back(i);
    }
    return finalResults;
}
