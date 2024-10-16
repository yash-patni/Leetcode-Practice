class Solution {
public:
    double solve(double x, int n){
        if(x==0 || x==1) return x;
        if(n==0) return 1;

        double ans=solve(x, n/2);
        ans=ans*ans;
        if(n%2){
            return ans*x;
        }
        else{
            return ans;
        }
    }
    double myPow(double x, int n) {
        //BRUTE FORCE
        // double ans=1;
        // if(x==0 || x==1) return x;
        // if(n==0) return ans;
        // for(int i=0;i<abs(n);i++){
        //     ans*=x;
        // }
        // if(n<0) return 1/ans;
        // return ans;

        //ANOTHER APPROACH
        double ans=solve(x, abs(n));
        if(n<0) return 1/ans;
        return ans;
    }
};