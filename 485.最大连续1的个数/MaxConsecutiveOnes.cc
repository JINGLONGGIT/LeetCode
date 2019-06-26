class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) 
    {
        int i32CurNums = 0;
        int i32MaxNums = 0;
        
        for (int i = 0; i < nums.size(); i++)
        {
            if (1 == nums[i])
            {
                i32CurNums++;
                
                if (i32CurNums > i32MaxNums)
                {
                    i32MaxNums = i32CurNums; 
                }
            }
            else if (0 == nums[i])
            {
                i32CurNums = 0;
            }
        }
        
        return i32MaxNums;
    }
};