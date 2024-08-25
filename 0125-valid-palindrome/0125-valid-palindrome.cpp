class Solution {

    bool valid(char ch){
        if( (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9')){
        return true;
        }
        return 0;
    }

    char lowerCase(char ch){
        if((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9')){
            return ch;
        } else {
            return ch = ch -'A' + 'a';
        }
    };

    bool checkPalindrome(string a){
        int s = 0;
        int e = a.length()-1;
        while(s<e){
            if(a[s] != a[e]){
                return 0;
            } else {
                s++;
                e--;
            }
        }
        return 1;
    };

public:
    bool isPalindrome(string s) {
        //remove extra char
        string temp;
        for(int i=0; i<s.length(); i++){
            if(valid(s[i])){
                temp.push_back(s[i]);
            }
        }
        //to lowercase
        for(int i = 0; i<temp.length(); i++ ){
            temp[i] = lowerCase(temp[i]);
        }

        // check palindrome
        return checkPalindrome(temp);

    }
};