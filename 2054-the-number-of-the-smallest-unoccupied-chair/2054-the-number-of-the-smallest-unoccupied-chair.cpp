class Solution {
public:
    int smallestChair(vector<vector<int>>& times, int targetFriend) {
        int n=times.size();
        vector<pair<int,int>> arrivals;// an array with a pair of arrival time of ith friend and i
        for(int i=0;i<n;i++){
            arrivals.push_back({times[i][0], i});
        }
        //sorting friends based on their arrival times
        sort(arrivals.begin(), arrivals.end());
        
        //priority queue to track avail chairs-min heap
        priority_queue<int, vector<int>, greater<int>> availchairs;
        for(int i=0; i<n; i++){
            availchairs.push(i);
        }
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> leavingQueue;
        //priority queue to track when chairs are freed
        for (auto& arrival : arrivals) {
            int arrivalTime = arrival.first;
            int friendIndex = arrival.second;
            
            // Free chairs that are vacated before the current arrival time
            while (!leavingQueue.empty() && leavingQueue.top().first <= arrivalTime) {
                availchairs.push(leavingQueue.top().second);
                leavingQueue.pop();
            }
            
            // Assign the smallest available chair
            int chair = availchairs.top();
            availchairs.pop();
            
            // If this is the target friend, return their chair number
            if (friendIndex == targetFriend) {
                return chair;
            }
            
            // Mark the chair as being used until the friend's leave time
            leavingQueue.push({times[friendIndex][1], chair});
        }
        
        return -1; // Should never reach here
    }
};