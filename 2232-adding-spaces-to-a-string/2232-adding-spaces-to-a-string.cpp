class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        vector<string> words;
        int n=spaces.size();
        string w="";
        int j=0;
        for(int i=0; i<s.length(); i++){
            if(j < n && i == spaces[j]) {
                words.push_back(w);
                w = "";
                j++;
            }
            w += s[i];
        }
        words.push_back(w);
        int l=words.size();
        string ans=words[0];
        for(int i=1; i<l; i++){
            ans+=" ";
            ans+=words[i];
        }
        return ans;

    }
};