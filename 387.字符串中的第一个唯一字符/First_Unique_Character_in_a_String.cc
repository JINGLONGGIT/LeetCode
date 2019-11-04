// 哈希
class Solution {
public:
    int firstUniqChar(string s) 
    {
        int a[26] = {0};
        
        for (int i = 0; i < s.size(); i++)
        {
            a[s[i] - 'a']++;
        }
        
        for (int i = 0; i < s.size(); i++)
        {
            if (a[s[i] - 'a'] == 1)
                return i;
        }
        
        return -1;
    }
};

// 哈希优化
class Solution {
public:
    int firstUniqChar(string s) 
    {
        int Hash[256] = {0};
        
        for (int i = 0; i < s.size(); i++)
        {
            Hash[s[i]]++;
        }
        
        for (int i = 0; i < s.size(); i++)
        {
            if (Hash[s[i]] == 1)
                return i;
        }
        
        return -1;
    }
};