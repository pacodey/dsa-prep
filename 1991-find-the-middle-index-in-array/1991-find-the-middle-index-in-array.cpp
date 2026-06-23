class Solution
{
public:
    int findMiddleIndex(vector <int> &nums)
    {
        int rsum = 0;
        for (int i = 1; i < nums.size(); i++)
        {
            rsum += nums[i];
        }
        if (rsum == 0)
        {
            return 0;
        }
        int lsum = 0;
        for (int i = 1; i < nums.size(); i++)
        {
            lsum += nums[i - 1];
            rsum -= nums[i];
            if (lsum == rsum)
            {
                return i;
            }
        }
        return -1;
    }
};