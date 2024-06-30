class Solution {
public:
    long long solve(long long m, long long n){
        int mod=1e9+7;
        long long ans=1;
        while(n){
            if(n&1){
                ans=(ans*m)%mod;
            }
            m=m*m%mod;
            n/=2;
        }
        return (int)((ans-2+mod)%mod);
    } 
    int monkeyMove(int n) {
        return solve(2,n);
    }
};