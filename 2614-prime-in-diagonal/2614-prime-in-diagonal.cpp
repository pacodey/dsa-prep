bool isprime(int n)
{
    if (n <= 1)
    {
        return false;
    }
    if (n <= 3)
    {
        return true;
    }
    if (n % 2 == 0 or n % 3 == 0)
    {
        return false;
    }
    for (int i = 5; i * i <= n; i += 6)
    {
        if (n % i == 0 or n % (i + 2) == 0)
        {
            return false;
        }
    }
    return true;
}

class Solution
{
public:
    int diagonalPrime(vector <vector <int>> &nums)
    {
        int ans = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i][i] > ans and isprime(nums[i][i]))
            {
                ans = nums[i][i];
            }
            if (nums[i][nums.size() - i - 1] > ans and isprime(nums[i][nums.size() - i - 1]))
            {
                ans = nums[i][nums.size() - i - 1];
            }
        }
        return ans;
    }
};