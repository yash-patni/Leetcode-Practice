class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        int n=heights.size();
        bool swapped;
        for(int i=0;i<n-1;i++){
            swapped=false;
            for(int j=0;j<n-i-1;j++){
                if(heights[j]<heights[j+1]){
                    swap(heights[j], heights[j+1]);
                    swap(names[j], names[j+1]);
                    swapped=true;
                }
            }
            if(swapped==false){
                break;
            }
        }
        // reverse(names.begin(), names.end());
        return names;
    }
};