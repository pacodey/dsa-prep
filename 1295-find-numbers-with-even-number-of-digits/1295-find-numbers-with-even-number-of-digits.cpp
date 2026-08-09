class Solution
{
public:
    int findNumbers(vector <int> &nums)
    {
        int ed = 0;
        int d = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            while (nums[i] > 0)
            {
                nums[i] = nums[i]/10;
                d++;
            }
            if (d % 2 == 0)
            {
                ed++;
            }
            d = 0;
        }
        return ed;
    }
};