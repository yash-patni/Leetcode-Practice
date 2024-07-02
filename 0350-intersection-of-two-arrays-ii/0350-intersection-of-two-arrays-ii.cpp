class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        //Brute approach
        // vector<int> ans;
        // sort(nums1.begin(),nums1.end());
        // sort(nums2.begin(),nums2.end());
        // int n=nums2.size();
        // vector<int> visited(n, 0);
        // for(int i=0;i<nums1.size();i++){
        //     for(int j=0;j<nums2.size();j++){
        //         if(nums1[i]==nums2[j] && visited[j]==0){
        //             ans.push_back(nums2[j]);
        //             visited[j]=1;
        //             break;
        //         }
        //         if(nums2[j]>nums1[i]){
        //             break;
        //         }
        //     }
        // }
        // return ans;
        //----------------------------------------
        //Optimal approach
        int i=0, j=0;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        int n= nums1.size(), m =nums2.size();
        vector<int> ans;
        while(i<n && j<m){
            if(nums1[i]<nums2[j]){
                i++;
            }
            else if(nums1[i]>nums2[j]){
                j++;
            }
            else{
                ans.push_back(nums1[i]);
                i++;
                j++;
            }
        }
        return ans;
    }
};