class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)
        return 0;
        sort(nums.begin(),nums.end());
        int count=0;
        int ls=INT_MIN; 
        int longest=1;    
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]-1 == ls)
            {
                count++;
                ls=nums[i];
            }
            else if(ls != nums[i])
            {
                count=1;
                ls=nums[i];
            }
            longest=max(longest,count);
        }
        return longest;
    }
};