// 解法一：
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) 
    {
        vector<int> vecResult;
        vector<int> tmp(nums.size() + 1, 0);
        
        for (int i = 0; i < nums.size(); i++)
        {
            tmp[nums[i]] = 1;
        }
        
        for (int i = 1; i < tmp.size(); i++)
        {
            if (tmp[i] == 0)
            {
                vecResult.push_back(i);
            }
        }
        
        return vecResult;
    }
};

