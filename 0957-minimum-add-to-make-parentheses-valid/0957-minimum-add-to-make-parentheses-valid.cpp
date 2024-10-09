class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char> stk;
        int n=s.length();
        int ans=0;
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                stk.push('(');
            }
            else{
                if(!stk.empty()){
                    stk.pop();
                }
                else{
                    ans++;
                }
            }
        }
        ans+=stk.size();
        return ans;
    }
};