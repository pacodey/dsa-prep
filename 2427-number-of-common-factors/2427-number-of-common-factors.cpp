class Solution
{
public:
    int commonFactors(int a, int b)
    {
        int ans = 0;
        int hcf = gcd(a, b);
        for (int i = 1; i <= hcf; i++)
        {
            if (a % i == 0 and b % i == 0)
            {
                ans++;
            }
        }
        return ans;
    }
};

int gcd(int x, int y)
{
    int small = (x < y ? x : y);
    int big = x + y - small;
    if (small == 0)
    {
        return big;
    }
    return gcd(small, big - (big/small)*small);
}