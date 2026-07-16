class Solution
{
public:
    long long gcdSum(vector <int> &nums)
    {
        vector <int> prefixgcd(nums.size());
        int max = nums[0];
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] > max)
            {
                max = nums[i];
            }
            prefixgcd[i] = gcd(nums[i], max);
        }

        sort(prefixgcd.begin(), prefixgcd.end());

        long long int sum = 0;
        for (int i = 0; i < nums.size()/2; i++)
        {
            sum += gcd(prefixgcd[i], prefixgcd[nums.size() - i - 1]);
        }
        return sum;
    }
};