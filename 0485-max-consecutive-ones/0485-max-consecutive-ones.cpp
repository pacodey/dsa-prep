class Solution
{
public:
    int findMaxConsecutiveOnes(vector <int> &nums)
    {
        vector <int> zeros = {-1};
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 0)
            {
                zeros.push_back(i);
            }
        }
        zeros.push_back(nums.size());
        int max = 0;
        for (int i = 0; i < zeros.size() - 1; i++)
        {
            if (zeros[i + 1] - zeros[i] > max)
            {
                max = zeros[i + 1] - zeros[i];
            }
        }
        return max - 1;
    }
};