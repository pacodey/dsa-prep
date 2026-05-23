class Solution
{
public:
    int lengthOfLastWord(string s)
    {
        int l = 0;
        auto c = --s.end();
        while (*c == ' ')
        {
            c--;
        }
        while ((*c >= 'A' and *c <= 'Z') or (*c >= 'a' and *c <= 'z'))
        {
            l++;
            c--;
        }
        return l;
    }
};