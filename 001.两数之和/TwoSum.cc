class Solution 
{
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        vector<int> vecResult;
        
        // 边界条件判断
        if (nums.size() == 1 && nums[0] == target)
        {
            vecResult.push_back(0);
            return vecResult;
        }
        
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                if (target == nums[i] + nums[j])
                {
                    vecResult.push_back(i);
                    vecResult.push_back(j);
                    
                    return vecResult;
                }
            }
        }
        
        return vecResult;
    }
};