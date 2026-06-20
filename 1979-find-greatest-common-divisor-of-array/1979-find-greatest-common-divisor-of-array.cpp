class Solution
{
public:
    int findGCD(vector <int> &nums)
    {
        int min = *min_element(nums.begin(), nums.end());
        int max = *max_element(nums.begin(), nums.end());
        return gcd(min, max);
    }
};

int gcd(int a, int b)
{
    int big = (a > b ? a : b);
    int small = (a < b ? a : b);
    if (small == 0)
    {
        return big;
    }
    else
    {
        return gcd(big - (big/small)*small, small);
    }
}