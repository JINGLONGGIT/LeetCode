/*********************************
原本的杨辉三角：
    1
   1 1
  1 2 1
 1 3 3 1 
1 4 6 4 1

变形后的杨辉三角：
1
1 1
1 2 1
1 3 3 1 
1 4 6 4 1
*********************************/

class Solution {
public:
    vector<int> getRow(int rowIndex) 
    {
        vector<int> vecResult(rowIndex + 1, 0);     // 定义一个rowIndex + 1的数组，并初始化为0
        vecResult[0] = 1;
        
        for (int i = 1; i <= rowIndex; i++)
        {
            for (int j = i; j >= 1; j--)
            {
                vecResult[j] += vecResult[j - 1];
            }
        }
        
        return vecResult;
    }
};