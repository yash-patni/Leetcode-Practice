class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        int n=nums.size();
        while(k--){
            int num=nums[0];
            int index=0;
            for(int i=0;i<n;i++){
                if(num>nums[i]){
                    num=nums[i];
                    index=i;
                }
            }
            nums[index]*=multiplier;
        }
        return nums;
    }
};