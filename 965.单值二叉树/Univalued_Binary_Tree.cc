/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
// 递归遍历
class Solution {
public:
    int tmp;
    bool SearchTree(TreeNode *root)
    {
        if (root == NULL)
            return true;
        if (root->val != tmp)
            return false;
        return SearchTree(root->left) && SearchTree(root->right);
    }

    bool isUnivalTree(TreeNode* root) 
    {
        tmp = root->val;
        return SearchTree(root);
    }
};

// 递归遍历 + set去重
class Solution {
public:
    set<int> tree_set;
    bool isUnivalTree(TreeNode* root) 
    {
        if (root == NULL)
            return true;
        
        tree_set.insert(root->val);
        isUnivalTree(root->left);
        isUnivalTree(root->right);
        
        if (tree_set.size() > 1)
            return false;
        return true;
    }
};