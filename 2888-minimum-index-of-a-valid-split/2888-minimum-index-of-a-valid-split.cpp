class Solution {
public:
    int minimumIndex(vector<int>& nums) {
        int m=nums.size();
        unordered_map<int, int> freq;
        //counting frequency of every element
        for(int i=0;i<m;i++){
            freq[nums[i]]++;
        }
        // storing num in element having freq>m/2 i.e 2*freq>m
        //and freq of num in total
        int element, total;
        for(auto it:freq){
            if(it.second>m/2){
                element=it.first;
                total=it.second;
                break;
            }
        }
        int count=0;//declared count to keep count of left arr(0 to i) index
        for(int i=0;i<m;i++){
            int l=i+1;//left part size
            int r=m-1-i;//right part size
            if(nums[i]==element) count++;
            if(count*2>l && (total-count)*2>r){
                return i;
            }
        }
        return -1;
    }
};