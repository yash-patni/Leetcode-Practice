class Solution {
public:
    int minimumIndex(vector<int>& nums) {
        int m=nums.size();
        unordered_map<int, int> freq;
        for(int i=0;i<m;i++){
            freq[nums[i]]++;
        }
        int element, total;
        for(auto it:freq){
            if(it.second>m/2){
                element=it.first;
                total=it.second;
                break;
            }
        }
        int count=0;
        for(int i=0;i<m;i++){
            int l=i+1;
            int r=m-1-i;
            if(nums[i]==element) count++;
            if(count*2>l && (total-count)*2>r){
                return i;
            }
        }
        return -1;
    }
};