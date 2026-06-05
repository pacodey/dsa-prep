class Solution
{
public:
    int maxProfit(vector <int> &prices)
    {
        if (prices.size() == 1)
        {
            return 0;
        }
        else
        {
            int max = prices[1] - prices[0];
            int minp = prices[0];
            for (int i = 0; i < prices.size(); i++)
            {
                if (minp > prices[i])
                {
                    minp = prices[i];
                }
                if (prices[i] - minp > max)
                {
                    max = prices[i] - minp;
                }
            }
            return (max > 0 ? max : 0);
        }
    }
};