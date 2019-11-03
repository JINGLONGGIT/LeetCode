// 暴力遍历
class Solution {
public:
    int numJewelsInStones(string J, string S) 
    {
        int count = 0;
        for (int i = 0; i < J.size(); i++)
        {
            for (int j = 0; j < S.size(); j++)
            {
                if (J[i] == S[j])
                {
                    count++;
                }
            }
        }
        return count;
    }
};

// set哈希
class Solution {
public:
    int numJewelsInStones(string J, string S) 
    {
        int count = 0;
        set<char> SetJ;
        
        for (int i = 0; i < J.size(); i++)
        {
            SetJ.insert(J[i]);
        }
        
        for (int i = 0; i < S.size(); i++)
        {
            if (SetJ.find(S[i]) != SetJ.end())
                count++;
        }
        
        return count;
    }
};