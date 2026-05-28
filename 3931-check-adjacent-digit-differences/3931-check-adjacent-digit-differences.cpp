class Solution
{
public:
    bool isAdjacentDiffAtMostTwo(string s)
    {
        for (int i = 0; i < s.size() - 1; i++)
        {
            if (!(s[i] - s[i+1] < 3 and s[i] - s[i+1] > -3))
            {
                return false;
            }
        }
        return true;
    }
};