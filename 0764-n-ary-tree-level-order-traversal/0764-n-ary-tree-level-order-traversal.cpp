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
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>> ans;
        if(root==NULL) return ans;
        queue<Node*> q;
        q.push(root);
        int flag=1;
        while(!q.empty()){
            vector<int> level;
            int n=q.size();
            for(int i=0;i<n;i++){
                Node* temp=q.front();
                q.pop();
                level.push_back(temp->val);
                for(const auto& it: temp->children){
                    q.push(it);
                }
            }
            ans.push_back(level);
        }
        return ans;
    }
};