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
    void inorder(TreeNode *node, vector<int>& res)
    {
        if (node == NULL)
            return ;
        inorder(node->left, res);
        res.push_back(node->val);
        inorder(node->right, res);
    }

    TreeNode* increasingBST(TreeNode* root) 
    {
        vector<int> VecTree;
        inorder(root, VecTree);

        if (VecTree.size() == 0)
            return root;
        
        TreeNode* tmp = new TreeNode(VecTree[0]);
        TreeNode* cur = tmp;

        for (vector<int>::iterator it = ++VecTree.begin(); it < VecTree.end(); it++)
        {
            cur->right = new TreeNode(*it);
            cur = cur->right;
        }
           
        return tmp;
    }
};