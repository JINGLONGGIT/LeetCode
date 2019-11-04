class Solution {
public:
    vector<string> uncommonFromSentences(string A, string B) 
    {
        int temp = 0;
        vector<string> res;
        unordered_map<string, int> HashMapWords;
        
        for (int i = 0; i < A.size(); i++)
        {
            if (A[i] == ' ')
            {
                string word = A.substr(temp, i - temp);
                temp = i + 1;
                (HashMapWords.find(word) == HashMapWords.end()) ? (HashMapWords[word] = 1) : HashMapWords[word]++;
            }
            
            if (i == A.size() - 1)
            {
                string word = A.substr(temp, i - temp + 1);
                temp = i + 1;
                (HashMapWords.find(word) == HashMapWords.end()) ? (HashMapWords[word] = 1) : HashMapWords[word]++;
            }
        }
        
        temp = 0;
        for (int i = 0; i < B.size(); i++)
        {
            if (B[i] == ' ')
            {
                string word = B.substr(temp, i - temp);
                temp = i + 1;
                (HashMapWords.find(word) == HashMapWords.end()) ? (HashMapWords[word] = 1) : HashMapWords[word]++;
            }
            
            if (i == B.size() - 1)
            {
                string word = B.substr(temp, i - temp + 1);
                temp = i + 1;
                (HashMapWords.find(word) == HashMapWords.end()) ? (HashMapWords[word] = 1) : HashMapWords[word]++;
            }
        }
        
        for (unordered_map<string, int>::iterator it = HashMapWords.begin(); it != HashMapWords.end(); it++)
        {
            if (it->second == 1)
                res.push_back(it->first);
        }
        
        return res;
    }
};