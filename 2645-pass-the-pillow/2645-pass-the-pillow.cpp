class Solution {
public:
    int passThePillow(int n, int time) {
        int rounds=time/(n-1);
        int x=time%(n-1);
        if(rounds%2==0 || rounds==0){
            return 1+x;
        }
        return n-x;
    }
};