class Solution {
public:
    int n;
    unordered_set<string> st;
    int t[301];
    bool solve(int ind, string s){
        if(ind==n) return true;
        if(st.find(s)!=st.end()) return true;
        if(t[ind]!=-1) return t[ind];
        for(int l=1;l<=n;l++){
            string temp=s.substr(ind, l);
            if(st.find(temp)!=st.end() && solve(ind+l, s)){
                return t[ind]=true;
            }
        }
        return t[ind]=false;
    }
    
    bool wordBreak(string s, vector<string>& wordDict) {
        n=s.length();
        memset(t, -1, sizeof(t));
        for(string &word: wordDict) st.insert(word);
        return solve(0, s);
    }
};