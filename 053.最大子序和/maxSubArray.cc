// 解法一：暴力解法
class Solution {
public:
    int maxSubArray(vector<int>& nums) 
    {
        vector<int> vecResult;
        int i32MaxNum = 0;
        int i32CurNum = 0;
        
        for (int i = 0; i < nums.size(); i++)
        {
            i32CurNum = 0;
            i32MaxNum = nums[i];            
            
            for (int j = i; j < nums.size(); j++)
            {
                i32CurNum += nums[j];
            
                if (i32CurNum > i32MaxNum)
                {
                    i32MaxNum = i32CurNum;
                }
            }
            
            vecResult.push_back(i32MaxNum);
        }
        
        i32MaxNum = vecResult[0];
        for (int i = 0; i < vecResult.size(); i++)
        {
            i32CurNum = vecResult[i];
            if (i32CurNum > i32MaxNum)
            {
                i32MaxNum = i32CurNum;
            }
        }
        
        return i32MaxNum;
    }
};