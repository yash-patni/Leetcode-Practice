class Solution {
public:
    bool checkEqual(vector<int>& a, vector<int>& b){
        for(int i=0;i<26;i++){
            if(a[i]!=b[i]){
                return 0;
            }
        }
        return 1;
    }
    bool checkInclusion(string s1, string s2) {
        int n1=s1.length();
        int n2=s2.length();
        if(n1>n2) return false;
        vector<int> a(26, 0);
        for(int i=0;i<n1;i++){
            a[s1[i]-'a']++;
        }
        vector<int> b(26, 0);
        for(int i=0;i<n1;i++){
            b[s2[i]-'a']++;
        }
        if(checkEqual(a, b)){
            return true;
        }
        for(int i=n1;i<n2;i++){
            b[s2[i]-'a']++;
            b[s2[i-n1]-'a']--;
            if(checkEqual(a, b)) return true;
        }
        return false;
    }
};