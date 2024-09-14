class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n=nums.size();
        int m=max_element(nums.begin(), nums.end())-nums.begin();
        int maxiLen=0;
        int x=nums[m];
        for(int i=m;i<n;i++){
            int len=0;
            while(i<n && nums[i]==x){
                i++;
                len++;
            }
            maxiLen=max(maxiLen, len);
        }
        return maxiLen;
    }
};