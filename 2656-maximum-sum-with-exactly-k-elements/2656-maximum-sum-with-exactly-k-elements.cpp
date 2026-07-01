class Solution
{
public:
    int maximizeSum(vector <int> &nums, int k)
    {
        int max = *max_element(nums.begin(), nums.end());
        return k*(2*max + k - 1)/2;
    }
};