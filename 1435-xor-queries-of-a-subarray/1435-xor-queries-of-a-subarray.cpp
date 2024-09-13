class Solution {
public:
    int xorr(vector<int>& arr, int i, int j){
        int val=arr[i];
        for(int k=i+1;k<=j;k++){
            val=val ^ arr[k];
        }
        return val;
    }
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        int n=queries.size();
        vector<int> ans(n,0);
        for(int i=0;i<n;i++){
            ans[i]=xorr(arr, queries[i][0], queries[i][1]);
        }
        return ans;
    }
};