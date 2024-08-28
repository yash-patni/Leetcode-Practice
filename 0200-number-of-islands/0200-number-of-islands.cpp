class Solution {
public:
    void dfs(int r, int c, vector<vector<int>>& vis, vector<vector<char>>& grid){
        if(r<0 || r>grid.size()-1 || c<0 ||c>grid[0].size()-1 || grid[r][c]=='0' || vis[r][c]){
            return ;
        }
        vis[r][c]=1;
        dfs(r-1, c, vis, grid);
        dfs(r+1, c, vis, grid);
        dfs(r, c-1, vis, grid);
        dfs(r, c+1, vis, grid);
        
    }
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        if(n==0){
            return 0;
        }
        int m=grid[0].size();
        vector<vector<int>> vis(n, vector<int>(m, 0));
        int count=0;
        for(int r=0; r<n; r++){
            for(int c=0;c<m;c++){
                if(!vis[r][c] && grid[r][c]=='1'){
                    count++;
                    dfs(r, c, vis, grid);
                }
            }
        }
        return count;
    }
};