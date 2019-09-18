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
    vector<vector<int>> generate(int numRows) 
    {
        vector<vector<int>> resultVec(numRows);
        
        if (numRows == 0)
            return resultVec;
        
        for (int i = 0; i < numRows; i++)
        {
            for (int j = 0; j <= i; j++)
            {
                if (j == 0 || j == i)
                {
                    resultVec[i].push_back(1);
                }   
                else
                {
                    resultVec[i].push_back(resultVec[i - 1][j - 1] + resultVec[i - 1][j]);
                }
            }
        }
        
        return resultVec;
    }
};