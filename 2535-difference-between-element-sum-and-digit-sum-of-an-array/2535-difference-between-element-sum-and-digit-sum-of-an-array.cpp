class Solution
{
public:
    int differenceOfSum(vector <int> &nums)
    {
        int sum = 0;
        int dsum = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            sum += nums[i];
            while (nums[i] > 0)
            {
                dsum += nums[i] % 10;
                nums[i] = nums[i]/10;
            }
        }
        return sum - dsum;
    }
};