// ½â·¨¶þ£º
class Solution {
public:
    static bool cmp(const int &a, const int &b)
    {
        return a < b;
    }
    
    int maximumProduct(vector<int>& nums) 
    {
        int a, b;
        int i32Size = nums.size();
        
        sort(nums.begin(), nums.end(), cmp);
        
        a = nums[i32Size - 1] * nums[i32Size - 2] * nums[i32Size - 3];
        b = nums[i32Size - 1] * nums[0] * nums[1];
        
        return (a > b) ? a : b;
    }
};