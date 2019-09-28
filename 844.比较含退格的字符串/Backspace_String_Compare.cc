class Solution {
public:
    bool backspaceCompare(string S, string T) 
    {
        stack<char> S_stack = stackPush(S);
        stack<char> T_stack = stackPush(T);
        
        while (!S_stack.empty() && !T_stack.empty())
        {
            if (S_stack.top() == T_stack.top())
            {
                S_stack.pop();
                T_stack.pop();
            }
            else
            {
                return false;
            }
        }
        
        if (S_stack.empty() && T_stack.empty())
            return true;
        
        return false;
    }
    
    stack<char> stackPush (string str)
    {
        stack<char> s;
        
        for (int i = 0;  i < str.size(); i++)
        {
            if (str[i] != '#')
            {
                s.push(str[i]);
            }
            else 
            {   
                if (!s.empty())
                    s.pop();
            }
        }
        
        return s;
    }
};