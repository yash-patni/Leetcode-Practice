class Solution {
public:
    int sumOfSquares(int n) {
        int sum = 0;
        while(n){
            int digit=n%10;
            sum+=digit*digit;
            n/=10;
        }
        return sum;
    }
    bool isHappy(int n) {
        int s=n;
        int f=sumOfSquares(n);
        if(s==1 || f==1){
            return true;
        }
        while(s!=f) {
            s = sumOfSquares(s);
            f = sumOfSquares(sumOfSquares(f));
            if(s==1 || f==1) {
                return true;
            }
        }
        return false;
    }
};