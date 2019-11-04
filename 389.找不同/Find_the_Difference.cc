// 排序 + 遍历
class Solution {
public:
    char findTheDifference(string s, string t) 
    {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        
        int i = 0, j = 0;
        for (; i < s.size() && j < t.size(); i++, j++)
        {
            if (s[i] != t[j])
                break;
        }
        
        if (i == s.size())
            return t[t.size() - 1];
        
        return t[j];
    }
};

// 异或
class Solution {
public:
    char findTheDifference(string s, string t) 
    {
        char a = 0;
        for (int i = 0; i < s.size(); i++)
            a ^= s[i];
        for (int i = 0; i < t.size(); i++)
            a ^= t[i];
        return a;
    }
};