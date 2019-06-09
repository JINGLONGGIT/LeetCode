class Solution 
{
public:
    int searchInsert(vector<int>& nums, int target) 
    {
        // 处理边界条件
        if (nums[0] > target)
        {
            return 0;
        }
        else if (nums[nums.size() - 1] < target)
        {
            return nums.size();
        }
        
        for (int i = 0; i < nums.size(); i++)
        {
            if (target == nums[i])
            {
                return i;
            }

            if (nums[i] < target && nums[i + 1] > target)
            {
                return i + 1;
            }
        }
        
        return nums.size();
    }
};