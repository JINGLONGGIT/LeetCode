// 哈希一
class Solution {
public:
    vector<string> findWords(vector<string>& words) 
    {
        vector<string> a = {"qwertyuiop", "asdfghjkl", "zxcvbnm"};
        vector<string> res;

        for (int i = 0; i < words.size(); i++)
        {
            for (int j = 0; j < a.size(); j++)
            {
                if (a[j].find(tolower(words[i][0])) != string::npos)
                {
                    int k = 1;
                    for (k = 1; k < words[i].size(); k++)
                    {
                        if (a[j].find(tolower(words[i][k])) == string::npos)
                             break;
                    }
                    
                    if (k == words[i].size())
                    {
                        res.push_back(words[i]);
                        break;
                    }
                }
            }
        }
        
        return res;
    }
};

// 哈希二
class Solution {
public:
    vector<string> findWords(vector<string>& words) 
    {
        string a{"qwertyuiop"};
        string b{"asdfghjkl"};
        string c{"zxcvbnm"};
        vector<string> res;
        
        for (int i = 0; i < words.size(); i++)
        {
            int a_count = 0, b_count = 0, c_count = 0;
            
            for (int j = 0; j < words[i].size(); j++)
            {
                if (a.find(tolower(words[i][j])) != string::npos) a_count++;
                if (b.find(tolower(words[i][j])) != string::npos) b_count++;
                if (c.find(tolower(words[i][j])) != string::npos) c_count++;
            }
            
            if (a_count == words[i].size()
                || b_count == words[i].size()
                || c_count == words[i].size())
            {
                res.push_back(words[i]);
            }
        }
        
        return res;
    }
};