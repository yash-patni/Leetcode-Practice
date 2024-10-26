class Solution {
public:
    vector<string> res;
    int size;
    void helper(string s, int o, int c) {
        if(s.size() == 2 * size) {
            res.push_back(s);
            return;
        }
        if(c >= o && o != 0) {
            helper(s + '(', o - 1, c);
        }
        if(o < c && c != 0) {
            helper(s + ')', o, c - 1);
        }
    }
    vector<string> generateParenthesis(int n) {
        size = n;
        helper("", n, n);
        return res;
    }
};