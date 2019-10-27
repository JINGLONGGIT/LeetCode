// 顺序遍历
// Forward declaration of isBadVersion API.
bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) 
    {
        for (int i = 1; i <= n; i++)
        {
            if (isBadVersion(i) == true)
                return i;
        }
        
        return 1;
    }
};

// 二分法
// Forward declaration of isBadVersion API.
bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) 
    {
        int left = 1;
        int right = n;
        
        while (left < right)
        {
            int mid = left + (right - left) / 2;
            
            if (!isBadVersion(mid))
                left = mid + 1;
            else 
                right = mid;
        }

        return left;
    }
};

// 二分法
// Forward declaration of isBadVersion API.
bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) 
    {
        int left = 1;
        int right = n;
        
        if (isBadVersion(1))
            return 1;
        
        while (left < right)
        {
            int mid = left + (right - left) / 2;
            
            if (isBadVersion(mid) && !isBadVersion(mid - 1))
                return mid;
            else if (isBadVersion(mid))
                right = mid;
            else
                left = mid + 1;
        }
        if (isBadVersion(left) && !isBadVersion(left - 1))
            return left;
        return -1;
    }
};