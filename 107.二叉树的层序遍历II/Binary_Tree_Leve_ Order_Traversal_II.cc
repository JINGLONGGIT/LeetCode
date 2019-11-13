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
    vector<vector<int>> levelOrderBottom(TreeNode* root) 
    {
        vector<vector<int>> res;
        queue<TreeNode *> que;
        que.push(root);

        if (root == NULL)
            return res;

        while (!que.empty())
        {
            vector<int> temp;
            int i32NodeCount = que.size();
            for (int i = 0; i < i32NodeCount; i++)
            {
                root = que.front();
                temp.push_back(root->val);
                que.pop();
                if (root->left)
                    que.push(root->left);
                if (root->right)
                    que.push(root->right);
            }
            res.push_back(temp);
        }
        reverse(res.begin(), res.end());
        return res;
    }
};