// 排序 + 比较
class Solution {
public:
    bool isAnagram(string s, string t)
    {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        
        return s == t;
    }
};

// 哈希
class Solution {
public:
    bool isAnagram(string s, string t) 
    {
        if (s.length() != t.length())
            return false;
        
        int *temp = new int[26]();
        for (int i = 0; i < s.length(); i++)
        {
            temp[s[i] - 'a']++;
            temp[t[i] - 'a']--;
        }
        
        for (int i = 0; i < 26; i++)
        {
            if (temp[i] != 0)
                return false;   
        }
        
        return true;
    }
};