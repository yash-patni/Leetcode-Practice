class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        int sz=original.size();
        vector<vector<int>> ans(m, vector<int>(n,0));
        if(sz!=m*n) return {};
        for(int i=0;i<sz;i++){
            int row = i / n;
            int col = i % n;
            ans[row][col] = original[i];
        }
        return ans;
    }
};