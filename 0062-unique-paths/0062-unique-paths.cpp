class Solution
{
public:
    int uniquePaths(int m, int n)
    {
        int r = m > n ? n - 1 : m - 1;
        if (r > (m + n - 2)/2)
        {
            r = m + n - r - 2;
        }
        long long int ans = 1;
        for (int i = 1; i <= r; i++)
        {
            ans = ans * (m + n - i - 1)/i;
        }
        return (int)ans;
    }
};