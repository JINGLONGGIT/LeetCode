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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) 
    {
        int parentVal = root->val;
        int leftVal = p->val;
        int rightVal = q->val;

        if (leftVal > root->val && rightVal > root->val)
            return lowestCommonAncestor(root->right, p, q);
        else if (leftVal < root->val && rightVal < root->val)
            return lowestCommonAncestor(root->left, p, q);
        else
            return root;
    }
};