/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
// 在递去的过程中解决问题
class Solution {
public:
    TreeNode* invertTree(TreeNode* root) 
    {
        if (root == NULL)
            return NULL;
        TreeNode *tmp = root->left;
        root->left = root->right;
        root->right = tmp;
        invertTree(root->left);
        invertTree(root->right);
        return root;
    }
};

// 在归来的过程中解决问题
class Solution {
public:
    TreeNode* invertTree(TreeNode* root) 
    {
        if (root == NULL)
            return NULL;
        TreeNode* left = invertTree(root->left);
        TreeNode* right = invertTree(root->right);
        root->left = right;
        root->right = left;
        return root;
    }
};