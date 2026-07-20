class Solution {
public:
    vector<vector<int>> ans;
    vector<int> temp;

    void solve(vector<int>& candidates, int target, int index) {

        // Base Case 1: Target achieved
        if (target == 0) {
            ans.push_back(temp);
            return;
        }

        // Base Case 2: Out of bounds or target becomes negative
        if (index >= candidates.size() || target < 0) {
            return;
        }

        // ---------------- TAKE ----------------
        temp.push_back(candidates[index]);
        solve(candidates, target - candidates[index], index); // same index
        temp.pop_back(); // Backtrack

        // ---------------- NOT TAKE ----------------
        solve(candidates, target, index + 1);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        solve(candidates, target, 0);
        return ans;
    }
};