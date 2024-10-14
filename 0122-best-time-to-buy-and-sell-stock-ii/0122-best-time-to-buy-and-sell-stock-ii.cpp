class Solution {
public:
    //MEMOISATION
    // int f(int ind, int buy, int n, vector<int>& prices, vector<vector<int>>& dp){
    //     if(ind==n){
    //         return 0;
    //     }
    //     if(dp[ind][buy]!=-1) return dp[ind][buy];
    //     int take, notake;
    //     if(buy){
    //         take=-prices[ind]+f(ind+1, 0, n, prices, dp);
    //         notake=0+f(ind+1, 1, n, prices, dp);
    //     }
    //     else{
    //         take=prices[ind]+f(ind+1, 1, n, prices, dp);
    //         notake=0+f(ind+1, 0, n, prices, dp);
    //     }
    //     return dp[ind][buy]=max(take, notake);
    // }
    // int maxProfit(vector<int>& prices) {
    //     int n=prices.size();
    //     vector<vector<int>> dp(n, vector<int>(2,-1));
    //     return f(0, 1, n, prices, dp);
    // }

    //TABULATION
    // int maxProfit(vector<int>& prices) {
    //     int n=prices.size();
    //     vector<vector<int>> dp(n+1, vector<int>(2,0));
    //     dp[n][0]=dp[n][1]=0;
    //     for(int ind=n-1; ind>=0; ind--){
    //         for(int buy=0; buy<=1; buy++){
    //             int profit=0;
    //             if(buy){
    //                 profit=max(-prices[ind]+dp[ind+1][0], 0+dp[ind+1][1]);
    //             }
    //             else{
    //                 profit=max(prices[ind]+dp[ind+1][1], 0+dp[ind+1][0]);
    //             }
    //             dp[ind][buy]=profit;
    //         }
    //     }
    //     return dp[0][1];
    // }

    //Space optimization
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<int> prev(2,0), curr(2,0);
        prev[0]=prev[1]=0;
        for(int ind=n-1; ind>=0; ind--){
            for(int buy=0; buy<=1; buy++){
                int profit=0;
                if(buy){
                    profit=max(-prices[ind]+prev[0], 0+prev[1]);
                }
                else{
                    profit=max(prices[ind]+prev[1], 0+prev[0]);
                }
                curr[buy]=profit;
            }
            prev=curr;
        }
        return prev[1];
    }
};