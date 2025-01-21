class Solution {
public:
    long long gridGame(vector<vector<int>>& grid) {
        long long topSum=0;
        int n=grid[0].size();
        for(int i=0;i<n;i++){
            topSum+=grid[0][i];
        }
        long long bottomSum=0;
        long long res=LLONG_MAX;
        for(int i=0;i<n;i++){
            topSum -= grid[0][i];
            res = min(res, max(topSum, bottomSum));
            bottomSum +=grid[1][i];
        }
        return res;
    }
};