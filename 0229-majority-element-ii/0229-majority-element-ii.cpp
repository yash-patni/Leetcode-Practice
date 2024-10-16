class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        // hashmap approach
        // int n=nums.size();
        // unordered_map<int, int> mpp;
        // for(int i=0;i<n;i++){
        //     mpp[nums[i]]++;
        // }
        // n=n/3;
        // vector<int> ans;
        // for(auto& it: mpp){
        //     if(it.second>n){
        //         ans.push_back(it.first);
        //     }
        // }
        // return ans;

        //moore voting algorithm
        int n=nums.size();
        if(n<2) return nums;
        int first=nums[0];
        int second=nums[0];
        int fc=1, sc=0;
        for(int i=1;i<n;i++){
            if(first==nums[i]){
                fc++;
            }
            else if(second==nums[i]){
                sc++;
            }
            else if(fc==0){
                first=nums[i];
                fc=1;
            }
            else if(sc==0){
                second=nums[i];
                sc=1;
            }
            else{
                fc--;
                sc--;
            }
        }
        if(first==second) return {first};
        vector<int> ans;
        fc=0;
        sc=0;
        for(int i=0;i<n;i++){
            if(nums[i]==first) fc++;
            if(nums[i]==second) sc++;
        }
        if(fc>n/3) ans.push_back(first);
        if(sc>n/3) ans.push_back(second);
        return ans;
    }
};