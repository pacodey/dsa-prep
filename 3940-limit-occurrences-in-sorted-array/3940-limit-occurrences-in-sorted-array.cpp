class Solution
{
public:
    vector <int> limitOccurrences(vector <int> &nums, int k)
    {
        int i = 0;
        vector <int> arr;
        while (i < nums.size())
        {
            int c = count(nums.begin(), nums.end(), nums[i]);
            if (c >= k)
            {
                for (int j = 0; j < k; j++)
                {
                    arr.push_back(nums[i]);
                }
            }
            else
            {
                for (int j = 0; j < c; j++)
                {
                    arr.push_back(nums[i]);
                }
            }
            i += c;
        }
        return arr;
    }
};