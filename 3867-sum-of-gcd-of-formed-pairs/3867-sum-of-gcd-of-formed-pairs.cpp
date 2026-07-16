class Solution
{
public:
    long long gcdSum(vector <int> &nums)
    {
        vector <int> prefixgcd(nums.size());
        int nowmax = nums[0];
        for (int i = 0; i < nums.size(); i++)
        {
            nowmax = max(nowmax, nums[i]);
            prefixgcd[i] = gcd(nums[i], nowmax);
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