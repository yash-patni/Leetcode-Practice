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
    TreeNode* createBinaryTree(vector<vector<int>>& descriptions) {
        unordered_map<int, int> parent;
        unordered_map<int, int> child;
        unordered_map<int, TreeNode*> mpp;
        int n=descriptions.size();
        for(int i=0;i<n;i++){
            if(mpp.find(descriptions[i][0])==mpp.end()){
                TreeNode* node=new TreeNode(descriptions[i][0]);
                mpp[descriptions[i][0]]=node;
            }
            if(mpp.find(descriptions[i][1])==mpp.end()){
                TreeNode* node=new TreeNode(descriptions[i][1]);
                mpp[descriptions[i][1]]=node;
            }
            if(descriptions[i][2]){
                mpp[descriptions[i][0]]->left=mpp[descriptions[i][1]];
            }
            else{
                mpp[descriptions[i][0]]->right=mpp[descriptions[i][1]];
            }
            parent[descriptions[i][0]]++;
            child[descriptions[i][1]]++;
        }
        TreeNode* ans;
        for(auto it:mpp){
            if(parent.find(it.first)!=parent.end() && child.find(it.first)==child.end()){
                ans=it.second;
                break;
            }
        }
        return ans;
    }
};