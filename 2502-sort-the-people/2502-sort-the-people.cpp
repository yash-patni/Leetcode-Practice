class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        // //BUBBLE SORT
        // int n=heights.size();
        // bool swapped;
        // for(int i=0;i<n-1;i++){
        //     swapped=false;
        //     for(int j=0;j<n-i-1;j++){
        //         if(heights[j]<heights[j+1]){
        //             swap(heights[j], heights[j+1]);
        //             swap(names[j], names[j+1]);
        //             swapped=true;
        //         }
        //     }
        //     if(swapped==false){
        //         break;
        //     }
        // }
        // // reverse(names.begin(), names.end());
        // return names;
        // // T.C. : O(n^2) S>C : O(1)

        //Optimal Approach
        vector<pair<int,string>>ans;
        int n=heights.size();
        for(int i=0;i<n;i++)
        {
            ans.push_back({heights[i],names[i]});
        }
        vector<string>res;
        sort(ans.begin(),ans.end());
        for(int i=n-1;i>=0;i--)
        {
            res.push_back(ans[i].second);
        }
        return res;
    }
};