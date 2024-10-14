class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max=0;
        int st=prices[0];
        int n=prices.size();
        for(int i=1;i<n;i++){
            if(st<prices[i]){
                max+=prices[i]-st;
            }
            st=prices[i];
        }
        return max;
    }
};