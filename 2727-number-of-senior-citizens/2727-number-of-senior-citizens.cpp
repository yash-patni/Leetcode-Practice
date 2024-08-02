class Solution {
public:
    int countSeniors(vector<string>& details) {
        int count=0;
        for(auto&str : details){
            string s=str.substr(11,2);
            int x=stoi(s);
            if(x>60)count++;
        }
        return count;
    }
};