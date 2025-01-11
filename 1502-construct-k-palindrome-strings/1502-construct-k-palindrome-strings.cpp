class Solution {
public:
    bool canConstruct(string s, int k) {
        if(s.length()<k) return false;
        
        sort(s.begin(), s.end());
        int oddCount=0;

        for(int i=0;i<s.length(); ){
            char curr = s[i];
            int cnt=0;
            while(i<s.length() && s[i]==curr){
                cnt++;
                i++;
            }
            if(cnt%2!=0) oddCount++;
        }
        return oddCount<=k;
    }
};