class Solution {
public:
    int arrangeCoins(int n) 
    {
        int line = 0;
        
        while (n > line)
        {
            line++;
            n -= line;
        }
        
        return line;
    }
};