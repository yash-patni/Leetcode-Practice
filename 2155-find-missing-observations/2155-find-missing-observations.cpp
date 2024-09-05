class Solution {
public:
    void targ(vector<int>& ans, int sum, int n, int i, vector<int>& dice){
        if(sum==0 && i==n){
            return;
        }
        if(i>=n) return;
        
    }
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        int m=rolls.size();
        int msum=0;
        for(int i=0;i<m;i++){
            msum+=rolls[i];
        }
        int nsum=(mean*(m+n))-msum;
        if(nsum>n*6 || nsum<n) return {};

        int rem=nsum%n;
        int q=nsum/n;

        vector<int> ans(n, q);
        for(int i=1;i<=rem;i++){
            ans[i]++;
        }
        return ans;
    }
};