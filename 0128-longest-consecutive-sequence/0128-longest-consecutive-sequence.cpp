class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        if(n==0 || n==1) return n;
        sort(nums.begin(), nums.end());
        int ls=INT_MIN;
        int maxi=1;
        int count=0;
        for(int i=0;i<n;i++){
            if(nums[i]-1==ls){
                count++;
                ls=nums[i];
            }
            else if(nums[i]!=ls){
                count=1;
                ls=nums[i];
            }
            maxi=max(maxi, count);
        }
        return maxi;
    }
};