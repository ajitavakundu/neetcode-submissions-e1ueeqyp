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
    int maxDepth(TreeNode* root) {
        if (nullptr == root)
            return 0;
        
        if (nullptr == root->left && nullptr == root->right)
            return 1;

        int countL = 0;
        int countR = 0;
        countL = maxDepth(root->left);
        countR = maxDepth(root->right);
        return max(countL,countR)+1;
    }
};
