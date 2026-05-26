class Solution
{
public:
    int numberOfSpecialChars(string word)
    {
        set <char> s;
        for (auto c : word)
        {
            s.insert(c);
        }
        int special = 0;
        for (auto c : s)
        {
            if (s.find((char)(c + 32)) != s.end())
            {
                special++;
            }
        }
        return special;
    }
};