class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> mpp;
        vector<int> ans;
        for(int i=0;i<nums2.size();i++){
            mpp[nums2[i]]=i+1;
        }
        for(int i=0;i<nums1.size();i++){
            bool flag=false;
            for(int j=mpp[nums1[i]]; j<nums2.size();j++){
                if(nums2[j]>nums1[i]){
                    ans.push_back(nums2[j]);
                    flag=true;
                    break;
                }
            }
            if(!flag) ans.push_back(-1);
        }
        return ans;

    }
};