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
    int widthOfBinaryTree(TreeNode* root) {
        if (!root) return 0;
        
        queue<pair<TreeNode*, long long>> temp;
        temp.push({root, 0});

        int res = 0;
        
        while (!temp.empty()) {
            int size = temp.size();
            long long minIndex = temp.front().second;
            long long left, right;
            
            for (int i = 0; i < size; i++) {
                auto [node, index] = temp.front();
                temp.pop();
                
                index -= minIndex;
                
                if (i == 0) left = index; 
                if (i == size - 1) right = index;

                if (node->left) {
                    temp.push({node->left, 2 * index});
                }
                if (node->right) {
                    temp.push({node->right, 2 * index + 1});
                }
            }
            
            res = max(res, int(right - left + 1));
        }
        
        return res;
    }
};