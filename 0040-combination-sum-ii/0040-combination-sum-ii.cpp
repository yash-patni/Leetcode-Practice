class Solution {
public:
    void findcomb(vector<int>& arr, int ind, int target, vector<int>& ds, vector<vector<int>>& comb) {
        if(target == 0){
            comb.push_back(ds);
            return;
        }
        for(int i=ind;i<arr.size();i++){
            if(i>ind && arr[i]==arr[i-1]) continue;
            if(arr[i] >target) break;
            ds.push_back(arr[i]);
            findcomb(arr, i + 1, target - arr[i], ds, comb);
            ds.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> comb;
        vector<int> ds;
        sort(candidates.begin(), candidates.end());
        findcomb(candidates, 0, target, ds, comb);
        return comb;
    }
};
