// 异或
class Solution {
public:
    int singleNumber(vector<int>& nums) 
    {
        int res = 0;
        for (int i = 0; i < nums.size(); i++)
            res ^= nums[i];
        return res;
    }
};

// 排序 + 双指针
class Solution {
public:
    int singleNumber(vector<int>& nums) 
    {
        sort(nums.begin(), nums.end());
        for (int i = 0, j = 1; j < nums.size(); i += 2, j += 2)
        {
            if (nums[i] != nums[j])
                return nums[i];
        }
        
        return nums[nums.size() - 1];
    }
};

