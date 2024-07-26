class Solution {
public:
    void subsetsum(vector<int>& arr, int target, int ind, int n, vector<int>& ds, vector<vector<int>>& ans){
        if(ind==n){
            return;
        }
        if(target==0) {
            ans.push_back(ds);
            return;
        }if(target-arr[ind]>=0) {
            ds.push_back(arr[ind]);
            subsetsum(arr, target-arr[ind], ind, n, ds, ans);
            ds.pop_back();
        }
        subsetsum(arr, target, ind+1, n, ds, ans);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        int n=candidates.size();
        subsetsum(candidates, target, 0, n, ds, ans);
        return ans;
    }
};