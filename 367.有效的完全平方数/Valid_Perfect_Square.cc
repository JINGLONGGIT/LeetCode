// 二分法
class Solution {
public:
    bool isPerfectSquare(int num) 
    {
        long long left = 1;
        long long right = num;
        
        while (left <= right)
        {
            long long mid = (left + right) / 2;
            if ((long long)mid * mid < num)
                left = mid + 1;
            else if ((long long)mid * mid > num)
                right = mid - 1;
            else
                return true;
        }

        return false;
    }
};

// 暴力解法
class Solution {
public:
    bool isPerfectSquare(int num) 
    {
        long long i = 1;
        while (i * i < num)
            i++;
        return i * i == num;
    }
};