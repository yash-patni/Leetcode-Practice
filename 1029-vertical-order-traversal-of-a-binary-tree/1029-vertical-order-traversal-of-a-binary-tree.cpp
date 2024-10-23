/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        //Queue q will have values in combination of {node, vertical, level}
        //The map is based on the vertical and level information of each node. The vertical information, represented by 'v', signifies the vertical column, while the level information, denoted as 'l', acts as the key within the nested map. This nested map utilises a multiset to ensure that node values are stored in a unique and sorted order.
        map<int, map<int, multiset<int>>> mpp;
        queue<pair<TreeNode*, pair<int, int>>> q;
        q.push({root, {0,0}});
        while(!q.empty()){
            auto p=q.front();
            q.pop();
            TreeNode* node=p.first;
            int v=p.second.first;
            int l=p.second.second;
            mpp[v][l].insert(node->val);
            if(node->left!=NULL) q.push({node->left, {v-1, l+1}});
            if(node->right!=NULL) q.push({node->right, {v+1, l+1}});
        }
        vector<vector<int>> ans;
        for(auto p: mpp){
            vector<int> col;
            for(auto q: p.second){
                col.insert(col.end(), q.second.begin(), q.second.end());
            }
            ans.push_back(col);
        }
        return ans;
    }
};