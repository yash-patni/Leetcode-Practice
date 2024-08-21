class Solution {
public:
    int stoneGameII(vector<int>& piles) {
        int n=piles.size();
        vector<vector<int>> dp(n, vector<int>(n+1, 0));//max stones alice could get from index i with curr m 
        vector<int> suffSum(n,-1);// to store number of pile from ith index to last
        int sum=0;
        for(int i=n-1;i>=0;i--){
            sum+=piles[i];
            suffSum[i]=sum;
        }
        for(int i=n-1;i>=0;i--){
            for(int m=1;m<=n;m++){
                if(i+2*m>=n){
                    dp[i][m]=suffSum[i];
                }
                else{
                    for(int x=1;x<=2*m;x++){
                        dp[i][m]=max(dp[i][m], suffSum[i]-dp[i+x][max(m,x)]);
                    }
                }
            }
        }
        return dp[0][1];
    }
};