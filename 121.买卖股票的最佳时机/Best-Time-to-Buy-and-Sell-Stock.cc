// 暴力解法
class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int i32maxfirst = 0;
        int i32maxend = 0;
        
        for (int i = 0; i < prices.size() - 1; i++)
        {
            for (int j = i + 1; j < prices.size(); j++)
            {
                i32maxfirst = prices[j] - prices[i];
                
                if (i32maxfirst > i32maxend)
                    i32maxend = i32maxfirst;
            }
        }
        
        return i32maxend;
    }
};

int maxProfit(int* prices, int pricesSize)
{
    int i32maxfirst = 0;
    int i32maxend = 0;
    for (int i = 0; i < pricesSize - 1; i++)
    {
        for (int j = i + 1; j < pricesSize; j++)
        {
            i32maxfirst = prices[j] - prices[i];
            if (i32maxfirst > i32maxend)
                i32maxend = i32maxfirst;
        }
    }
    
    return i32maxend;
}

// 动态规划
