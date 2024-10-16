class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // Binary search Approach
        // int n=nums.size();
        // int low=1;
        // int high=n-1;
        // int ans=0;
        // while(low<=high){
        //     int mid=low+(high-low)/2;
        //     int cnt=0;
        //     for(int i=0;i<n;i++){
        //         if(nums[i]<=mid){
        //             cnt++;
        //         }
        //     }
        //     if(cnt<=mid){
        //         low=mid+1;
        //     }
        //     else{
        //         ans=mid;
        //         high=mid-1;
        //     }
        // }
        // return ans;
        // TC: O(NlogN) //SC:O(1)
        
        //slow fast approach
        //cycle flow
        //for test case 1:
        // Input: nums = [1,3,4,2,2]
        // Output: 2
        //0->1->3->2->4->2 here there is a cycle between 2-4-2
        int slow=0, fast=0;
        do{
            slow=nums[slow];
            fast=nums[nums[fast]];  
        }while(slow!=fast);

        int sp=0;//starting point
        int mp=fast;//meeting point of slow and fast
        while(sp!=mp){
            sp=nums[sp];
            mp=nums[mp];
        }
        return sp;
    }
    
    

    
     
};
