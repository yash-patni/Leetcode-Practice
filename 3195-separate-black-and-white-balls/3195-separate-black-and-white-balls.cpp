class Solution {
public:
    long long minimumSteps(string s) {
        long long black=0;
        long long swap=0;
        int n=s.length();
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                black++;
            }
            else{
                swap+=black;
            }
        }
        return swap;
    }
};