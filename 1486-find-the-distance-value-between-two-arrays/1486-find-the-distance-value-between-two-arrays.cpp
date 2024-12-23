class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int count = 0;
        for(int i:arr1){
            int found = 0;
            for(int j:arr2){
                if(abs(i-j)<=d)
                {
                    found++;
                    break;
                }
            }
            if(found == 0)
            {
                count++;
            }
        }
        return count;
    }
};