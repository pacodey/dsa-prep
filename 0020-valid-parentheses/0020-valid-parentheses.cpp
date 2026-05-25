class Solution
{
public:
    bool isValid(string s)
    {
        stack <char> opens;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '(' or s[i] == '[' or s[i] == '{')
            {
                opens.push(s[i]);
            }
            else if (s[i] == ')')
            {
                if (!opens.empty() and opens.top() == '(')
                {
                    opens.pop();
                }
                else
                {
                    return false;
                }
            }
            else if (s[i] == ']')
            {
                if (!opens.empty() and opens.top() == '[')
                {
                    opens.pop();
                }
                else
                {
                    return false;
                }
            }
            else
            {
                if (!opens.empty() and opens.top() == '{')
                {
                    opens.pop();
                }
                else
                {
                    return false;
                }
            }
        }
        if (opens.empty())
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};