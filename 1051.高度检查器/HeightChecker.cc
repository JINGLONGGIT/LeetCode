// 解法一：
class Solution {
public:
    static bool cmp(const int& a, const int& b)
    {
        return a < b;
    }
    
    int heightChecker(vector<int>& heights) 
    {
        int i32Nums = 0; 
        vector<int> tmp(heights.begin(), heights.end());
        
        sort(heights.begin(), heights.end(), cmp);
        
        for (int i = 0; i < heights.size(); i++)
        {
            if (tmp[i] != heights[i])
            {
                i32Nums++;
            }
        }
        
        return i32Nums;
    }
};