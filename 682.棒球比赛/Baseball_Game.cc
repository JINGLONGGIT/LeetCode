class Solution {
public:
    int calPoints(vector<string>& ops) 
    {
        int i32Res = 0;
        stack<int> s;
        
        if (ops.size() == 0)
            return 0;
        
        for (int i = 0; i < ops.size(); i++)
        {
            if (ops[i] == "+")
            {
                int i32OldTop = s.top();
                s.pop();
                int newtop = s.top() + i32OldTop;
                s.push(i32OldTop);
                s.push(newtop);
            }
            else if (ops[i] == "D")
            {
                s.push(s.top() * 2);
            }
            else if (ops[i] == "C")
            {
                s.pop();
            }
            else
            {
                s.push(stoi(ops[i]));
            }
        }
        
        while (!s.empty())
        {
            i32Res += s.top();
            s.pop();
        }
        
        return i32Res;
    }
};