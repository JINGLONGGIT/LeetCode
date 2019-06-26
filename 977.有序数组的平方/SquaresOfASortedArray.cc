// 解法一：
class Solution {
public:
    static bool cmp(const int& a, const int& b)
    {
        return a < b;
    }
    
    vector<int> sortedSquares(vector<int>& A) 
    {
        for (int i = 0; i < A.size(); i++)
        {
            A[i] = A[i] * A[i];
        }
        
        sort(A.begin(), A.end(), cmp);
        
        return A;
    }
};

// 解法二：
class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) 
    {
        vector<int> tmp;
        vector<int> vecResult;
        int i = 0;
        int j = A.size() - 1;
        
        while (i < j)
        {
            int a1 = A[i] * A[i];
            int a2 = A[j] * A[j];
            
            if (a1 < a2)
            {
                tmp.push_back(a2);
                j--;
            }
            else if (a1 > a2)
            {
                tmp.push_back(a1);
                i++;
            }
            else 
            {
                tmp.push_back(a1);
                tmp.push_back(a2);
                i++;
                j--;
            }
        }
        
        if (i == j)
        {
            tmp.push_back(A[i] * A[i]);    
        }
        
        // 数组反转
        for (int i = tmp.size() - 1; i >= 0; i--)
        {
            vecResult.push_back(tmp[i]);
        }
        
        return vecResult;
    }
};