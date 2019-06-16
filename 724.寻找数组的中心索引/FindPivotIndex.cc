// 解法一：
class Solution 
{
public:
    int pivotIndex(vector<int>& nums) 
    {
        for (int i = 0; i < nums.size(); i++)
        {
            int i32Before = 0;
            int i32After = 0;
            int i32Temp = i;
            
            for (int j = 0; j < i32Temp; j++)
            {
                i32Before += nums[j];    
            }
            
            for (int k = i32Temp + 1; k < nums.size(); k++)
            {
                i32After += nums[k];
            }
            
            if (i32Before == i32After)
            {
                return i;
            }
        }
        
        return -1;
    }
};