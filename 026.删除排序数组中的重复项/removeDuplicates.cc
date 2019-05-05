class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        // 异常处理
        if (nums.size() == 1 || nums.size() == 0)
        {
            return nums.size();
        }
        
        int i32VecSize = 1;
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i - 1] != nums[i])
            {
                nums[i32VecSize++] = nums[i];
            }
        }
        
        return i32VecSize;
    }
};