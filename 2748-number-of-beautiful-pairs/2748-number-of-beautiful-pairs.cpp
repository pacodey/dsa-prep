class Solution
{
public:
    int countBeautifulPairs(vector <int> &nums)
    {
        int bp = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                int temp = nums[i];
                while (temp >= 10)
                {
                    temp = temp/10;
                }
                if (gcd(nums[j] % 10, temp) == 1)
                {
                    bp++;
                }
            }
        }
        return bp;
    }
};