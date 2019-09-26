class Solution {
public:
    bool isValid(string s) {
        stack<char> s_stack;
        char x;
        
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[')
            {
                s_stack.push(s[i]);
                continue;
            }
            
            if (s_stack.empty())
                return false;
            
            switch (s[i])
            {
                case ')':
                {
                    x = s_stack.top();  
                    s_stack.pop();
                    if (x != '(')
                        return false;
                    break;
                }
                    
                case '}':
                {
                    x = s_stack.top();  
                    s_stack.pop();
                    if (x != '{')
                        return false;
                    break;
                }   
                    
                case ']':
                {
                    x = s_stack.top();  
                    s_stack.pop();
                    if (x != '[')
                        return false;
                    break;
                }
            }
        }
        
        return s_stack.empty();
    }
};