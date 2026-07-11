class Solution
{
public:
    bool isGoodArray(vector<int> &nums)
    {
        int hcf = nums[0];
        if (hcf == 1)
        {
            return true;
        }

        for (int x : nums)
        {
            hcf = gcd(hcf, x);
            if (hcf == 1)
            {
                return true;
            }
        }
        return (hcf == 1);
    }
};