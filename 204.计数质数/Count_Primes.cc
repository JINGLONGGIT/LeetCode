// 暴力解法
class Solution {
public:
    bool isPrime(int n)
    {
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
                return false;
        }
        return true;
    }
    int countPrimes(int n)
    {
        int count = 0;   
        for (int i = 2; i < n; i++)
        {
            if (isPrime(i))
                count++;
        }
        return count;
    }
};

// 埃式筛法
class Solution {
public: 
    int countPrimes(int n) 
    {
        if (n <= 1)
            return 0;
        
        bool isPrime[n];
        int count = 0;
        
        for (int i = 0; i < n; i++)
        {
            isPrime[i] = true;
        }
        
        for (int i = 2; i < n; i++)
        {
            if (isPrime[i])
            {
                count++;
                for (int j = 2; i * j < n; j++)
                    isPrime[i * j] = false;
            }
        }

        return count;
    }
};