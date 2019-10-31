// 顺序遍历
class Solution {
public:
    bool isSubsequence(string s, string t) 
    {
        if (s.size() == 0)
            return true;
        for (int i = 0, j = 0; i < t.size(); i++)
        {
            if (s[j] == t[i])
                j++;
            if (j == s.size())
                return true;
        }
            
        return false;
    }
};

// 顺序遍历
class Solution {
public:
    bool isSubsequence(string s, string t) 
    {
        if (s.size() == 0)
            return true;
        int i = 0, j = 0;
        while (i < s.size() && j < t.size())
        {
            if (s[i] == t[j])
                i++;
            j++;
        }
        return i == s.size();
    }
};