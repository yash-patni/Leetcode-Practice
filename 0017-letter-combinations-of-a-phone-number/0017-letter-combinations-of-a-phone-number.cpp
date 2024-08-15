class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if (digits.empty()) return {};
        
        // Mapping of digits to corresponding letters.
        map<char, string> mpp = {
            {'2', "abc"}, {'3', "def"}, {'4', "ghi"}, {'5', "jkl"}, 
            {'6', "mno"}, {'7', "pqrs"}, {'8', "tuv"}, {'9', "wxyz"}
        };
        vector<string> result;
        vector<string> temp;
        temp.push_back("");
        
        for(char digit : digits){
            string letters = mpp[digit];
            vector<string> newTemp;
            
            for(const string &combination : temp){
                for (char letter : letters){
                    newTemp.push_back(combination + letter);
                }
            }
            temp = newTemp;
        }
        return temp;
    }
};