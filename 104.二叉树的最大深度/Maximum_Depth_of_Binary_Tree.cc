/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int maxDepth(TreeNode* root) 
    {
        if (root == NULL)
            return 0;
        int LeftTreeDepth = maxDepth(root->left);
        int RightTreeDepth = maxDepth(root->right);
        return LeftTreeDepth > RightTreeDepth ? LeftTreeDepth + 1: RightTreeDepth + 1;
    }
};