void solver(int i, vector<int>& candidates, vector<int>& potential, int target, vector<vector<int>> &results) {
    if(target == 0) {
        if(!potential.empty())
            results.push_back(potential);
        return;
    }
    if(i >= candidates.size()) {
        return;
    }
    if(candidates[i] > target) {
        return;
    }
    potential.push_back(candidates[i]);
    solver(i, candidates, potential, target - candidates[i], results);
    potential.pop_back();
    solver(i+1, candidates, potential, target, results);
}

vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
    vector<vector<int>> results;
    vector<int> potential;
    sort(candidates.begin(), candidates.end());
    solver(0, candidates, potential, target, results);
    return results;
}
