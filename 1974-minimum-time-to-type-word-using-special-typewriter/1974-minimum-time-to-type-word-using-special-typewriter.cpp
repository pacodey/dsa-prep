class Solution
{
public:
    int minTimeToType(string word)
    {
        int t = 0;
        char cur = 'a';
        for (char c : word)
        {
            t += min(abs(c - cur), 26 - abs(c - cur));
            t++;
            cur = c;
        }
        return t;
    }
};