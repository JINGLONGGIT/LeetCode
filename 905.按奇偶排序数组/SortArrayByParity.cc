// 解法一：
class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) 
    {
        for (int i = 1; i < A.size(); i++)
        {
            for (int j = 0; j < A.size() - i; j++)
            {
                if (A[j] % 2 != 0)
                {
                    int tmp = A[j];
                    A[j] = A[j + 1];
                    A[j + 1] = tmp;
                }
            }
        }
        
        return A;
    }
};

// 解法二
class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) 
    {
        vector<int> vecResult;
        
        // 将偶数元素放入新数组
        for (int i = 0; i < A.size(); i++)
        {
            if (0 == A[i] % 2)
            {
                vecResult.push_back(A[i]);
            }
        }
        
        // 将奇数元素放入新数组
        for (int i = 0; i < A.size(); i++)
        {
            if (0 != A[i] % 2)
            {
                vecResult.push_back(A[i]);
            }
        }
        
        return vecResult;
    }
};