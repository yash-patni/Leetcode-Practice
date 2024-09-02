class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        int n=chalk.size();
        long long sum=0;
        for(int i=0;i<n;i++) sum+=chalk[i];
        k=k%sum;
        int i=0;
        while(chalk[i]<=k){
            k=k-chalk[i%n];
            i++;
            i=i%n;
        }
        return i;
    }
};