class Solution {
private:
    int start;  // Declare globally
    int end;    // Declare globally
    int max_len;    // Declare globally
    
    void extendPalindrome(string s, int i, int j) {
        while (i >= 0 && j < s.length() && s[i] == s[j]) {
            --i;
            ++j;
        }
        if (j - i - 1 > max_len) {  
            start = i + 1;
            end = j;
            max_len = j - i - 1;
        }
    }
public:
    string longestPalindrome(string s) {
        start = -1;     // Initialize globally
        end = -1;       // Initialize globally
        max_len = 0;    // Initialize globally
        
        for (int i = 0; i < s.length(); i++) {
            extendPalindrome(s, i, i);
            extendPalindrome(s, i, i + 1);
        }
        
        // Return the longest palindrome substring
        return s.substr(start, max_len);
    }
};