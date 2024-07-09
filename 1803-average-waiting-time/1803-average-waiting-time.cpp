class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        double wait=0;
        int n=customers.size();
        int time=customers[0][0];
        for(int i=0;i<n;i++){
            if(time<customers[i][0]){
                time=customers[i][0];
            }
            time=time+customers[i][1];
            wait=wait+(time-customers[i][0]);
        }
        return wait/n;
    }
};