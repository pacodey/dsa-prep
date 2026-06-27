class Solution
{
public:
    int mostFrequentEven(vector <int> &nums)
    {
        map <int, int> freq;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i]%2 == 0)
            {
                freq[nums[i]/2]++;
            }
        }
        int max = 0;
        int n = -1;
        for (auto p : freq)
        {
            if (p.second > max)
            {
                max = p.second;
                n = p.first;
            }
        }
        return (n > 0 ? 2*n : n);
    }
};