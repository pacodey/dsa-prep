class Solution
{
public:
    int numJewelsInStones(string jewels, string stones)
    {
        int both = 0;
        for (char j : jewels)
        {
            for (char s : stones)
            {
                if (j == s)
                {
                    both++;
                }
            }
        }
        return both;
    }
};