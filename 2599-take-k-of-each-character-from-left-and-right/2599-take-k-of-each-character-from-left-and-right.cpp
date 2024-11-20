class Solution {
public:
    int takeCharacters(string s, int k) {
        int n=s.length();
        vector<int> freq(3, 0);
        for(char c:s){
            freq[c-'a']++;
        }
        if(freq[0]<k || freq[1]<k || freq[2]<k){
            return -1;
        }
        vector<int> curr(3,0);
        int maxi=0;
        int left=0;
        for(int right=0; right<n; right++){
            curr[s[right] - 'a']++;
            
            while (left <= right && (curr[0] > freq[0] - k || 
                   curr[1] > freq[1] - k || 
                   curr[2] > freq[2] - k)) {
                curr[s[left] - 'a']--;
                left++;
            }
            
            maxi = max(maxi, right - left + 1);
        }
        return n-maxi;
    }
};