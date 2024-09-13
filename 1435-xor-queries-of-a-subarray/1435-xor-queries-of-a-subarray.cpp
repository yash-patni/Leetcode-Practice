class Solution {
public:
    //Brute Force
    // int xorr(vector<int>& arr, int i, int j){
    //     int val=arr[i];
    //     for(int k=i+1;k<=j;k++){
    //         val=val ^ arr[k];
    //     }
    //     return val;
    // }
    // vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
    //     int n=queries.size();
    //     vector<int> ans(n,0);
    //     for(int i=0;i<n;i++){
    //         ans[i]=xorr(arr, queries[i][0], queries[i][1]);
    //     }
    //     return ans;
    // }

    //Optimal Approach
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        int n=queries.size();
        int m=arr.size();
        vector<int> pref(m,0);
        pref[0]=arr[0];
        //Calculation prefix xor array
        for(int i=1;i<m;i++){
            pref[i]=pref[i-1]^arr[i];
        }
        vector<int> ans(n,0);
        for(int k=0;k<n;k++){
            int i=queries[k][0];
            int j=queries[k][1];
            if(i==0){
                ans[k]=pref[j];
            }
            else{
                ans[k]=pref[j]^pref[i-1];
            }
        }
        return ans;
    }
};