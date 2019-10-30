// 二次遍历
class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& A) 
    {
        vector<int> ans(A.size());
        int t = 0;
        for (int i = 0; i < A.size(); i++)
        {
            if (A[i] % 2 == 0)
            {
                ans[t] = A[i];
                t += 2;
            }
        }
        
        t = 1;
        for (int i = 0; i < A.size(); i++)
        {
            if (A[i] % 2 == 1)
            {
                ans[t] = A[i];
                t += 2;
            }
        }
        
        return ans;
    }
};

// 双指针
class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& A) 
    {
        int j = 1;
        for (int i = 0; i < A.size(); i += 2)
        {
            if (A[i] % 2 == 1)
            {
                while (A[j] % 2 == 1)
                {
                    j += 2;
                }
                
                int tmp = A[i];
                A[i] = A[j];
                A[j] = tmp;
            }
        }
        return A;
    }
};