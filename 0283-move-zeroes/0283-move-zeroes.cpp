class Solution
{
public:
    void moveZeroes(vector <int> &nums)
    {
        int wp = 0;
        for (int rp = 0; rp < nums.size(); rp++)
        {
            if (nums[rp] != 0)
            {
                nums[wp] = nums[rp];
                wp++;
            }
        }
        for (int i = wp; i < nums.size(); i++)
        {
            nums[i] = 0;
        }
    }
};