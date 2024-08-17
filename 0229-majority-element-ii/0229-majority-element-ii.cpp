class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int, int> mpp;
        for(int i=0;i<n;i++){
            mpp[nums[i]]++;
        }
        n=n/3;
        vector<int> ans;
        for(auto& it: mpp){
            if(it.second>n){
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};