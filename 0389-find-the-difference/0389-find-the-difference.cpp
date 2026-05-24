class Solution
{
public:
    char findTheDifference(string s, string t)
    {
        int ssum = 0;
        int tsum = 0;
        for (int i = 0; i < s.size(); i++)
        {
            ssum += (int)s[i];
            tsum += (int)t[i];
        }
        tsum += t[t.size() - 1];

        return (char)(tsum - ssum);
    }
};