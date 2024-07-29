class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return nums[0]; //if nums size is 1 
        // for the corner elements
        if(nums[0]!=nums[1]) return nums[0];
        if(nums[n-1]!=nums[n-2]) return nums[n-1];
        // for all elements between 0 and n-1 indexes
        int low=1;
        int high=n-2;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid] != nums[mid-1] && nums[mid] != nums[mid+1]){
                return nums[mid];
            }
            if(mid%2==0 && nums[mid]==nums[mid+1]){
                low=mid+2; //eliminating the left half when mid is at even index
            }
            else if(mid%2==1 && nums[mid-1]==nums[mid]){
                low=mid+1; //eliminating the left half when mid is at odd index
            }
            else{
                high=mid-1; //eliminating the right half
            }
        }
        return -1;
    }
};