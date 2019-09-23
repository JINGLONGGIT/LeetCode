// 排序 + 双指针
class Solution {
public:
    int findPairs(vector<int>& nums, int k) 
    {
        if (nums.size() < 2 || k < 0)
            return 0;
        
        sort(nums.begin(), nums.end());
        
        int i32Res = 0;
        
        for (int i = 0; i < nums.size() - 1; i++)
        {
            if (i >= 1 && nums[i] == nums[i - 1])
                continue;
            
            for (int j = i + 1; j < nums.size(); j++)
            {
                if (j == i + 1)
                {
                    if ((nums[j] - nums[i]) == k)
                    {
                        i32Res++;
                    }
                }
                else 
                {
                    if (nums[j] == nums[j - 1])
                    {
                        continue;
                    }
                    else
                    {
                        if ((nums[j] - nums[i]) == k)
                        {
                            i32Res++;
                        } 
                    }
                }
            }
        }
        
        return i32Res;
    }
};

