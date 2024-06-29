class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        map<int,int> m;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){ 
            m[nums[i]]++;
        }

        int max_count = 0, res = -1;
        for (auto i : m) {
            if (max_count < i.second && i.first%2==0 ) {
                res = i.first;
                max_count = i.second;
            }
        }
        return res;
    }
};