class Solution
{
public:
    int bulbSwitch(int n)
    {
        // number of numbers from 1 to n having odd number of factors
        // number of perfect squares 1 to n
        if (n == 0 or n == 1)
        {
            return n;
        }
        int ans = 1;
        for (int i = 2; i * i <= n; i++)
        {
            ans++;
        }
        return ans;
    }
};