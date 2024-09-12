class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_map<char, int> mpp;
        for(int i=0;i<allowed.length();i++){
            mpp[allowed[i]]=1;
        }
        int count=0;
        for(int i=0;i<words.size();i++){
            int flag=1;
            for(int j=0;j<words[i].length();j++){
                if(!mpp[words[i][j]]){
                    flag=0;
                    break;
                }
            }
            if(flag) count++;
        }
        return count;
    }
};