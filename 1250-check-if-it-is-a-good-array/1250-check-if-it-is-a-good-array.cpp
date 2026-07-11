class Solution
{
public:
    bool isGoodArray(vector <int> &nums)
    {
        int hcf = nums[0];
        if (hcf == 1)
        {
            return true;
        }
        for (int i = 1; i < nums.size(); i++)
        {
            hcf = gcd(hcf, nums[i]);
            if (hcf == 1)
            {
                return true;
            }
        }
        return (hcf == 1);
    }
};