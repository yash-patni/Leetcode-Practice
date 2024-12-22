class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<int> arr;
        vector<pair<int,int>> ap;
        for(int i=0;i<mat.size();i++)
        {
            int c=0;
            for(int j=0;j<mat[0].size();j++){
                if(mat[i][j] == 1)
                    c++;
            }
            ap.push_back({c,i});    
        }
        sort(ap.begin(),ap.end());
        for(auto i=0;i<k;i++){
            arr.push_back(ap[i].second);
        }
        return arr;
    }
};