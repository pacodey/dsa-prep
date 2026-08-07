class Solution
{
public:
    int smallestRangeI(vector <int> &nums, int k)
    {
        int minv = nums[0];
        int maxv = nums[0];

        for (int x : nums)
        {
            minv = min(minv, x);
            maxv = max(maxv, x);
        }

        return max(0, maxv - minv - 2*k);
    }
};