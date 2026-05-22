class Solution
{
public:
    int removeElement(vector <int> &nums, int val)
    {
        int k = nums.size();
        for (auto &it : nums)
        {
            if (it == val)
            {
                k--;
                it = 1000;
            }
        }
        sort(nums.begin(), nums.end());
        return k;
    }
};