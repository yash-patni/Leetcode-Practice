class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.length();
        if(n==0) return 0;
        int l=0;
        int maxi=INT_MIN;
        unordered_set<int> st;
        for(int i=0;i<n;i++){
            if(st.find(s[i]) != st.end()){
                while(l<i && st.find(s[i])!=st.end()){
                    st.erase(s[l]);
                    l++;
                }
            }
            st.insert(s[i]);
            maxi=max(maxi, i-l+1);
        }
        return maxi;
    }
};