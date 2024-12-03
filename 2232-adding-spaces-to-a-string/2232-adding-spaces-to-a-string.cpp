class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        //Approach 2
        int n=s.length();
        int m=spaces.size();
        string ans(n+m, ' ');
        int j=0;
        for(int i=0; i<n; i++){
            if(j<m && i==spaces[j]){
                ans[i+j]=' ';
                j++;
            }
            ans[i+j]=s[i];
        }
        return ans;

        //Approach 1
        // vector<string> words;
        // int n=spaces.size();
        // string w="";
        // int j=0;
        // for(int i=0; i<s.length(); i++){
        //     if(j < n && i == spaces[j]) {
        //         words.push_back(w);
        //         w = "";
        //         j++;
        //     }
        //     w += s[i];
        // }
        // words.push_back(w);
        // int l=words.size();
        // string ans=words[0];
        // for(int i=1; i<l; i++){
        //     ans+=" ";
        //     ans+=words[i];
        // }
        // return ans;
    }
};