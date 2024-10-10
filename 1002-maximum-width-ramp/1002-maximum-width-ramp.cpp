class Solution {
public:
    int maxWidthRamp(vector<int>& nums) {
        int ans=0;
        stack<int> stk;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(stk.empty() || nums[i]<nums[stk.top()]){
                stk.push(i);
            }
        }
        for(int j = n-1; j >= 0; j--){
            while(!stk.empty() && nums[j] >= nums[stk.top()]){
                ans = max(ans, j-stk.top());
                stk.pop();
            }
        }
        return ans;
    }
};