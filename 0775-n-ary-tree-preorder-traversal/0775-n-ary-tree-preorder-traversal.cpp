/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    void preorderTrav(Node* root, vector<int>& ans){
        if(root==NULL){
            return;
        }
        ans.push_back(root->val);
        for(const auto& it: root->children){
            preorderTrav(it, ans);
        }
    }
    vector<int> preorder(Node* root) {
        vector<int> ans;
        preorderTrav(root, ans);
        return ans;
    }
};