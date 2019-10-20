class Solution {
public:
    int mySqrt(int x) 
    {
        long long low = 1;
        long long high = x;
        long long mid;
        
        if (x < 1)
            return 0;
        
        while (low < high - 1)
        {
            mid = (low + high) / 2;
            long long res = mid * mid;
            if (res > x)
                high = mid;
            else if (res < x)
                low = mid;
            else 
                return mid;
        }
        
        return low;
    }
};
