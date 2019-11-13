/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
// 深度优先遍历
class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) 
    {
        vector<double> res;
        queue<TreeNode *> que;
        TreeNode *p;
        que.push(root);
        
        while(!que.empty())
        {
            double sum = 0;     // 每层的总和
            int count = 0;      // 层数
            queue<TreeNode *> temp;
            while (!que.empty())
            {
                p = que.front();
                count++;
                sum += p->val;
                que.pop();
                if (p->left)
                    temp.push(p->left);
                if (p->right)
                    temp.push(p->right);
            }
            que = temp;
            res.push_back(sum / count);
        }
        
        return res;
    }
};

// 深度优先遍历优化
class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) 
    {
        vector<double> res;
        queue<TreeNode *> que;
        que.push(root);
        while (!que.empty())
        {
            double sum = 0;                     // 每层所有节点数值之和
            int i32NodeCount = que.size();      // 每层的节点数
            for (int i = 0; i < i32NodeCount; i++)
            {
                root = que.front();
                sum += root->val;
                que.pop();
                if (root->left)
                    que.push(root->left);
                if (root->right)
                    que.push(root->right);
            }
            res.push_back(sum / i32NodeCount);
        }
        return res;
    }
};